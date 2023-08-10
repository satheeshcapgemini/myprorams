#include<stdio.h>
void main()
{
	int arr[10],i,j,k,count=0,size=10;
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
	for(i=0;i<10;i++)
	{
		k=i;
		if(arr[i]==0)
		{
		    k=i;
		    if(arr[i+1]==0)
			{
			    printf("HI\n");
			    i--;
			}
			for(j=k;j<9;j++)
			{
				arr[j]=arr[j+1];
				
			}
			count++;
			
		}
	}
	for(i=size-count;i<10;i++)
	{
		arr[i]=0;
	}
	printf("The array elements are\n");
        for(i=0;i<10;i++)
        {
                printf("%d\t",arr[i]);
        }
        printf("\n");
	


}

