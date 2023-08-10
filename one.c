//binary number palindrom or not

#include<stdio.h>

void main()
{
	unsigned int num,count=0,i,j;
	printf("enter a number in hexa decimal format\n");
	scanf("%x",&num);
	printf("%x\n",num);
	for(i=0,j=31;i<16;i++,j--)
	{
		if(((num>>i) & 0x01) ^ ((num>>j) & 0x01))
		{
			count++;
			printf("Hi %d, %d\n",i,j);
			break;
		}
	}
	if(count)
	{
		printf("%x is not a palindrom\n",num);
	}
	else
	{
		printf("%x is a palindrom\n",num);
	}
}

