#include<stdio.h>
#include<string.h>
void main()
{
char bits[500];
int count=0,i;
printf("Enter the bits to stuffed : ");
scanf("%s",&bits);
printf("the input given by user for bit stuffing \t  %s \n",bits);
printf("the stuffed bits are \t");
for(i=0;i<strlen(bits);i++)
{
if(bits[i]=='1')
count++;
else
count=0;
printf("%c",bits[i]);
if(count==5)
{
printf("0");
count=0;
}
}

}