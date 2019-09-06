#include <iostream>
using namespace std;
int dy[4] = {1, -1, 0, 0};
int dx[4] = { 0, 0, 1, -1};
int M,N,K;

//배추 땅 array 
int arr[50][50]={0};
//방문했는지 안했는지 check array  
int visited[50][50]={0};
// 배추가 잇는 위치를 모두 연결한 경우를 하나의 구역이라고 생각하고 이 구역이 몇개있는지 구하는 문제
// DFS 를 통해 배추가 놓인 지역을 방문해서, 왼쪽과 오른쪽 구역을 탐색.. 

void dfs(int y, int x)
{
	for(int i = 0; i< 4; i++)
	{
		//상하, 좌우를 돌기 위해 index 0 부터 3까지 도는 것! 
		int curY = dy[i] + y;
		int curX = dx[i] + x;
		
		//구역을 탐색해야한다. 
		if(curY <0 || curY >= N || curX <=0 || curX >= M)
			continue;    //이부분이 잘 이해가 안된다... 왜 continue 인지 
		
		if(arr[curY][curX] && ! visited[curX][curY])
		{
			visted[curX][curY]++;
			dfs(curY, curX);
		}
				
	}
}
int main(void) 
{
	int T; //흰지렁이 마리수 
	//같은 구역인 부분을 정하기.  
	//이제 입출력으로 읽어서 해당 부분 확인하자. 	
}
