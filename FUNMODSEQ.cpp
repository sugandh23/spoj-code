#include <iostream>
#include<math.h>
using namespace std;
typedef long long int lld;
lld gcdExtended(lld a, lld b, lld *x, lld *y);
 
lld modInverse(lld a, lld m)
{
    lld x, y;
    lld g = gcdExtended(a, m, &x, &y);
    if (g != 1){
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        lld res = (x%m + m) % m;
        return res;
    }
}
lld gcdExtended(lld a, lld b, lld *x, lld *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    lld x1, y1;
    lld gcd = gcdExtended(b%a, a, &x1, &y1);
 
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

int main() {
	lld t;
	scanf("%lld",&t);
	while(t--){
		lld a,p,n,sum,b;
		scanf("%lld %lld %lld",&a,&p,&n);
		b=modInverse(a, p);
		if(b==0){
			continue;
		}
		sum=b+a;
			if(n%2==0){
				sum=sum*n/2;
			}
			else{
				n--;
				sum=sum*n/2+a;
			}
		printf("%lld\n",sum);
		}
	return 0;
}
