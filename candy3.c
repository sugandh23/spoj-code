#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n,a,i,sum=0;
		printf("\n");
		scanf("%lld",&n);
		for(i=0;i<n;i++){
			scanf("%lld",&a);
			sum+=a;
			if(sum>=n)
				sum%=n;
		}
		if(sum==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}