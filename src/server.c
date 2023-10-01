#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<unistd.h>
#include<netdb.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<string.h>
int main(int argc,char *argv[])
{
int clientSocketDescriptor,socketDescriptor;
socklen_t clientLength;
char recvBuffer[8000],sendBuffer[8080];
pid_tcpid;
bzero(&serverAddress,sizeof(serverAddress));
serverAddress.sin_family=AF_INET;
serverAddress.sin_port=htons(9652);
bind(socketDescriptor,(struct sockaddr*)&serverAddress,sizeof(serverAddress));
printf("%s\n","Server is running ...");
clientSocketDescriptor=accept(socketDescriptor,(struct
sockaddr*)&clientAddress,&clientLength);

if(cpid==0)
{
while(1)
{
bzero(&recvBuffer,sizeof(recvBuffer));
printf("\nCLIENT : %s\n",recvBuffer);
}
}
else
{
while(1)
{
bzero(&sendBuffer,sizeof(sendBuffer));
printf("\nType a message here ... ");
send(clientSocketDescriptor,sendBuffer,strlen(sendBuffer)+1,0);
printf("\nMessage sent !\n");
}
}
return 0;
}