#include <stdio.h>

int main(void) {
	int t,x,y,count,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&x,&y);
		if(y!=x&&y!=(x-2)){
			printf("No Number\n");
			continue;
		}
		if(x==y){
			count=0;
			for(i=0;i<y;i++){
				if(i%2==0)
					count++;
				else
					count=count+3;
			}
			printf("%d\n",count);
		}
		else{
			count=2;
			for(i=2;i<x;i++){
				if(i%2==0)
					count++;
				else
					count=count+3;
			}
			printf("%d\n",count);	
		}
	}
	return 0;
}
