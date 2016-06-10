#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t, n, a[100];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i=0;i<n;i++)
            scanf("%d", &a[i]);
        if(n == 1){
            printf("%d\n", a[0]);
            continue;
        }
        if(n == 2){
            printf("%d\n", max(a[0] * a[1], a[0] + a[1]));
            continue;
        }
        int s[100];
        sort(a, a + n);
        s[0] = a[0];
        s[1] = max(a[0] * a[1], a[0] + a[1]);
        for(int i=2;i<n;i++)
            s[i] = max(s[i-1] + a[i], s[i-2] + (a[i-1] * a[i]));
        printf("%d\n", s[n-1]);
    }
	return 0;
}