#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	float pos=0,neg=0,zero=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		pos++;
		else if(a[i]<0)
		neg++;
		else
		zero++;
	}
	printf("%f\n%f\n%f",pos/n,neg/n,zero/n);
	return 0;
}
