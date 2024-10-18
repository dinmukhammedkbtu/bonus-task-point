#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	int m;
	int sum1=0,sum2=0,sum3=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
	if(m==0){
		sum1++;
	}
	if(m>0){
		sum2++;
	}
	if(m<0){
		sum3++;
	}
	}
	cout<<sum1<<" "<<sum2<<" "<<sum3;
}
