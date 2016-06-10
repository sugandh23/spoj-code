#include <stdio.h>

int main(void) {
	long long int a,i,n;
	while(1){
		a=0;
		scanf("%lld",&n);
		if(n==0){
			break;
		}
		for(i=1;i<=n;i++){
			a=a+i*i;
		}
		printf("%lld\n",a);
	}
	return 0;
}
