#include<stdio.h>
int main()
{
int nq, s, out;
int inp, buksize, sizeleft;
s = 0;
nq = 4;
buksize = 10;
inp = 4;
out = 1;
for(int i=0; i<nq;i++)
{
sizeleft = buksize - s;
if(inp <= sizeleft)
{
s += inp;
printf("Buffer size: %d Out of bucket size: %d\n", s, buksize);
}
else
{
printf("Packet loss: %d\n", (inp-(sizeleft)));
s=buksize;
printf("Buffer size: %d out of bucket size: %d\n", s, buksize);
}
s -= out;
}
return 0;
}