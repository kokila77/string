#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
int i,j;
printf("enter the string");
scanf("%[^\n]s",s1);
scanf("%s",s2);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]==s2[0])
{
for(j=1;((s2[j]!='\0'&& s1[i+j]!='\0') || (s1[i+j]==s2[j]));j++){
}
if(s2[j]=='\0')
printf("%d",i+1);
}
}
}

