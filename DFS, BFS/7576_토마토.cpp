#include <iostream>
using namespace std;
int N, M; //M : 가로 칸, N: 세로 칸 
int count; //최소날짜 수 
#define MAX:
int board[MAX][MAX] = {};
int checked[MAX][MAX] ={};
int dx[] = { 0, 0, -1, 1};
int dy[] = { -1, 1, 0, 0};
void tomato(int x, int y)
{
    //bfs 로직 확인해서 
    //토마토 <-- --> 상하좌우로직 으로 익은 것 옆의 주변부도 함께 익도록 설정. 
	// 1: 익은 토마토, 0: 아직 안익은 토마토 , -1:토마토가 없음.
	//익은 토마토에 대해서만
	checked[x][y] = 1;

	if(checked[x][y] == 1 )
	{
		for(int i = 0; i< 4; i++)
		{
			int x_value = dx[i];
			int y_value = dy[i];

			if(checked[x_value][y_value] == 0)
				tomato(x_value, y_value);
		}

	}
	count++;

}

int main(void)
{
    cin>>M>>N;
    //토마노트들의 정보 input process
    for(int i =0; i<M ; i++)
        for(int j=0 ; j<N; j++)
            scanf("%d",&board[i][j]);

    for(int i =0; i<M ; i++)
         for(int j=0 ; j<N; j++)
        	 tomato(i,j);


    //main process
    ////예외처리과정 : 토마토가 모두 익은 상태 : 0, 토마토가 모두 익지 못하는 상황 :-1 
    /////아예 input 부터 받아서 처리
    //<--- ---> 상하좌우를 확인하여, 옆에 있는 토마토가 있을 경우, 

    //output process
    for(int i =0; i<M ; i++)
    	for(int j=0 ; j<N; j++)
    		printf("%1d", &board[i][j]);
}
