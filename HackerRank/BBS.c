#include<stdio.h>
int main(){
	int n,result=0;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	int i;
	for(i=0;i<n;){
		if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'){
		result++;
		i+=3;
		}
		else
		i++;
	}
	printf("%d",result);
	return 0;
}
