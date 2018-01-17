#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int n,i,count=0,j;
	printf("Enter the SOS message:\n");
	scanf("%s",ch);
	n=strlen(ch);
	for(i=0;i<n;i=i+3){
		if(ch[i]!='S')
		count++;
		if(ch[i+1]!='O')
		count++;  
		if(ch[i+2]!='S')
		count++;
	}
	printf("%d",count);
	return 0;
}
