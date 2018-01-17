#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n][n],i,j,even=0,odd=0,r,rem,dia=0;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				r=i+j;
				while(r!=0){
				rem=r%10;
				r=r/10;
				if(rem%2==0)
					even=even+rem;
				else
					odd=odd+rem;	
				}
				dia=dia+abs(even-odd);
				even=0; odd=0;
			}
		}
		printf("%d\n",dia);
	}
	return 0;
}
