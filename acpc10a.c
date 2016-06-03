#include <stdio.h>

int main() {
	int a,b,c,r;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0){
			return 0;
		}
		if((c-b)==(b-a)){
			printf("AP %d\n",a+3*(b-a));
		}
		else{
			if(b*b==a*c){
				r=b/a;
				printf("GP %d\n",a*r*r*r);
			}
		}
	}
	return 0;
}
