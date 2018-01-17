#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int w;
		char d[3];
		scanf("%d%s",&w,d);
		if(w==28)
			printf("4 4 4 4 4 4 4\n");
		else{
			if(strcmp(d,"mon")==0 && w==29)
				printf("5 4 4 4 4 4 4\n");
			else if(strcmp(d,"tue")==0 && w==29)
				printf("4 5 4 4 4 4 4\n");
			else if(strcmp(d,"wed")==0 && w==29)
				printf("4 4 5 4 4 4 4\n");
			else if(strcmp(d,"thu")==0 && w==29)
				printf("4 4 4 5 4 4 4\n");
			else if(strcmp(d,"fri")==0 && w==29)
				printf("4 4 4 4 5 4 4\n");
			else if(strcmp(d,"sat")==0 && w==29)
				printf("4 4 4 4 4 5 4\n");
			else if(strcmp(d,"sun")==0 && w==29)
				printf("4 4 4 4 4 4 5\n");
			
			
			else if(strcmp(d,"mon")==0 && w==30)
				printf("5 5 4 4 4 4 4\n");
			else if(strcmp(d,"tue")==0 && w==30)
				printf("4 5 5 4 4 4 4\n");
			else if(strcmp(d,"wed")==0 && w==30)
				printf("4 4 5 5 4 4 4\n");
			else if(strcmp(d,"thu")==0 && w==30)
				printf("4 4 4 5 5 4 4\n");
			else if(strcmp(d,"fri")==0 && w==30)
				printf("4 4 4 4 5 5 4\n");
			else if(strcmp(d,"sat")==0 && w==30)
				printf("4 4 4 4 4 5 5\n");
			else if(strcmp(d,"sun")==0 && w==30)
				printf("5 4 4 4 4 4 5\n");
				
			else if(strcmp(d,"mon")==0 && w==31)
				printf("5 5 5 4 4 4 4\n");
			else if(strcmp(d,"tue")==0 && w==31)
				printf("4 5 5 5 4 4 4\n");
			else if(strcmp(d,"wed")==0 && w==31)
				printf("4 4 5 5 5 4 4\n");
			else if(strcmp(d,"thu")==0 && w==31)
				printf("4 4 4 5 5 5 4\n");
			else if(strcmp(d,"fri")==0 && w==31)
				printf("4 4 4 4 5 5 5\n");
			else if(strcmp(d,"sat")==0 && w==31)
				printf("5 4 4 4 4 5 5\n");
			else if(strcmp(d,"sun")==0 && w==31)
				printf("5 5 4 4 4 4 5\n");		
		}
	}
}
