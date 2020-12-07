// 局域网远程唤醒(Wakeup On LAN) -- 发送一个Magic Packet到某个MAC地址
// Magic Packet：UDP广播包，端口不限，数据是FF-FF-FF-FF-FF-FF加16个MAC
// 编译：cl sendmagic.cpp ws2_32.lib

#include <windows.h>
#include <stdio.h>
#pragma comment(lib,"ws2_32.lib")

int main(int argc, char *argv[])
{
 //检查命令行参数
 if(argc!=2)
 {
  printf("Wakeup your PC on LAN! by CJ<4uto@163.com>/n");
  printf("Usage: %s <MAC address>/n", argv[0]);
  printf("Example: %s 00-D0-4C-BF-52-BA", argv[0]);
  return 0;
 }

 //检查MAC地址是否正确
 for (char * a=argv[1]; *a; a++)
  if (*a!='-' && !isxdigit(*a))
  {
   fprintf(stderr, "MAC Adresse must be like this: 00-D0-4C-BF-52-BA");
   return 1;
  }

 int dstaddr[6];
 int i=sscanf_s(argv[1], "%2x-%2x-%2x-%2x-%2x-%2x",
                &dstaddr[0], &dstaddr[1], &dstaddr[2], &dstaddr[3], &dstaddr[4], &dstaddr[5]);
 if (i!=6)
 {
  fprintf(stderr, "Invalid MAC Adresse!");
  return 1;
 }

 unsigned char ether_addr[6];
 for (i=0; i<6; i++)
  ether_addr[i]=dstaddr[i];

 //构造Magic Packet
 u_char magicpacket[200];
 memset(magicpacket, 0xff, 6);
 int packetsize=6;
 for (i=0; i<16; i++)
 {
  memcpy(magicpacket+packetsize, ether_addr, 6);
  packetsize+=6;
 }

 //启动WSA
 WSADATA WSAData;
 if (WSAStartup( MAKEWORD(2, 0), &WSAData)!=0)
 {
  fprintf(stderr, "WSAStartup failed: %d/n", GetLastError());
  return 1;
 }

 //创建socket
 SOCKET sock=socket(AF_INET, SOCK_DGRAM, 0);
 if (sock==INVALID_SOCKET)
 {
  fprintf(stderr, "Socket create error: %d/n", GetLastError());
  return 1;
 }

 //设置为广播发送
 BOOL bOptVal=TRUE;
 int iOptLen=sizeof(BOOL);
 if (setsockopt(sock, SOL_SOCKET, SO_BROADCAST, (char*)&bOptVal, iOptLen)==SOCKET_ERROR)
 {
  fprintf(stderr, "setsockopt error: %d/n", WSAGetLastError());
  closesocket(sock);
  WSACleanup();
  return 1;
 }

 sockaddr_in to;
 to.sin_family=AF_INET;
 to.sin_port=htons(0);
 to.sin_addr.s_addr=htonl(INADDR_BROADCAST);

 system("pause");
 //发送Magic Packet
 if (sendto(sock, (const char *)magicpacket, packetsize, 0, (const struct sockaddr *)&to, sizeof(to))==SOCKET_ERROR)
  fprintf(stderr, "Magic packet send error: %d", WSAGetLastError());
 else
  printf("Magic packet send!");

 closesocket(sock);
 WSACleanup();

 system("pause");
 return 0;

}