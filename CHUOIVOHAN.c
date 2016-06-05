#include <stdio.h>

int main(void) {
	float a,b,d;
	float f;
	scanf("%f %f %f",&a,&b,&d);
	if (d==0 && a!=b){
		printf("NO");
		return 0;
	}
	if(a==b){
		printf("YES");
		return 0;
	}
	f=(b-a)/d;
	if ((f-(int)f == 0) && f>=0){
    	printf("YES");
    	
	}
	else{
		printf("NO");	
	}
	return 0;
}