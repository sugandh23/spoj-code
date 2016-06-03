#include <stdio.h>

int main() {
	int t;
	double n,m,k;
	int i=0,count;
	long long int h,kk;
	scanf("%d",&t);
	while(t--){
		i++;
		count=0;
		scanf("%lf %lf %lf",&n,&m,&k);
		h=n*m*k-1;
		while(n>1){
			n=n/2;
			count++;
		}
		while(m>1){
			m=m/2;
			count++;
		}
		while(k>1){
			k=k/2;
			count++;
		}
		printf("Case #%d: %lld %d\n",i,h,count);
	}
	return 0;
}
