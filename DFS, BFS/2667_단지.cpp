#include <iostream>
using namespace std;
int board[25][25] = {0} //������  
int visited[25][25] = {0}
int cnt;  //������ ����  -> Maximum �� ������ ���ؾ��ϳ�?  
int n; //������ ũ�� 
int dy[4] = {0,0, -1, 1};
int dx[4] = {1, -1, 0, 0 };

//Ž��
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
	cnt ++; //��� ��  count �� �����l�� ���� �ȿ���..  
}

int main(void)
{
	//�Է� 
	scanf("%d", &n);
	for(int i = 0; i <n ; i++)
	{
		for(int j = 0; j< n; j++) //�����ϳ��� �Է¹��� ���! &1d �� ���� ��. �������!! 
			scanf("%1d",&board[i][j]); 
	}
	
	// ���� 
	for(int i =0; i< n; i++)  
	{
		for(int j = 0 ; j<n ; j++)
			dfs(i,j);
			
		prinf("%d", &cnt);
	}	
	// ���	

}


