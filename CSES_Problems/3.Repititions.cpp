#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int count,max_count=0;

	for(int i=0; i<s.length();i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
			max_count=max(max_count,count);
		}
		else{
			count=0;
		}
	}
	cout<<max_count+1;
	
	return 0;
}