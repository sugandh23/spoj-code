#include <stdio.h>

int main() {
	int t,n,i,a[10000],b[10000],temp,j;
	scanf("%d",&t);
	while(t--){
		int sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(b[i]>b[j]){
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++){
			sum=sum+a[i]*b[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
