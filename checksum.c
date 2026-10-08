#include<stdio.h>
#include<string.h>
int main()
{
  char a[20],b[20];
  char sum[20],complement[20];
  int i,length;
  printf("Enter first binary string:\n");
  scanf("%s",a);
  printf("Enter second binary syring:\n");
  scanf("%s",b);
  if(strlen(a)==strlen(b))
  {
    length=strlen(a);
    char carry='0';
    for(i=length-1;i>=0;i--)
      {
        if(a[i]=='0'&&b[i]=='0'&&carry=='0')
        {
          sum[i]='0';
          carry='0';
        }
        else if(a[i]=='0'&&b[i]=='0'&&carry=='1')
        {
          sum[i]='1';
          carry='0';
        }
        else if(a[i]=='0'&&b[i]=='1'&&carry=='0')
        {
          sum[i]='1';
          carry='0';
        }
        else if(a[i]=='0'&&b[i]=='1'&&carry=='1')
        {
          sum[i]='0';
          carry='1';
        }
        else if(a[i]=='1'&&b[i]=='0'&&carry=='0')
        {
          sum[i]='1';
          carry='0';
        }
        else if(a[i]=='1'&&b[i]=='0'&&carry=='1')
        {
          sum[i]='0';
          carry='1';
        }
        else if(a[i]=='1'&&b[i]=='1'&&carry=='0')
        {
          sum[i]='0';
          carry='1';
        }
        else if(a[i]=='1'&&b[i]=='1'&&carry=='1')
        {
          sum[i]='1';
          carry='1';
        }
        else
          break;
      }
    printf("\nCarry=%c,Sum=%s",carry,sum);
    for(i=length-1;i>0;i--)
      {
        if(sum[i]=='1'&&carry=='0')
        {
          sum[i]='0';
          carry='1';
        }
        else if(sum[i]=='0'&&carry=='1')
        {
          sum[i]='1';
          break;
        }
        else 
          break;
      }
    for(i=0;i<length;i++)
      {
        if(sum[i]=='0')
          complement[i]='1';
        else
          complement[i]='0';
      }
    printf("\nChecksum=%s",complement);
  }
  else
  {
    printf("\n Wrong input string");
  }
}