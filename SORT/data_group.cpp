#include <algorithm> 
#include <iostream>

using namespace std;
class Student
{
public: 
	string m_name;
	int m_score;
	Student(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	bool operator <(Student &student){
		return this->m_score > student.m_score;
	}
	
};

int main(void)
{
	Student students[] = 
	{
		Student("������",90),
		Student ("������",95),
		Student ("������",25),
		Student ("Ȳ ����",60),
		Student ("�� ����",86),
	};
	
//	sort(students, students.end(), )
	sort(students, students+5 );
	
	for(auto i:students){
		cout<<i.m_name<<endl;
	}
		
	
	getchar();
	
}


