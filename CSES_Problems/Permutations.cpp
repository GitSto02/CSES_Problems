#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>4)
	{   int i=1,j=1;
		while(j<=n)
		{
			
			if(i>n)
			{
				i=2;
				cout<<i<<" ";
				i+=2;
			}
			else
			{
				cout<<i<<" ";
			i+=2;
			}
			j++;
		}
	}
	else if(n==1)
	{
		cout<<1;
	}
	else if(n==4)
	{
		cout<<2<<" "<<4<<" "<<1<<" "<<3;
	}
	else
	{
		cout<<"NO SOLUTION";
	}
	return 0;
}