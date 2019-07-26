#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int d[500];
	int a[300];
	for (int i = 0; i<n; i++)
	{
		d[i] =1;
		for(int j =0; j<i; j++)
		{
			if(a[j]<a[i]&& d[i]<d[j]+a[j])
				d[i] = d[j] + a[i];
		}
	}
	
	for(auto i: d)
		cout<<i<<'\n';
}
