#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	long long int k=1, res=0, k2=0;

	while(k<=n)
	{
		if(k==1) cout<<0<<endl;
		else if(k==2) cout<<6<<endl;

		else{
			k2=k*k;
			res=(((k2)*(k2-1))/2) - ((8*(k-2)*(k-2+1))/2);
		    cout<<res<<endl;}

 		k++;
	}

	return 0;
}