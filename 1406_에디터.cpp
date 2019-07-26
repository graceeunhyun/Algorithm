#include <iostream> 
#include <stack>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;
char input[600000]; 
int main()
{
	ios_base::sync_with_stdio(false);
	stack <char> left;
	stack <char> right;
		
	scanf("%s", input);
		//이렇게 받아놓고 난 이후
	int n = strlen(input);

	for(int i =0; i<n; i++) 
		left.push(input[i]);
	
	int command;
	scanf("%d", &command);
	while(command--)
	{
		char comVal; 
		scanf(" %c",&comVal);
		
		if(comVal == 'L')
		{	
			if(!left.empty()) {
			
			right.push(left.top());
			left.pop();
		}
		}
		if(comVal == 'D')
		{
			if(!right.empty()) {
			
			left.push(right.top());
			right.pop();
		}
		}
		if(comVal == "B")
		{
			if(!left.empty())
			{
				left.pop();
			}
		}
		if(comVal == 'P')
		{
			char insertVal;
			scanf(" %c", &insertVal);
			left.push(insertVal);
		}
		
	}
	
	while(!left.empty())
	{
		right.push(left.top());
		left.pop();
	}
	while(!right.empty())
	{
		printf("%c",right.top());
		right.pop();
	}
	 printf("\n");
	 getchar();
}
