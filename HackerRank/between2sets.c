#include<stdio.h>
int main(){
	int m,n,i,k;
	scanf("%d%d",&m,&n);
	int a[m],b[n];
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
		int x=0;
	for(k=1;k<=100;k++){
		int flag;
		flag=1;
		for(i=0;i<m;i++){
			if(k%a[i]!=0)
				flag=0;
			}
		for(i=0;i<n;i++){
			if(b[i]%k!=0)
				flag=0;
			}
		if(flag==1)
			x++;					
	}
	printf("%d",x);
	return 0;
}
