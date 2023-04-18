#include<iostream>
#include<string.h>
using namespace std;

class employees{
	
	public :
	    int emp_id;
	    char emp_name[10];
	    char emp_role[20];
	    int emp_age;
	    int emp_salary;
	    char emp_experience[70];
	    char emp_city[90];
	    char emp_company_name[0];
};
int main(){
	
	employees obj1,obj2,obj3,obj4,obj5,obj6,obj7,obj8;
     
        obj1.emp_id = 1; 
	strcpy(obj2.emp_name,"emp_name : vishal");
	strcpy(obj3.emp_role,"emp_role : software engineer");
	obj4.emp_age = 22; 
	obj5.emp_salary = 23000; 
	strcpy(obj6.emp_experience,"emp_experience : no experience");
	strcpy(obj7.emp_city,"emp_city : surat");
	strcpy(obj8.emp_company_name,"emp_company_name : Google");
	
	
	
        cout<<obj1.emp_id<<endl;
	cout<<obj2.emp_name<<endl;	
	cout<<obj3.emp_role<<endl;
	cout<<obj4.emp_age<<endl;
	cout<<obj5.emp_salary<<endl;
	cout<<obj6.emp_experience<<endl;
	cout<<obj7.emp_city<<endl;
	cout<<obj8.emp_company_name<<endl<<endl;
	
	
    obj1.emp_id = 1; 
	strcpy(obj2.emp_name,"emp_name : manish");
	strcpy(obj3.emp_role,"emp_role : chemical engineer");
	obj4.emp_age = 19; 
	obj5.emp_salary = 24000; 
	strcpy(obj6.emp_experience,"emp_experience : two year experience");
	strcpy(obj7.emp_city,"emp_city : singapore");
	strcpy(obj8.emp_company_name,"emp_company_name : balaji amines ltd");
	
	
	
        cout<<obj1.emp_id<<endl;
	cout<<obj2.emp_name<<endl;	
	cout<<obj3.emp_role<<endl;
	cout<<obj4.emp_age<<endl;
	cout<<obj5.emp_salary<<endl;
	cout<<obj6.emp_experience<<endl;
	cout<<obj7.emp_city<<endl;
	cout<<obj8.emp_company_name<<endl<<endl;
	
        obj1.emp_id = 1; 
	strcpy(obj2.emp_name,"emp_name : kapil");
	strcpy(obj3.emp_role,"emp_role : civil engineer");
	obj4.emp_age = 32; 
	obj5.emp_salary = 40000; 
	strcpy(obj6.emp_experience,"emp_experience : no experience");
	strcpy(obj7.emp_city,"emp_city : delhi");
	strcpy(obj8.emp_company_name,"emp_company_name : afcons infrastructure limited");
		
        cout<<obj1.emp_id<<endl;
	cout<<obj2.emp_name<<endl;	
	cout<<obj3.emp_role<<endl;
	cout<<obj4.emp_age<<endl;
	cout<<obj5.emp_salary<<endl;
	cout<<obj6.emp_experience<<endl;
	cout<<obj7.emp_city<<endl;
	cout<<obj8.emp_company_name<<endl<<endl;

        obj1.emp_id = 1; 
	strcpy(obj2.emp_name,"emp_name : mahesh");
	strcpy(obj3.emp_role,"emp_role : electrical engineer");
	obj4.emp_age = 44; 
	obj5.emp_salary = 44000; 
	strcpy(obj6.emp_experience,"emp_experience : five year experience");
	strcpy(obj7.emp_city,"emp_city : goa");
	strcpy(obj8.emp_company_name,"emp_company_name : voltmills");	
	
        cout<<obj1.emp_id<<endl;
	cout<<obj2.emp_name<<endl;	
	cout<<obj3.emp_role<<endl;
	cout<<obj4.emp_age<<endl;
	cout<<obj5.emp_salary<<endl;
	cout<<obj6.emp_experience<<endl;
	cout<<obj7.emp_city<<endl;
	cout<<obj8.emp_company_name<<endl<<endl;

        obj1.emp_id = 1; 
	strcpy(obj2.emp_name,"emp_name : mahir");
	strcpy(obj3.emp_role,"emp_role : mechanical engineering");
	obj4.emp_age = 33; 
	obj5.emp_salary = 23000; 
	strcpy(obj6.emp_experience,"emp_experience : 2 month experience");
	strcpy(obj7.emp_city,"emp_city : mumbai");
	strcpy(obj8.emp_company_name,"emp_company_name : ashok leyland");

        cout<<obj1.emp_id<<endl;
	cout<<obj2.emp_name<<endl;	
	cout<<obj3.emp_role<<endl;
	cout<<obj4.emp_age<<endl;
	cout<<obj5.emp_salary<<endl;
	cout<<obj6.emp_experience<<endl;
	cout<<obj7.emp_city<<endl;
	cout<<obj8.emp_company_name<<endl<<endl;
}
	

