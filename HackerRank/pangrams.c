#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int c,i;
	char* s = (char *)malloc(512000 * sizeof(char));
  	int count=0;
  	gets(s);
  	for(i=0;i<strlen(s);i++)
  		s[i]=tolower(s[i]);
  	for(c= 97;c<=123;c++){
    	for(i=0;i<strlen(s);i++){
        	if(s[i]==(char)c){
            	count++;
             	break;
        	}
   		}
  	}
  	if(count>=26)
  		printf("pangram\n");
  	else
		printf("not pangram\n");
	return 0;	
}
