#include <stdio.h>
#include<stdlib.h>
int main()
{
int p,i=1,a,w,nac,ack;
printf("enter the no of packets");
scanf("%d",&a);
printf("enter the window size");
scanf("%d",&w);
printf("Transmitting begins...! No of Packets : %d\n",a);
while(i<=a)
{
printf("Sending Packets from %d to %d\n",i,w+i-1);
for(p=i;p<w+i;p++)
printf("Transmitting Packet %d\n",p);
nac = i+rand()%w;
if(nac==i)
{
printf("Ack : %d\n",w+i);
i=i+w;
continue;
}
printf("NACK : %d\n",nac);
printf("Sending Packet : %d\n",nac);
printf("Ack : %d\n",nac+1);
printf("Ack : %d\n",i+w);
i = i + w;
}
return 0;
}