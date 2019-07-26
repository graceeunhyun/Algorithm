#include <iostream>
#include <array>
#include <windows.h>

using namespace std;

int main() {
	// your code goes here
	int temp;
//	int array[10] = {1,10,5,8,7,6,4,3,2,9}
	std::array <int, 10> insert= {1,10,5,8,7,6,4,3,2,9};
	for(int i =0; i<insert.size(); i++)
	{
		int j = i-1;
		while(j != 0)
		{
			if(insert[j]>insert[j+1])
			{
				temp = insert[i];
				insert[i] = insert[j];
				insert[j] = temp;
			}	
			else
				break;
		}		
	}
	
	for(auto i : insert)
		printf("%d",i);
		
	getchar();
	system("pause");
	
 	return 0;
}
