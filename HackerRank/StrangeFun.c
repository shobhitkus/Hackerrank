#include<stdio.h>
#include<math.h>
unsigned long long int add(unsigned long long int num){
	unsigned long long int sum=0,digit;
	while (num > 0){
        	digit=num % 10;
        	sum=sum+digit;
        	num/=10;
    	}
    return sum;	
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		unsigned long long int a,n,num,sum=0;
		scanf("%llu%llu",&a,&n);
		num=pow(a,n);
		sum=add(num);
		while(1){
    		if(sum/10==0){
    			printf("%llu\n",sum);
    			break;
    		}
    		else
				sum=add(sum);
			}
	}
}
