#include<stdio.h>
int main(){
	double n,a;
	while(1){
		scanf("%lf",&n);
		if(n==0)
			return 0;
		a=n*n/(2*3.14159265);
		printf("%0.2lf\n",a);
	}
	return 0;
}
