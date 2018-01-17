#include<stdio.h>
#include<string.h>
int main(){
	int i,a[26],n,h[26];
	char s[11];
	
	
	for(i=0;i<26;i++)
	scanf("%d",&a[i]);
	
	scanf("%s",s);
	n=strlen(s);
	
	for(i=0;i<26;i++)
		
		h[i]=a[s[i]-97];
		int temp;
	for(i=0;i<n;i++){
		if(h[i]<h[i+1])
		temp=h[i+1];
		h[i+1]=h[i];
		h[i]=temp;
	
	}
	printf("%d",n*h[0]);
	return 0;
}
