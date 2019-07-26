#include <iostream>
#include <algorithm>

//우리가 어떠한 기준으로 정렬을 하겠다 이렇게 기준을 정할 수 있어서 강력한것. 
//정렬기준 
bool compare(int a, int b) 
{
	return a>b;
}


using namespace std;
int main(void){
	int a[20] = {9,3,5,4,1,10,8,6,7,2};
	sort(a, a+20, compare); //9부터 2 까지 넣어질 수 있구나 라고 이해 
					//a 주소값, 정렬한 갯수의 데이타  
	
	for(auto i:a)
		printf("%d ",i);
	
	getchar();
}

