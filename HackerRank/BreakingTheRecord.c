#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	long long int a[n];
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	int low,high,l=0,h=0;
		high=a[0];
		low=a[0];
	for(i=0;i<n;i++){
		if(high<a[i]){
			high=a[i];
			h++;
		}
	}
	for(i=0;i<n;i++){
		if(low>a[i]){
			low=a[i];
			l++;
		}
	}
	printf("%d %d",h,l);
	return 0;
}
