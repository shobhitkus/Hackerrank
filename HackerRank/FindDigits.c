#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int num,i,k,count=0;
		scanf("%d",&num);
		int x=num;
		while(x!=0){
			k=x%10;
			x=x/10;
			if(k==0)
				continue;
			else if(k>0 && num%k==0)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
