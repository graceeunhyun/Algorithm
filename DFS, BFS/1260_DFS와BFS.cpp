#include <iostream>
#include <vector>
#include <queue>
#include <array>

using namespace std;

//���� ����Ʈ :  https://yongku.tistory.com/entry/%EB%B0%B1%EC%A4%80-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98BOJ-1260%EB%B2%88-DFS%EC%99%80-BFSC
#define MAX 1001	  

int n, m, start;
//array �� ���� ������ MAX �� ������ 
int A[MAX][MAX]; //�̷��� �ִ밪�� �����ؼ� MAX, MAX �� �����س���
int check[MAX];   //�ȿ� �湮�ߴ��� ���ߴ��� true, false �� ���� �ǰ� �ƴϸ� �׳� 0,1 �� �ص��ȴ� . 
 
void dfs(int x)
{
	//dfs 
	cout<<x<<'\n';
	//�湮�ߴ��� �� ����
	check[x] == 1; 
	for(int i =0 ; i<n ; i ++)
	{
		if(A[x][n] == 1 && check[x] ==1 )
			dfs[n];
	}
	
}

void bfs(int x)
{
	//bfs �� queue �� �����ؼ� ������.  
	
	cout<<x<<'\n';
	check[x] ==1;
	
	
}

int main(void)
{
	cin>>n>>m>>start;
	int a[10][10];
	//���⼭ ������ ��� �ؾ��ϴ��� ���.. 
	for(int i =0; i<m; i++) //������ ������ŭ  
	{
		int num1, num2;
		cin>>num1>>num2;
		
		//������ķ� ���� (�ٸ� ����� ���� �ٵ�)  
		A[num1][num2] == 1; 
		A[num2][num1] == 1;
	}
	
	dfs(start);	
	//���
	//dfs �� �� ���
	//bfs �� �� ���  
}
