#include <iostream>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false);
	int count;
	cin>>count;
	int n;
	int min = 1000000;
	int max = -1000000; 
	for(int i =0; i<count; i++){
		cin>>n;
		if(min >n)
			min = n;
		if(max < n)
			max = n;
	}
	
	cout<<min<<" "<<max<<endl;
	
	
}
