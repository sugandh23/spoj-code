#include <stdio.h>

int main(void) {
	int t;
	long long int a[4];
	a[1]=192;a[2]=442;a[3]=692;a[0]=942;
	long long int k,s,b;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&k);
		b=k%4;
		s=k/4;
		if(b==0){
			printf("%lld\n",(s-1)*1000+a[b]);
		}
		else{
			printf("%lld\n",s*1000+a[b]);
		}
	}
	return 0;
}
