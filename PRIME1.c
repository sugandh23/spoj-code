#include<stdio.h>
#include<math.h>
int main(){
	int t,a,b,j,i,m;
	scanf("%d",&t);
	while(t--){
 			   scanf("%d %d",&a,&b);
 			   if(a==1)
 			   		   a++;
 			   for(i=a;i<=b;i++){
			   					 m=1;
 					 for(j=2;j<=sqrt(i);j++){
 						if(i%j==0){
				   				   m=0;
				   				   break;
				   				   }
				   		   }
  		           if(m==1){
				   			printf("%d\n",i);
				   }
				   }
				   
				   printf("\n");
     }
     return 0;
}
