#include<stdio.h>
#include<math.h>
long long check(long long n){
	int i;
	if(n%2==0 && n!=2)
		return 2;
	else {
		for(i=3;i<=sqrt(n);i++){
			if(n%i==0){
				return i;
			}
		}	
	}
	return 1;
}


int main(){
	long long int n;
	scanf("%d",&n);
	long long int a,i,move=0;
	for(i=0;i<n;i++){
		scanf("%lld",&a);
		while(1){
			if(check(a)==1){
				if(a==1){
					move=move+1;
					break;
				}
				move=move+a+1;
				break;
			}
			move=move+a;
			a=a/check(a);
		}
	}
	printf("%lld",move);
	return 0;
}
