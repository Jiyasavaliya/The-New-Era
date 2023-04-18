#include<iostream>
#include<string.h>
using namespace std;

class car{
	
	public :
	int car_id;
	char car_company_name[30];
	char car_colour[70];
	char car_model[90];   
        int car_release_year;
		   
};
int main(){
	
	car obj1,obj2,obj3,obj4,obj5;

        obj1.car_id = 1;
	strcpy(obj2.car_company_name ,"emp_company_name : toyota");
	strcpy(obj3.car_colour,"emp_colour : blue");
	strcpy(obj4.car_model,"emp_model : corolla");
        obj5.car_release_year = 2011;
		
	cout<<obj1.car_id<<endl;
	cout<<obj2.car_company_name<<endl;	
	cout<<obj3.car_colour<<endl;
	cout<<obj4.car_model<<endl;
	cout<<obj5.car_release_year<<endl<<endl;
	
	
	obj1.car_id = 2;
	strcpy(obj2.car_company_name ,"emp_company_name : honda");
	strcpy(obj3.car_colour,"emp_colour : black");
	strcpy(obj4.car_model,"emp_model : civic");
	obj5.car_release_year = 2022;
		
	cout<<obj1.car_id<<endl;
	cout<<obj2.car_company_name<<endl;	
	cout<<obj3.car_colour<<endl;
	cout<<obj4.car_model<<endl;
	cout<<obj5.car_release_year<<endl<<endl;
	
        obj1.car_id = 3;
	strcpy(obj2.car_company_name ,"emp_company_name :ford");
	strcpy(obj3.car_colour,"emp_colour : red");
	strcpy(obj4.car_model,"emp_model : mustang");
	obj5.car_release_year = 2023;
		
	cout<<obj1.car_id<<endl;
	cout<<obj2.car_company_name<<endl;	
	cout<<obj3.car_colour<<endl;
	cout<<obj4.car_model<<endl;
	cout<<obj5.car_release_year<<endl<<endl;

        obj1.car_id = 4;	
	strcpy(obj2.car_company_name ,"emp_company_name :chevrolet");
	strcpy(obj3.car_colour,"emp_colour : silver");
	strcpy(obj4.car_model,"emp_model : camaro");
	obj5.car_release_year = 2024;
		
	
	cout<<obj1.car_id<<endl;
	cout<<obj2.car_company_name<<endl;	
	cout<<obj3.car_colour<<endl;
	cout<<obj4.car_model<<endl;
	cout<<obj5.car_release_year<<endl<<endl;
	
	

}
