#include <iostream>
#include <array>
#include <windows.h>

using namespace std;

int main() {
	// your code goes here
	int temp, i, j;
//	int array[10] = {1,10,5,8,7,6,4,3,2,9}
//정형와된  
	std::array <int, 10> insert= {1,10,5,8,7,6,4,3,2,9};
	for(i =0; i<insert.size(); i++)
	{
		j = i;
		//j 에다가 i 를 바로 넣어줌  
		while(insert[j] > insert[j+1])
		{
			temp = insert[j+1];
			insert[j+1] = insert[j];
			insert[j] = temp;
			j--;
		}
	}
	
	for(auto i : insert)
		printf("%d ",i);
		
	getchar();
	
 	return 0;
}
