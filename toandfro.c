#include <stdio.h>
#include<string.h>
int main(void) {
	int n,b,i,j;
	char a[1000],c[100][100];
	while(1){
	scanf("%d",&n);
	if(n==0)
		return 0;
	scanf("%s",a);
	b=(strlen(a))/n;
	int k=0;
	for(j=0;j<b;j=j+2){
	for(i=0;i<n;i++){
		c[j][i]=a[k];
		k++;
		if(i==(n-1)){
			k=k+n;
		}
	}
	}
	k=n;
	for(j=1;j<b;j=j+2){
		for(i=n-1;i>=0;i--){
			c[j][i]=a[k];
			k++;
			if(i==0){
				k=k+n;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<b;j++){
			printf("%c",c[j][i]);
		}
	}
	printf("\n");
	}
}
