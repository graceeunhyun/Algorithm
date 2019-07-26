#include <iostream>
#include <string>
using namespace std;
int main(void)
{	
	int t;
	scanf("&d",&t);
	int sum=0;
		 
	for(int i=0; i<t; i++)
	{ 
		int input;
		scanf("%1d",&input);
		sum+=input;
	}	
	
   printf("%d\n",sum);
	
		
	return 0;
}
