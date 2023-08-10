#include<stdio.h>
#include<string.h>
void main()
{
        char str[50],count=0,len,i,j,temp;
        printf("enter the string to reverse words\n");
        gets(str);
	len=strlen(str);
        printf("the string is %s\n",str);
	for(i=0;i<len;i++)
	{
		temp=str[len-1];
		for(j=len-1;j>0;j--)
		{
			str[j]=str[j-1];
		}
		str[0]=temp;
		printf("the string is %s\n",str);
		count++;
	}
	printf("the number of possible permitions are %d\n",count);
}

