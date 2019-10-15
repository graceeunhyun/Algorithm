#include <iostream>
#include <vector>
#include <queue>
#include <array>

int MAX = 100;
int N;
int array[MAX][MAX] = {0};
int visited[MAX][MAX] = {0};


using namespace std;
void dfs(int x, int y)
{

}
int main(void)
{
    //input process
    scanf("%d", &N);
    for(int i =0 ; i <N; i++)
        for(int j =0 ; j <N; j++)
            scanf("1d", &array[i][j]);
    
    //main process
    //main IDEA : 정점이 있으면 가서, 바꿔준다 
    /////A --> B --> C (A, c 가 직접적으로 연결이 되어 있지 않아도 A-> B -> C ) 면 이어준다 . 
    // 여태까지 풀었던 플로이드 알고리즘 문제와는 달리 자기 자신한테도 가는 경우도 고려하는 것이 핵심이였습니다!

    for(int i = 0 ; i< N; i++)
        for(int j =0 ; j< N; j++)
            if(array[i][j] != 1 && array[i]) 
                dfs();


    //output process
    for(int i =0; i< N; i++)
    {
        for(int j =0; j<N; j++)
            printf("%d", &array[i][j]);
    }


    //도움되는 사이트 : https://lmcoa15.tistory.com/25



}
