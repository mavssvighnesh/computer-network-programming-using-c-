#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,r,a;
printf("enter the no of packets to be sent");
scanf("%d",&n);

printf("The No of Packets are : %d\n",n);
for(i=1;i<=n;i++)
{
printf("The Packet Sent is %d\n",i);
r=rand()%2;
if(r==0)
{
printf("Ack number : %d\n",i+1);
}
else
{
printf("NACK number : %d\n",i+1);
printf("Time Out..! Resend Packet\n");
i--;
}
}
}