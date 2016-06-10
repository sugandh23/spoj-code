#include <iostream>
using namespace std;
long long int a[1000000]={-1};

long long int max(long long int a,long long int b){
	if(a>b)
		return a;
	else
		return b;
}

long long int func(long long int n)
{
	long long int m;
	if (n>=1000000){
		return max(n,func(n/2)+func(n/3)+func(n/4));
	}
	if(a[n]>=0){
		return a[n];
	}
	if(n<12){
		m=n;
	}
	else{
		m=max(n,func(n/2)+func(n/3)+func(n/4));
	}
	a[n]=m;
	return m;
}
int main(){
	int i,n,c;
	for (i=0; i<1000000; i++)
		a[i]=-1;
	c=0;
	while (!cin.eof())
	{
		cin >> n;
		c++;
		cout << func(n) << endl;
		if (c==10) break;
	}
	return 0;
}