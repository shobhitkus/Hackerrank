#include<stdio.h>
int main(){
	int x1,v1,x2,v2,x,y;
	scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
	while(x1<x2){
		x1=x1+v1;
		x2=x2+v2;
		if(x1==x2){
			return	printf("YES");
	}
		else
		continue;
	}return printf("NO");
}
