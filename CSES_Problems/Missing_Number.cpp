#include<iostream>
using namespace std;

#define ll long

int main()
{
	ll int n,sum1,sum2=0,ans,k;
	cin>>n;	
	
	sum1= (n*(n+1))/2;

    for(int i=0; i<n-1;i++)
	{
		cin>>k;
		sum2+=k;
	}
	ans = sum1 - sum2;
	
	cout<<ans;

	return 0;
}