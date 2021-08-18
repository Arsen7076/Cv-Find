#include "class.hpp"

void Cv::print()
	{
		cout << "Name-->" << this->name << endl;
		cout << "Salary-->$" << this->salary << endl;
		cout << "Experence--" << this->experence <<endl;
		cout << "Position--" << this->position <<endl;
	
	}

void Cv::setName(string _name)
{
	name =_name;
}

void Cv::setSalary(int _salary)
{
	salary=_salary;
}

void Cv::setExperence(int _experence)
{
	experence=_experence;
}

void Cv::setPosition(string _position)
{
	position=_position;
}

string Cv::getName()
{
 	return name;
}

string Cv::getPosition()
{
	return position;
}

int Cv::getSalary()
{
	return salary;
}

int Cv::getExperence()
{
	return experence;
}
