#include <iostream>
using namespace std;

int e, s, m, year;
int checkYear()
{
	while(true)
	{
		if( (e-year)% 15== 0 && (s- year) % 28 ==0 && (m -year) % 19 ==0) 
		{
			break;
		}
		
		year++;
	}
	
	return year;
}
int main(void)
{

	cin>> e >>s >> m;
	year = 1; 
	year = checkYear();
	cout<<year<<endl;
	
	return 0;
}
