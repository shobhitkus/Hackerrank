#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[10000],r[10000];
		int i,funny=1;
		scanf("%s",s);
		int j=strlen(s)-1;
		for(i=0;i<strlen(s);i++){
			r[i]=s[j];
			j--;
		}
		for(i=1;i<strlen(s);i++){
			if(abs(s[i]-s[i-1])!=abs(r[i]-r[i-1])){
				printf("Not Funny\n");
				funny=0;
				break;
			}
		}
		if(funny)
			printf("Funny\n");
	}
	return 0;
}
