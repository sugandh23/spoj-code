#include <stdio.h>

int main(void) {
	int t,n,temp;
	scanf("%d",&t);
	while(t--){
		temp=0;
		scanf("%d",&n);
		if(n%2!=0){
			printf("%d\n",n);
		}
		else{
			while(n>0){
				temp=temp<<1;
				temp+=n&1;
				n=n>>1;
			}
			printf("%d\n",temp);
		}
	}
	return 0;
}
