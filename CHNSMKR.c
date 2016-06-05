#include <stdio.h>

int main(void) {
	int a,b,i,x;
	while(1){
		scanf("%d %d",&a,&b);
		if (a==0 || b==0){
			return 0;
		}
		int count=0;
		for(i=25;i>=20;i--){
			x=b/i;
			if(a<=x){
				printf("%d %d\n",x,b%x);
				break;
			}
			else{
				count++;
			}
			if(count==6){
				printf("Not Possible\n");
			}
		}
	}
	return 0;
}
