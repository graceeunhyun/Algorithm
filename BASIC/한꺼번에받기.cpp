#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	std::string text;
	while(getline(cin, text))
		cout<<text<<endl;
}
