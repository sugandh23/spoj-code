#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--){
		int a=0;
		scanf("%d",&n);
		while(n>=5){
			n=n/5;
			a=a+n;
		}
		printf("%d\n",a);
	}
	return 0;
}
