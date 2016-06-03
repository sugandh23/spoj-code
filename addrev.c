#include<stdio.h>
int rev(int n){
	int r=0,a;
	while(n>0){
			   a=n%10;
			   r=r*10+a;
			   n=n/10;
    }
    return r;
}
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
 			   scanf("%d %d",&a,&b);
 			   a=rev(a);
 			   b=rev(b);
 			   printf("%d\n",rev(a+b));
     }
     return 0;
 }
