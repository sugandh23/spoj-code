#include <stdio.h>

int main() {
	int n,i,j,max=0,k;
	scanf("%d",&n);
	int a[1000000];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n-k+1;i++){
		max=0;
		for(j=i;j<i+k;j++){
			if(a[j]>max)
				max=a[j];
		}
		printf("%d ",max);
	}
	return 0;
}
