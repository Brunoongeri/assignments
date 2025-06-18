 #include <iostream>
 #include <math.h>
 using namespace std;
 
 
 
 class Employee
 {
 	
 	public:
	 
	 double ID_no,  name, occupation;
	 
	 double display1(){
		 return ID_no ;
	 }
	 string display2(){
		 std: name;
	 }
	 string display3(){
		 std: occupation;
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