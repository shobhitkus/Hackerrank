#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char s[10000];
	int n,i,l;
	scanf("%d",&n);
	int x=0;
	while(n>x){
	scanf("%s",s);
	l=strlen(s);
	l=l-1;
	int count=0,diff;
		for(i=0;i<l;i++){
			diff=abs(s[l]-s[i]);
			count=count+diff;
			l--;				
		}
		printf("%d\n",count);
		n--;
	}
	return 0;
}
