#include<stdio.h>
#include<math.h>
int main(){
	int i,j,k,m,rem;
	int count=0;
	float b;
	scanf("%d%d%d",&j,&k,&m);
	for(i=j;i<=k;){
		int rev=0;
		while(i!=0){
			rem=i%10;
			rev=rev*10+rem;
			i=i/10;
		}
		b=(float)(j-rev)/m;
		j++;
		i=j;
		//printf("%f\n",b);
		if(b==floor(b))
			count++;
	}
	printf("%d",count);
	return 0;
}
