#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k=0;
	int a[20006];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int count=0;
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[j]-a[i]==1 || a[j]-a[i]== -1)
			{
				count++;
				if(count==2)
					break;
			}
		}
		if(count==0)
		{
			k++;
		}
		else if(count==1)
		{
			k=k;
		}
		else if(count==2)
		{
			k--;
		}
		printf("%d\n",k);
	}
	printf("Justice\n");
	return 0;
}