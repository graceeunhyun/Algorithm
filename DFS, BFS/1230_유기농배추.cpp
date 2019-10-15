#include <iostream>
using namespace std;
int dy[4] = {1, -1, 0, 0};
int dx[4] = { 0, 0, 1, -1};
int M,N,K;

//���� �� array 
int arr[50][50]={0};
//�湮�ߴ��� ���ߴ��� check array  
int visited[50][50]={0,};
// ���߰� �մ� ��ġ�� ��� ������ ��츦 �ϳ��� �����̶�� �����ϰ� �� ������ ��ִ��� ���ϴ� ����
// DFS �� ���� ���߰� ���� ������ �湮�ؼ�, ���ʰ� ������ ������ Ž��.. 

void dfs(int x, int y)
{
	for(int i = 0; i< 4; i++)
	{
		//����, �¿츦 ���� ���� index 0 ���� 3���� ���� ��! 
		
		int curX = dx[i] + x;
		int curY = dy[i] + y;
		
		//������ Ž���ؾ��Ѵ�. 
		if(curY <0 || curY >= N || curX <=0 || curX >= M)
			continue;    //continue: ����ؼ� Ž��.  
		
		if(arr[curY][curX] && !visited[curX][curY])
		{
			visited[curX][curY]++;
			dfs(curY, curX);
		}
				
	}
}
int main(void) 
{
	int T; //�������� ������ 
	//���� ������ �κ��� ���ϱ�.  
	//���� ��������� �о �ش� �κ� Ȯ������. 	
	for(int j = 0; j<T ; j++) //�׽�Ʈ���̽�  
	{
		scanf("%d %d %d", &M, &N, &K);
		for(int i = 0 ; i<K ; i++)
		{
			int x, y = 0;
			scanf("%d %d", &x, &y);
			arr[y][x] = 1;
		}	
		
		//��� ����  
		int count = 0; //�����̼�  
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
