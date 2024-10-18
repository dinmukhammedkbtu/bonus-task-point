#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	double c=1;
	cin>>n;
	for(long long int i=2;i<=n;i++){
		c+=1.0/(i*i);
		
	}
	cout<<c;
}
