#include<stdio.h>
int main()
{
    int n,i,k,w;
 scanf("%d",&n);
    char p[n];
 for(i=0;i<n;i++)
 {
  scanf(" %c",&p[i]);
 }
 scanf("%d",&k);
    w=k%26;
 for(i=0;i<n;i++)
 {
  if(p[i]>=65&&p[i]<=90)
  {
   if(p[i]>90-w)
    printf("%c",p[i]+w-26);
   else
    printf("%c",p[i]+w);
  }
  else if(p[i]>=97&&p[i]<=122)
  {
   if(p[i]>122-w)
    printf("%c",p[i]-26+w);
   else
    printf("%c",p[i]+w);
  }
  else
  {
   printf("%c",p[i]);
  }
 }
    return 0;

}
