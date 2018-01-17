#include<stdio.h>
#include<math.h>
int main(){
	int n,i,k,bc,ba,sum=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&bc);
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	ba=(sum-a[k])/2;
	if(bc==(sum/2))
		printf("%d",abs(ba-bc));
	else
		printf("Bon Appetit");
	return 0;		
}
