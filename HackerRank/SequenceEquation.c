#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,y;
	for(i=1;i<=n;i++){
		int k;
		scanf("%d",&k);
		a[k]=i;
	}
	for(i=1;i<=n;i++){
		y=a[a[i]];
		printf("%d\n",y);
	}	
	return 0;
}
