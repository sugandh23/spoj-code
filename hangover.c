#include<stdio.h>
int main(){
	int count=0;
	float j,c,i=0;
	while(1){
		count=0;
		i=0;
		scanf("%f",&c);
		if(c==0.00){
			break;
		}
		for(j=2;;j++){
			i=i+1/j;
			count++;
			if(i>c){
				break;
			}
		}
		printf("%d card(s)\n",count);
	}
	return 0;
}
