#include <bits/stdc++.h>
using namespace std;
int main (){
	long long a,b=0;
	cin>>a;
	while(pow(2,b)<a){
		b++;
	}
	cout<<b;
}
