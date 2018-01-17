#include<stdio.h>
int main(){
	int n,result=0;
	char s[100000];
	scanf("%d",&n);
	int i;
	int x=0;
	while(x<n)
	{
		result=0;
		scanf("%s", s);	
	for(i=0;s[i]!='\0';i++){
		
		if(s[i]==s[i+1])
			result++;
			
		
	}
	printf("%d\n", result);
	x++;
}
	return 0;
}
