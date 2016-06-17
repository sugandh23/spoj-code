#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		long long int sum=0;
		int n,r,g,b,s;
		scanf("%d %d %d %d",&n,&r,&g,&b);
		for(int i=0;i<=r;i++){
			for(int j=0;j<=g;j++){
				s=i+j;
				if(s<=n){
					sum+=min(b,n-s)+1;
				}
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}
