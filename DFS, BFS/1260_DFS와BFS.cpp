#include <iostream>
#include <vector>
#include <queue>
#include <array>

using namespace std;

a[i][j]; ///이렇게 array 를 생성하고  

void dfs(int x)
{
	cout<<x<<'\n';
#define MAX 1001	  

int n, m, start;
//array 를 보통 저렇게 MAX 로 선언한 
int A[MAX][MAX]; //이렇게 최대값을 설정해서 MAX, MAX 로 설정해놓음
int check[MAX];   //안에 방문했는지 안했는지 true, false 로 놔도 되고 아니면 그냥 0,1 로 해도된다 . 
 
void dfs(int x)
{
	//dfs 
	cout<<x<<'\n';
	//방문했는지 값 변경
	check[x] == 1; 
	for(int i =0 ; i<n ; i ++)
	{
		if(A[x][n] == 1 && check[x] ==1 )
			dfs[n];
	}
	
}

void bfs(int x)
{
	//bfs 는 queue 로 설정해서 보여줌.  
	
	cout<<x<<'\n';
	check[x] ==1;
	
	
	if(dfs>0)	
	{
		// 
		
	}
}



int main(void)
{
	cin>>n>>m>>start;
	int a[10][10];
	//여기서 범위를 어떻게 해야하는지 고민.. 
	for(int i =0; i<m; i++) //간선의 갯수만큼  
	{
		int num1, num2;
		cin>>num1>>num2;
		
		//인접행렬로 설정 (다른 방법도 있을 텐데)  
		A[num1][num2] == 1; 
		A[num2][num1] == 1;
	}
	
	dfs(start);	
	//출력
	//dfs 로 간 결과
	//bfs 로 간 결과  
}
