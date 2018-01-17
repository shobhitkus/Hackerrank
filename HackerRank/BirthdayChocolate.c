#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int d,m,count=0,j;
	scanf("%d%d",&d,&m);
	if(m>n){
		return 0;
	}
	for(i=0;i<n;i++){
		int c=0;
		for(j=0;j<m;j++){
			if(i+j<n)
				c+=a[i+j];
			}
		if(c==d)
			count++;
	}
	printf("%d",count);	
}
