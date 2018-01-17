#include<stdio.h>
int main(){
	int n,i,valley=0;
	scanf("%d",&n);
	char a[n];
	scanf("%s",a);
	int set=0;
	for(i=0;i<n;i++){
		if(a[i]=='U'){
			set++;
			if(!set)
				valley++;
		}
		else{
			set--;
			if(!set)
				continue;
		}
	}
	printf("%d",valley);
	return 0;
}
