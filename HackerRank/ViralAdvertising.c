#include<stdio.h>
#include<math.h>
int main(){
	int n,people=5,sum=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		people=floor(people/2);
		sum=sum+people;
		people=people*3;
	}
	printf("%d",sum);
	return 0;
}
