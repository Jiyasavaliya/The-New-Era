#include<iostream>
#include<string.h>
using namespace std;

class employees{
	
	public :
		char emp_id[50];
	    char emp_name[10];
	    char emp_role[20];
	    char emp_age[30];
	    char emp_salary[60];
	    char emp_experience[70];
	    char emp_city[90];
	    char emp_company_name[0];
};
int main(){
	
	employees obj1,obj2,obj3,obj4,obj5,obj6,obj7,obj8;

	strcpy(obj1.emp_id,"emp_id : 1");
	strcpy(obj2.emp_name,"emp_name : vishal");
	strcpy(obj3.emp_role,"emp_role : software engineer");
	strcpy(obj4.emp_age,"emp_age : 22");
	strcpy(obj5.emp_salary,"emp_salary : 25000");
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
	
	
    strcpy(obj1.emp_id,"emp_id : 2");
	strcpy(obj2.emp_name,"emp_name : manish");
	strcpy(obj3.emp_role,"emp_role : chemical engineer");
	strcpy(obj4.emp_age,"emp_age : 55");
	strcpy(obj5.emp_salary,"emp_salary : 67000");
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
	
    strcpy(obj1.emp_id,"emp_id : 3");
	strcpy(obj2.emp_name,"emp_name : kapil");
	strcpy(obj3.emp_role,"emp_role : civil engineer");
	strcpy(obj4.emp_age,"emp_age : 68");
	strcpy(obj5.emp_salary,"emp_salary : 77000");
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

    strcpy(obj1.emp_id,"emp_id : 4");
	strcpy(obj2.emp_name,"emp_name : mahesh");
	strcpy(obj3.emp_role,"emp_role : electrical engineer");
	strcpy(obj4.emp_age,"emp_age : 38");
	strcpy(obj5.emp_salary,"emp_salary : 32000");
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

    strcpy(obj1.emp_id,"emp_id : 5");
	strcpy(obj2.emp_name,"emp_name : mahir");
	strcpy(obj3.emp_role,"emp_role : mechanical engineering");
	strcpy(obj4.emp_age,"emp_age : 88");
	strcpy(obj5.emp_salary,"emp_salary : 82000");
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
	


