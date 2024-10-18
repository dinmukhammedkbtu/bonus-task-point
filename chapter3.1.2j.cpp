#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n=100,sum=0;
	
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum;
}
