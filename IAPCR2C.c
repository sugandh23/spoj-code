#include <stdio.h>

int main(void) {
	int t,n,m,j=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		int b[100000]={1},count=0,i,a[m];
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
			a[i]--;
			if(b[a[i]]!=-1){
				b[a[i]]=-1;
				count++;
			}
			if((a[i]-1)>=0 && b[a[i]-1]!=-1){
				b[a[i]-1]=-1;
				count++;
			}
			if(b[a[i]+1]!=-1 && (a[i]+1)<n){
				b[a[i]+1]=-1;
				count++;
			}
		}
		printf("Case %d: %d\n",j,count);
		j++;
	}
	return 0;
}
