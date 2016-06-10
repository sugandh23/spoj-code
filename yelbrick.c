#include<stdio.h>
#include<math.h>
int minn(int a[][4],int n){
	int i,min,j;
	min=a[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			if(a[i][j]<min)
				min=a[i][j];
		}
	}
	return min;
}
int main(){
	int n,a[1000][4],i,j,m,c;
	long long int p[1000],sum,b;
	while(1){
		sum=0;
		scanf("%d",&n);
		if(n==0)
			return 0;
		for(i=0;i<n;i++){
			p[i]=1;
			for(j=0;j<3;j++){
				scanf("%d",&a[i][j]);
				p[i]*=a[i][j];
			}
			sum+=p[i];
		}
		c=minn(a,n);
		b=pow(c,3);
		m=1;
		while(1){
			m=1;
			for(i=0;i<n;i++){
				if(p[i]%b==0)
					m=0;
				else{
					b--;
					m=1;
					break;}
			}
			if(m==0){
				printf("%lld\n",sum/b);
				break;
			}
		}
	}
	return 0;
}
