#include<stdio.h>
#include<string.h>
void main()
{
        char str[50],sub[25],i,j,l1,l2,count1=0,count2=0;
        printf("enter the string\n");
        gets(str);
	printf("the main string you entered was\n");
        printf("%s\n",str);
	l1=strlen(str);
	printf("enter the sub string\n");
        gets(sub);
	printf("the sub string you entered was\n");
	printf("%s\n",sub);
	l2=strlen(sub);
	for(i=0;i<l1;)
	{
		j=0;
		count1=0;
		while(str[i]==sub[j])
		{
			count1++;
			i++;
			j++;
		}
		if(count1=l2)
		{
			printf("hi\n");
			count2++;
			count1=0;
		}
		else
		{
			i++;
		}
	}
	printf("%s occured in %s %d times\n",sub,str,count2);
}

