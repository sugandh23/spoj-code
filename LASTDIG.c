#include <stdio.h>
#include <math.h>
int main(void) {
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&a,&b);
		if(b==0){
			printf("1\n");
			continue;
		}
		a=a%10;
		if(a==2 || a==3 || a==7 || a==8){
			b=b%4;
			if(b==0)
				b+=4;
			a=pow(a,b);
			a%=10;
		}
		else{
			if(a==4 || a==9){
				b=b%2;
				if(b==0)
				b+=2;
				a=pow(a,b);
				a%=10;
			}
		}
		printf("%d\n",a);
	}
	return 0;
}
