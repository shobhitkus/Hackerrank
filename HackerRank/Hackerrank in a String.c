#include<stdio.h>
#include<string.h>
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int i,j;
		char p[]="hackerrank";
		char s[10001];
		scanf("%s",s);
		j=0;
		for(i=0;i<strlen(s);i++){
			if(s[i]==p[j])
				j++;
		}
		if(j==10)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
