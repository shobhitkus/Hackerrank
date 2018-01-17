#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,count[101]={0},result=0;
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	count[a[i]]++;
	}
	for(i=0;i<101;i++){
		result=result+count[i]/2;
	}
	printf("%d",result);
}
