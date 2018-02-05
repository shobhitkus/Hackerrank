#include<stdio.h>
#include<string.h>
int main(){
	int i,count=0;
	char s[100001];
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		if(s[i]<97)
			count++;
	}
	printf("%d",count+1);
	return 0;
}
