#include<iostream>
using namespace std;
int max(int a[],int n){
	int i,max=0;
	for(i=0;i<n;i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
int main(){
	int t,a[1000000],b[1000000],x,y,n1,n2,i,j;
	cin>>t;
	while(t--){
		cin>>n1>>n2;
		for(i=0;i<n1;i++){
			cin>>a[i];
		}
		for(j=0;j<n2;j++){
			cin>>b[j];
		}
		x=max(a,n1);
		y=max(b,n2);
		if(x>y){
			cout<<"Godzilla"<<endl;
		}
		else{
			if(y>x){
				cout<<"MechaGodzilla"<<endl;
			}
			else{
				cout<<"Godzilla"<<endl;
			}
		}
	}
	return 0;
}
