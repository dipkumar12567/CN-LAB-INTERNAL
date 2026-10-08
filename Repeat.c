#include<stdio.h>
int main()
{
int windowsize,sent=0,ack,i,c;
printf("Enter windowsize:");
scanf("%d",&windowsize);
while(1)
{
for(i=0;i<windowsize;i++)
{
if(sent>windowsize)
{
break;
}
printf("Frame %d transmitted\n",sent);
sent++;
}
printf("\n Enter your choice\n 1.Enter Acknowlegedment\n 2.Exit\n ");
scanf("%d",&c);
if(c==1)
{
int ack1;
printf("Enter the frame number for acknowlwgedment:\n");
scanf("%d",&ack);
if(ack<0||ack>=windowsize)
{
printf("Invalid acknowlegedment frame number\n");
continue;
}
if(ack<sent)
{
printf("Frame %d is already received.\n",ack);
}
else
{
printf("Frame %d is acknowleged.\n",ack);
}
if(ack==windowsize-1)
{
printf("All frame has benn acknowleged.\n");
break;
}
}
else if(c==2)
{
printf("Exiting...\n");
break;
}
else
{
printf("Invalid choice please enter 1 and 2\n");
}
}
}