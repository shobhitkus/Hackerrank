#include<stdio.h>
#include<string.h>
int check(int size,char a[],char s[],int i,int j){
	int k,length=0,flag=0;
	char stack[strlen(s)];
	for(k=0;k<strlen(s);k++){
		if((k==0) && (s[k]==a[i] || s[k]==a[j]))
			stack[length++]=s[k];
		else if(s[k]==a[i] || s[k]==a[j]){
			if(s[k]==stack[length-1]){
				flag=1;
				break;
			}
			else
				stack[length++]=s[k];
		}
	}//Done with all possible patterns
	if(flag==0)
		return length;
	else
		return 0;	
}
int twochar(char s[]){
	char a[26];
	int length,max=-1,i,j,size=0,flag;
	a[size++]=s[0];
	for(i=1;i<strlen(s);i++){
		flag=0;
		for(j=0;j<size;j++){
			if(a[j]==s[i]){
				flag=1;
				break;
			}
		}
		if(flag==0)
			a[size++]=s[i];
	}//Done with how many different letters
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			length=check(size,a,s,i,j);
			if(max<length)
				max=length;
		}
	}
	return (max>0)?max:0;
}
int main(){
	int n,result;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	result=twochar(s);
	printf("%d",result);
	return 0;
}
