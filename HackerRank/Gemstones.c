#include<stdio.h>
int main(){
	int n,a[26]={0},count=0,flag=1,k;
	scanf("%d",&n);
	while(n--){
		char s[100];
		int b[26]={0},i,j;
		scanf("%s",s);
		for(i=0;s[i]!='\0';i++){
			int num;
			num=s[i]-97;
			b[num]=1;
		}
		if(flag==1){
			for(j=0;j<26;j++){
				a[j]=b[j];
			}
				flag=0;
		}
		else{       
				for(j=0;j<26;j++){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
				a[j]=a[j]&b[j];
			}
		}
	}
		for(k=0;k<26;k++){
			if(a[k]==1){
			count++;
		}		
	}
	printf("%d",count);
	return 0;
}
