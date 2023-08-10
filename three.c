#include<stdio.h>
void main()
{
        int arr[10],i,j,k,size=10,count;
        printf("enter elements into the array\n");
        for(i=0;i<10;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("The array elements are\n");
        for(i=0;i<10;i++)
        {
                printf("%d\t",arr[i]);
        }
        printf("\n");
	printf("enter which smallest element you want\n");
	scanf("%d",&k);
        for(i=0;i<10;i++)
	{
		count=0;
		for(j=0;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				count++;
			}
		}
		if(count+1==k)
		{
			printf("%d\n",count);
			printf("%d is %d smallest number\n",arr[i],k);
			break;
		}
	}
}

