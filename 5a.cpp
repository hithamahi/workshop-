#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cout<<" enter the number of digits: ";
	cin>>n;
	int a[n],b[n];
	cout<<" enter the elements: "<<"\n";
	for(int i=0;i,n;i++)
	{
		cin>>a[i];
	}
	cout<<" elements are: ";
	for(int i=0;i<n;i++)
	{
		c=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c==1)
		{
			cout<<a[i]<<"\t\b\b";
		}
	}
}

