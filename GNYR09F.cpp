#include <iostream>
using namespace std;
int main(){
	long long ans;
    int t,n,k,i,j,b,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&p,&n,&k);
        long long a[110][110][2]={0};
        a[1][0][0]=a[1][0][1]=1;
        for(i=2;i<=n;i++){
            for(j=0;j<=k;j++){
                    a[i][j][0]=a[i-1][j][0]+a[i-1][j][1];
                    if(j>0)
                        a[i][j][1]=a[i-1][j-1][1];
                    a[i][j][1]+=a[i-1][j][0];

            }
        }
        ans=a[n][k][0]+a[n][k][1];
        cout<<p<<" "<<ans<<endl;
    }

}
