#include<stdio.h>
int main(){
	int n,s,t,i,count=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&s,&t);
		int a[s];	
		for(i=0;i<s;i++){
			scanf("%d",&a[i]);
			if(a[i]<=0)
				count++;
		}
		if(count>=t)
			printf("NO\n");
		else
			printf("YES\n");
	}
}
