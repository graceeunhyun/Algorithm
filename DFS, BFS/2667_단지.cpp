#include <iostream>
using namespace std;
int board[25][25] = {0} //보드판  
int visited[25][25] = {0}
int cnt;  //단지의 개수  -> Maximum 의 개수도 구해야하나?  
int n; //지도의 크기 
int dy[4] = {0,0, -1, 1};
int dx[4] = {1, -1, 0, 0 };

//탐색
void dfs(int x, int y) 
{
	for(int i = 0; i < 4 ; i++)
	{
		if(x < n && visited[x][y] != 1) 
		{
			x += dx[i];
		}
		if(y < n && visited[x][y] != 1) 
		{
			y += dy[i];
		}
		if(visited[x][y] != 1)
			dfs(x, y);
		
	}
	cnt ++; //어디서 이  count 를 세아햘지 감이 안오넹..  
}

int main(void)
{
	//입력 
	scanf("%d", &n);
	for(int i = 0; i <n ; i++)
	{
		for(int j = 0; j< n; j++) //숫자하나만 입력받을 경우! &1d 로 받은 것. 기억하자!! 
			scanf("%1d",&board[i][j]); 
	}
	
	// 수행 
	for(int i =0; i< n; i++)  
	{
		for(int j = 0 ; j<n ; j++)
			dfs(i,j);
			
		prinf("%d", &cnt);
	}	
	// 출력	

}


