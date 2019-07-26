#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int count;
	cin>>count;
	std::string stringVal;
	stack<char> eun;
	for(int i =0; i<count; i++)
	{
		
		scanf("%s", &stringVal);
		for(int j=0; j<stringVal.size(); j++)
		{
			if(stringVal.at(j) == '(')	
				eun.push(stringVal.at(j));
			else if(!eun.empty())
			{
				char prev = eun.top();
				if(prev == '(')
					eun.pop();
				else
					eun.push(stringVal.at(j));
			}
			else
				eun.push(stringVal.at(j));
		
		if(eun.empty())
			cout<<"YES"<<'\n';
		else
			cout<<"NO"<<endl;	
	
		
	
	}
}

