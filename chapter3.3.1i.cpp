#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, mx = -1,sum=0;
	
	while(true)
	{
		cin>>n;
		
		if(n==0)
			break;	
			
		if(mx<n)
			mx=n,sum=1;
		else
		if(n==mx)
			sum++;
	}
	
	cout<<sum;
}
