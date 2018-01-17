#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	int count[200000]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		count[a[i]]++;
	}
	int lar,x;
	lar=count[0];
	for(i=0;i<n;i++){
		if(a[i]>lar){
			lar=count[i];
			x=i;
		}
	}
	printf("%d",x);
	return 0;
}
