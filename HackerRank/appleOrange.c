#include<stdio.h>
int main(){
	int s,t,a,b,d,m,n,i;
	scanf("%d",&s);
	scanf("%d",&t);
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&m);
	scanf("%d",&n);
	int l[m],k[n];
	for(i=0;i<m;i++)
		scanf("%d",&l[i]);
	for(i=0;i<n;i++)
		scanf("%d",&k[i]);
	int apple=0,orange=0,c,e;
	for(i=0;i<m;i++){
		c=a+l[i];
		if(c>=s && c<=t)
			apple++;
	}
	for(i=0;i<n;i++){
			e=b+k[i];
			if(e>=s && e<=t)
				orange++;
	}
	printf("%d\n",apple);
	printf("%d",orange);
	return 0;
}
