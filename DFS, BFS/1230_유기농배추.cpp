#include <iostream>
using namespace std;
int dy[4] = {1, -1, 0, 0};
int dx[4] = { 0, 0, 1, -1};
int M,N,K;

//���� �� array 
int arr[50][50]={0};
//�湮�ߴ��� ���ߴ��� check array  
int visited[50][50]={0};
// ���߰� �մ� ��ġ�� ��� ������ ��츦 �ϳ��� �����̶�� �����ϰ� �� ������ ��ִ��� ���ϴ� ����
// DFS �� ���� ���߰� ���� ������ �湮�ؼ�, ���ʰ� ������ ������ Ž��.. 

void dfs(int y, int x)
{
	for(int i = 0; i< 4; i++)
	{
		//����, �¿츦 ���� ���� index 0 ���� 3���� ���� ��! 
		int curY = dy[i] + y;
		int curX = dx[i] + x;
		
		//������ Ž���ؾ��Ѵ�. 
		if(curY <0 || curY >= N || curX <=0 || curX >= M)
			continue;    //�̺κ��� �� ���ذ� �ȵȴ�... �� continue ���� 
		
		if(arr[curY][curX] && ! visited[curX][curY])
		{
			visted[curX][curY]++;
			dfs(curY, curX);
		}
				
	}
}
int main(void) 
{
	int T; //�������� ������ 
	//���� ������ �κ��� ���ϱ�.  
	//���� ��������� �о �ش� �κ� Ȯ������. 	
}
