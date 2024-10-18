#include <bits/stdc++.h>
using namespace std;
int main (){
	double a,b;
	int sum=1;
	cin>>a>>b;
	while(a<b){
		a+=a/10;
		sum++;
	}
	cout<<sum;
}
