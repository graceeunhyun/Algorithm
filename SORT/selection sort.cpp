#include <iostream>
#include <array>
using namespace std;
 
int main() {
	// your code goes here
	int i,j,min, index, temp;
	std::array <int,10> sort = {1,10,5,8,7,6,4,3,2,9};
	for(int i=0; i<sort.size(); i++)
	{
		min = 999; //maxium ������ ����
		for(int j = i; j<sort.size() ; j++) 
		{
			//min ���� �������ִ� ����
			//i�� present, j �� future  
			if(min > sort[j])
			{	
				min = sort[j];
				index = j;  
			 } 
		}
 
		//���� min ���� ���� i ���� ���Ҹ� �ٲ����.  
		temp = sort[i];
//		sort[i] = min;
		sort[i] = sort[index];
		sort[index] = temp; 
	}
 
	for(auto i =0; i<10; i++)
	{
		cout<<sort[i];
	}
 
 	system("pause");
 
 getchar();
 	return 0;
}
