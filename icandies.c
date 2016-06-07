#include<stdio.h>
int main(){
	int t,a,i=0;
	scanf("%d",&t);
	while(t--){
		i++;
		scanf("%d",&a);
		while(1){
			if((a-5)<=0){
				printf("Case %d: -1\n",i);
				break;
			}
			if((a-5)%3==0){
				printf("Case %d: %d\n",i,a-5);
				break;
			}
			else{
				a=a-5;
			}
		}		
	}
	return 0;
}