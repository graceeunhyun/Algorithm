#include <iostream>
using namespace std;
int dy[4] = {1, -1, 0, 0};
int dx[4] = { 0, 0, 1, -1};
int M,N,K;

//배추 땅 array 
int arr[50][50]={0};
//방문했는지 안했는지 check array  
int visited[50][50]={0,};
// 배추가 잇는 위치를 모두 연결한 경우를 하나의 구역이라고 생각하고 이 구역이 몇개있는지 구하는 문제
// DFS 를 통해 배추가 놓인 지역을 방문해서, 왼쪽과 오른쪽 구역을 탐색.. 

void dfs(int x, int y)
{
	for(int i = 0; i< 4; i++)
	{
		//상하, 좌우를 돌기 위해 index 0 부터 3까지 도는 것! 
		
		int curX = dx[i] + x;
		int curY = dy[i] + y;
		
		//구역을 탐색해야한다. 
		if(curY <0 || curY >= N || curX <=0 || curX >= M)
			continue;    //continue: 계속해서 탐색.  
		
		if(arr[curY][curX] && !visited[curX][curY])
		{
			visited[curX][curY]++;
			dfs(curY, curX);
		}
				
	}
}
int main(void) 
{
	int T; //흰지렁이 마리수 
	//같은 구역인 부분을 정하기.  
	//이제 입출력으로 읽어서 해당 부분 확인하자. 	
	for(int j = 0; j<T ; j++) //테스트케이스  
	{
		scanf("%d %d %d", &M, &N, &K);
		for(int i = 0 ; i<K ; i++)
		{
			int x, y = 0;
			scanf("%d %d", &x, &y);
			arr[y][x] = 1;
		}	
		
		//계산 로직  
		int count = 0; //지렁이수  
		for(int i = 0; i<M ; i++)
		{
			
			for(int j = 0; j<N; j++)
			{
				if(arr[i][j] == 1 && visited[i][j] == 0)
					count++;
					dfs(i,j);
			}
		}
	}
	
	 
}
