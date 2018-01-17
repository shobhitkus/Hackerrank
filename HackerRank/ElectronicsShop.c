#include<stdio.h>
int main(){
	int s,n,m,i,j,max,sum=0;
	scanf("%d%d%d",&s,&n,&m);
	int a[n],b[m];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
		max=a[0]+b[0];
	for(i=1;i<n;i++){
		for(j=1;j<m;j++){
				max=a[i]+b[j];
			if(max>sum && max<=s){
				sum=max;
			}	
		}
	}
    int x=-1;
	if(sum==0)
		printf("%d",x);
	else
		printf("%d",sum);
    return 0;
}
