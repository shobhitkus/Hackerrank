#include<stdio.h>
int main(){
	int n,k,e=100,i;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i=i+k){
		if(a[i]==1)
			e=e-3;
		else
			e--;	
	}
	printf("%d",e);
	return 0;
}
