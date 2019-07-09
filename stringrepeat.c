#include<stdio.h>
#include<string.h>
void main()
{
char s1[100];
int i,j,in=0,n;
printf("enter the string");
scanf("%[^\n]s",s1);
n=strlen(s1);
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
if(s1[i]==s1[j])
break;
if(j==i)
s1[in++]=s1[i];
}
printf("%s",s1);
}
