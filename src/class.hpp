#include <iostream>
#include <stdlib.h>
#include<cassert>

using namespace std;

class Cv
{
	private:
		string name;
		int salary;
		int experence;
		string position;
	
	public:
		
		Cv()
		{
			name="";
			salary=0;
			experence=0;
			position="";
		}
		
	
	
	void setName(string name);
	void setSalary(int salary);
	void setExperence(int experence);
	void setPosition(string position);	
	
	
	string getName();
	string getPosition();
	int getSalary();
	int getExperence();
		
	
	void print();
};