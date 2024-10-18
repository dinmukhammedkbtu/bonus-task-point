#include <iostream>
using namespace std;
int main (){
	long long b,i=1;
	cin>>b;
	while (i<=b){
		if(b==i){
			cout<<"YES";
			return 0;
		}
		i*=2;
	}
	cout<<"NO";
}
