#include<stdio.h>
struct node
{
	char data;
	struct node *next;
}
struct node *head=NULL;

void main()
{
	char str[50];
	printf("Enter the string to check palindrom or not\n");
	gets(str);
	printf("The string is %s\n",str);
	for(i=0;str[i]!='\0';i++);
	{
		push(&head,str[i])
		printlist(head);
		is_palindrom(head)?printf("%s is palindrom\n",str):printf("%s is palindrom\n",str);
	}
	

}


