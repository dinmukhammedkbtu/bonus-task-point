#include <bits/stdc++.h>
using namespace std;
int main (){
    double a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    while(a<c){
    	a*=(1+b/100.0);
    	a*=100;
    	a=int(a);
    	a/=100;
    	sum++;
	}
	cout<<sum;
}
