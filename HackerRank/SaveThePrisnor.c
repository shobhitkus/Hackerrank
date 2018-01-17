#include<stdio.h>
int main(){
	int n,p,m,s,die,i,j;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&p,&m,&s);
		if((m+s-1)%p==0)
			printf("%d",p);
		else 
			printf("%d",(m+s-1)%p);	
	}
	return 0;
}
