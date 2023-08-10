#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],reverse[50],index,i,len,wordstart,wordend;
	printf("enter the string to reverse words\n");
	gets(str);
	printf("%s\n",str);
	len=strlen(str);
	wordstart=len-1;
	wordend=len-1;
	index=0;
	while(wordstart>0)
	{
		if(str[wordstart]==' ')
		{
			i=wordstart+1;
			while(i<=wordend)
			{
				reverse[index]=str[i];
				i++;
				index++;
			}
			reverse[index++]=' ';
			wordend=wordstart-1;
		}
		wordstart--;
	}
	for(i=0;i<=wordend;i++)
	{
		reverse[index]=str[i];
		index++;
	}
	reverse[index]='\0';
	printf("%s\n",reverse);

}
