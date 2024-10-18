#include <bits/stdc++.h>
using namespace std;
int main (){
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	int f=0;
	for(int i=1000;i>=0;i--){
		if((a*pow(i,3)+b*pow(i,2)+c*i+d)/(i-e)==0){
			f++;
		}
		
	}
	cout<<f;
}
