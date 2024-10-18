#include <bits/stdc++.h>
using namespace std;
int  main()
{
	int a1,a2,a3,a4;
	cin>>a1>>a2>>a3>>a4;
	int z=a3-a1;
	int x=a4-a2;
	if(x<0)
	{
		x+=100;
		z--;	
	}
	cout<<z<<" "<<x;
}

