#include<stdio.h>
int main(){
	int n,p,a,b;
	scanf("%d",&n);
	scanf("%d",&p);
	a=p/2;
	b=(n-p)/2;
	if(a>b)
		printf("%d",b);
	else
		printf("%d",a);
	return 0;		
}
