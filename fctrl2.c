#include <stdio.h>

int main(void) {
	int i,j,n,t;
	int a[160],c,r,p;
	scanf("%d",&t);
	while(t--){
		a[0]=1;
		c=0;
		r=1;
		scanf("%d",&n);
		for(i=2;i<=n;i++){
			for(j=0;j<r;j++){
				p=a[j]*i+c;
				a[j]=p%10;
				c=p/10;
			}
			while(c){
				a[r]=c%10;
				c=c/10;
				r++;
			}
		}
		for(i=r-1;i>=0;i--){
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
