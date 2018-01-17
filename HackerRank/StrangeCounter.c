#include<stdio.h>
int main(){
	long int t,value=3;
	scanf("%ld",&t);
	while(t>value){
		t=t-value;
		value=value*2;
	}
	printf("%ld",value-t+1);
	return 0;
}
