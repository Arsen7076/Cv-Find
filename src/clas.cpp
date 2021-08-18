#include "class.hpp"


int  main (){

	srand (time(NULL)); 	//As our random return value is not the same
	string names[5]={"Ape","Koko","lulu","Agati","Bond"};
	string posit[3]={"QA","AI","Dewops"};
	
	cout<<"Insert salary max-->";		//Take the range from salary
	int sol;
	cin>>sol;
	assert(sol<=1000);
	
	int exp;
	cout<<"Isert experience min-->";	//Take the range from salary
	cin>>exp;
	assert(exp<=20);

	Cv new_name[5];
	int num=0;
	
	for ( int i = 0 ; i < 5 ; i ++ )
	{
		new_name[i].setName(names[i]);
		new_name[i].setSalary(rand()%1000+1);
		new_name[i].setExperence(rand()%20+1);
		new_name[i].setPosition(posit[rand()%3]);
	
		if( new_name[i].getSalary() <= sol && new_name[i].getExperence() >= exp )  //Check it find person
		{
			num ++;
			new_name[i].print();
		}
	}
	if (num==0){
		cout<<"Sorry such a person does not  exist.\n";	//Else print
	}
	return 0;
}

