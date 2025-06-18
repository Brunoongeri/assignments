#include <iostream>
 #include <string>
 using namespace std;
 
 
 
 class Employee
 {
 	
 	public:
	 
	 double ID_no;
	 std::string name;
	 std::string occupation;
	 
	 double display1(){
		 return ID_no ;
	 }
	 string display2(){
		 return name;
	 }
	 string display3(){
		 return occupation;
	 }
	 
 };
 int main(){
	 Employee cl;
	 
	 cout<<"enter your ID number:"<<endl;
	 cin>>cl.ID_no;
	 
	 cout<<"enter your Name:"<<endl;
	 cin>>cl.name;
	 
	 cout<<"enter your Occupation:"<<endl;
	 cin>>cl.occupation;
	 
	 cout<<"the ID number is:"<<cl.display1()<<endl;
	 cout<<"the name is:"<<cl.display2()<<endl;
	 cout<<"the occupation is:"<<cl.display3()<<endl;
	  
	  return 0;
 }