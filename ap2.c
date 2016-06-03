#include<stdio.h>
#include<math.h>
int main(){
	long long int t,i,n,d,p,q,r,a,b;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld %lld",&p,&q,&r);
		n=(2*r)/(p+q);
		d=(q-p)/(n-5);
		a=p-2*d;
		printf("%lld\n",n);
		for(i=0;i<n;i++){
			b=a+i*d;
			printf("%lld ",b);
		}
		printf("\n");
	}
	return 0;
}