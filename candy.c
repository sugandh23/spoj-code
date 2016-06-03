#include<stdio.h>
int main(){
	int n,a[100000];
	while(1){
		int sum=0,max=0,count=0,i;
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(sum%n!=0){
			printf("-1\n");
		}
		else{
			sum=sum/n;
			for(i=0;i<n;i++){
				if(a[i]>sum){
					count=count+(a[i]-sum);
				}
			}
			printf("%d\n",count);
		}
	}	
	return 0;
}
