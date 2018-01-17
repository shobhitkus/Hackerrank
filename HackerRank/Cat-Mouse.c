#include<stdio.h>
#include<math.h>
int main(){
	int n,a,b,c;
	scanf("%d",&n);
	while(n>0){
		scanf("%d%d%d",&a,&b,&c);
		if(abs(c-b)<abs(c-a))
			printf("Cat B\n");
		else if(abs(c-b)>abs(c-a))
			printf("Cat A\n");
		else if(abs(c-b)==abs(c-a))
			printf("Mouse C\n");		
		n--;
	}
}
