#include<iostream>
#include<string>
using namespace std;
//structure defination
struct Student{
	string firstName;
	string lastName;
	int rollNumber;
	float marks;
	//member function to display student info
	void displayStudentInfo(){
		cout<<"Full Name: "<<firstName<<" "<<lastName<<endl;
		cout<<"Marks: "<<marks<<endl;
		
	}
};
int main(){
	//single structure variable
	Student s1;
	s1.firstName = "Alishba ";
	s1.lastName = "Zakir";
	s1.rollNumber = 02;
	s1.marks = 85.5;
	cout<<"Single student Info: /n ";
	s1.displayStudentInfo();
	cout<<"/n";
	
	//Array of the structure
	int numStudents;
	cout<<"Enter number of students : ";
	Student students[numStudents];
	for(int i=0;i< numStudents; ++i ){
		cout<<"Enter details for student "<<i+1<<":/n";
		cout<<"First Name : ";
		cin>>students[i].firstName;
		cout<<"Last Name : ";
		cin>> students[i].lastName;
		cout<<"Roll Number:";
		cin>>students[i].rollNumber;
		cout<<"Marks ";
		cin>> students[i].marks;
	}
	cout<<"/nMultiple Student Info :/n";
	for(int i =0;i< numStudents;++i){
		students[i].displayStudentInfo();
		cout<<"/n";
		}
		//pointer 
		Student *ptr= new Student;
		cout<<"Enter details for student using pointers:/n";
		cout<<"First Name : ";
		cin>>ptr->firstName;
		cout<<"last Name : ";
		cin>>ptr->lastName;
		cout<<"Roll number:";
		cin>>ptr->rollNumber;
		cout<<"Marks : ";
		cin>>ptr->marks;
		cout<<"/nPointer Student Info:/n";
		ptr->displayStudentInfo();
		delete ptr; //free allocated memory
		return 0;
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	

