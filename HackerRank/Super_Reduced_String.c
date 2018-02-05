#include<stdio.h>
#include<string.h>
int top=-1;
char stack[101];
int main(){
	int i;
	char s[101];
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		if(i==0)
			stack[++top]=s[i];
		else{
			if(stack[top]==s[i])
				top--;
			else
				stack[++top]=s[i];	
		}
	}
	if(top==-1)
		printf("Empty String");
	else	
		printf("%s",stack);
	return 0;
}
