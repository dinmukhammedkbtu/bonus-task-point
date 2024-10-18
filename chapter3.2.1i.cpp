#include <bits/stdc++.h> 
using namespace std; 
int main() { 
int n,a=0,b=1,c=0,i=0; 
cin>>n; 
while (c<n) { 
a=b; 
b=c; 
c=a+b; 
i++;
}
if(n%c==0){
	cout<<i;
}
else{
	cout<<-1; 
}
 
 }
