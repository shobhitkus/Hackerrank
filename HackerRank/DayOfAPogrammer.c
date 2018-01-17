#include<stdio.h>
int main(){
	int year,dop,dd;
	scanf("%d",&year);
	if(year!=1918){
		if(year%400==0 || (year%4==0 && year%100!=0) || (year%4==0)){
			dop=31+29+31+30+31+30+31+31;
			dd=256-dop;
		}
		else{
			dop=243;
			dd=256-dop;
		}
		printf("%d.09.%d",dd,year);
		return 0;
	}
	if(year==1998){
		dop=230;
		dd=256-dop;
		printf("%d.09.%d",dd,year);
		return 0;
	}
	return 0;
}
