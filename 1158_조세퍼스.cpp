#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int total;
	int index;
	scanf("%d %d",&total,&index);
	
	std::vector<int> tow;

	for(int i=0; i<total; i++)
	{
		tow.push_back(i+1);
	}

	int temp = index-1;
	int vectorIndex = 0;
	printf("<");
	while (tow.size() > 1)
	{
		printf("%d, ", tow[temp]);
		tow.erase(tow.begin()+ temp);
		temp+= index-1;
		temp%= tow.size(); //약간 나머지 문제로 생각함  
			
	}
	printf("%d>\n", tow[0]);
	getchar(); 
	
	return 0;	
	
}

