#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100];
	int i,n,k,w;
	printf("Enter the length of String-");
	scanf("%d",&n);
	printf("\nEnter the String:\n");
	scanf("%s",s);
	printf("\nString=%s\n",s);
	printf("Enter Encryption Key:\n");
	scanf("%d",&k);
	w=k%26;
	for(i=0;i<n;i++)
 {
  if(s[i]>=65&&s[i]<=90)
  {
   if(s[i]>90-w)
    printf("%s",i+w-26);
   else
    printf("%s",i+w);
  }
  else if(s[i]>=97&&s[i]<=122)
  {
   if(s[i]>122-w)
    printf("%s",s[i]-26+w);
   else
    printf("%s",s[i]+w);
  }
  else
  {
   printf("%s",s[i]);
  }
 }
	return 0;
}
