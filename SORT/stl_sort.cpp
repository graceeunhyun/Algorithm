#include <iostream>
#include <algorithm>

//�츮�� ��� �������� ������ �ϰڴ� �̷��� ������ ���� �� �־ �����Ѱ�. 
//���ı��� 
bool compare(int a, int b) 
{
	return a>b;
}


using namespace std;
int main(void){
	int a[20] = {9,3,5,4,1,10,8,6,7,2};
	sort(a, a+20, compare); //9���� 2 ���� �־��� �� �ֱ��� ��� ���� 
					//a �ּҰ�, ������ ������ ����Ÿ  
	
	for(auto i:a)
		printf("%d ",i);
	
	getchar();
}

