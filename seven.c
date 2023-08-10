#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[6],i,count=0,len;
	printf("Enter the string\n");
	gets(str);
	len=strlen(str);
	if(len%2!=0)
	{
		printf("string is not avalid string\n");
		exit(0);
	}
	for(i=0;str[i]!='\0';i+=2)
	{
		if(str[i]=='('&&str[i+1]==')' || str[i]=='[' && str[i+1]==']' || str[i]=='{' && str[i+1]=='}')
		{
			count++;
		}
	}
	if(count==len/2)
	{
		printf("string is valid\n");
	}
	else
	{
		printf("string is not a valid string\n");
	}
}



