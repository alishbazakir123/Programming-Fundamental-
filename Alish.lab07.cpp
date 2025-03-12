#include<iostream>
using namespace std;
int main(){
//	int a;
//	cout<<"enter an integer";
//	cin>>a;
//	if(a>0){
//		cout<<" the integer you entered is positive";
//	}
//	else if(a<0){
//		cout<<" The integer you entered is negative";
//	}
//	else{
//		cout<<"The integer you entered is zero";
//	}


//                   #temperature and suggestion#


//	double temp;
//	cout<<"enter temperature ";
//	cin>>temp;
//	if(temp>=40){
//		cout<<" please stay indoor because it is too hot and could be dangreous to health "<<endl;
//	}
//	else if (39>=temp>=30){
//		cout<<"Please drink plenty of water to stay hydarated in the hot weather   "<<endl;
//	}
//	else if (29>=temp>=20){
//		cout<<"waoo the weather is plessant and suitable for outdoor avtivites"<<endl;
//	}
//	else{
//		cout<<" wear warm clothes to stay comfortable in the cooler weather"<<endl;
//	}
//	return 0;
	
//              #login system#	
	

	/*string username;
	string password;
	cout<<"Username :";
	cin>>username;
	cout<<"Password :";
	cin>>password;
	if(username=="admin" && password=="1234"){
		cout<<"Access Grnated"<<endl;
	}
	else if(username=="admin" && password!="1234" ){
		cout<<"Worng password"<<endl;
	}
	else if(username!="admin" && (password=="1234" || password!="1234")){
		cout<<"User not found"<<endl;
	}
	else{
		cout<<"User not found"<<endl;
	}*/
	
	
//                   #Results and scholarships#	

//for ict course
//	int m1; int m2; int m3;
//	cout<<"Enter your marks in ICT :";
//	cin>>m1;
//	cout<<"Enter your marks in calculas :";
//	cin>>m2;
//	cout<<"Enter your marks in programming fundamentals :";
//	cin>>m3;
//	char ICTgrade;
//	double p1=(m1*100)/100;
//	if(p1>=90){
//		ICTgrade='A';
//		cout<<"\n\t  grades in ICT =  "<<ICTgrade<<endl;
//	}
//	else if(p1<90 && p1>=80){
//		ICTgrade='B';
//		cout<<"\n\t  grades in ICT =  "<<ICTgrade<<endl;
//	}
//	else if(p1<80 && p1>=70){
//		ICTgrade='C';
//		cout<<"\n\t  grades in ICT =  "<<ICTgrade<<endl;
//	}
//	else if(p1<70 && p1>=60){
//		ICTgrade='D';
//		cout<<"\n\t  grades in ICT =  "<<ICTgrade<<endl;
//	}
//	else if(p1<60){
//		ICTgrade='F';
//		cout<<"\n\t grades in ICT =  "<<ICTgrade<<endl;
//		cout<<"\n\t  fail "<<endl;
//		return 0;
//	}
//	
//	//for calculas coure
//		
//	
//	
//	char Mathgrade;
//	double	p2=(m2*100)/100;
//	if(p2>=90){
//		Mathgrade='A';
//		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
//	}
//	else if(p2<90 && p2>=80){
//		Mathgrade='B';
//		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
//	}
//	else if(p2<80 && p2>=70){
//		Mathgrade='C';
//		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
//	}
//	else if(p2<70 && p2>=60){
//		Mathgrade='D';
//		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
//	}
//	else if(p2<60){
//		Mathgrade='F';
//		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
//		cout<<"\n\t  fail "<<endl;
//		return 0;
//	}
//	
//	
//	// for the grade calculaation of PF : ----------------------------------
//		
//	char PFgrade;
//	double	p3=(m3*100)/100;
//	if(p3>=90){
//		PFgrade='A';
//		cout<<"\n\t  grades in PF ="<<PFgrade<<endl;
//	}
//	else if(p3<90 && p3>=80){
//		PFgrade='B';
//		cout<<"\n\t  grades in PF =  "<<PFgrade<<endl;
//	}
//	else if(p3<80 && p3>=70){
//		PFgrade='C';
//		cout<<"\n\t  grades in PF =  "<<PFgrade<<endl;
//	}
//	else if(p3<70 && p3>=60){
//		PFgrade='D';
//		cout<<"\n\t  grades in PF =  "<<PFgrade<<endl;
//	}
//	else if(p3<60){
//		PFgrade='F';
//		cout<<"\n\t  grades in PF =  "<<PFgrade<<endl;
//		cout<<"\n\t   fail"<<endl;
//	}
//	
//	//    For the calculation of total marks and grades:-------------------------------------------
//	
//	 double total_marks=m1+m2+m3;
//	 cout<<"\n\t\t\t   Overall marks  ="<<total_marks<<endl;
//	double percentage;
//	percentage=(total_marks*100)/300;
//	cout<<"\n\t\t\t  Overall percentage is  :  "<<percentage<<"%"<<endl;
//	 char Total_grades;
//	 	if(percentage>=90){
//		Total_grades='A';
//		cout<<"\n\t\t\t\t Overall grades  :"<<Total_grades<<endl;
//	}
//	else if(percentage<90 && percentage>=80){
//	Total_grades='B';
//	cout<<"\n\t\t\t\t Overall grades :"<<Total_grades<<endl;
//	}
//	else if(percentage<80 && percentage>=70){
//		Total_grades='C';
//		cout<<"\n\t\t\t\t overall grades :"<<Total_grades<<endl;
//	}
//	else if(percentage<70 && percentage>=60){
//		Total_grades='D';
//		cout<<"\n\t\t\t\t overall grades :"<<Total_grades<<endl;
//	}
//	else if(percentage<60){
//		Total_grades='F';
//		cout<<"\n\t\t\t\t overall grades :"<<Total_grades<<endl;
//	}
//	else {
//		cout<<"\t\t\t\t you failed\n"<<endl;
//	}
//	     //  condition to check whether student is eligible for scholarship or not ?-----------------------------
//	     
//	     
//	cout<<"***************************************Scholarship eligibility************************************************\n";
//       if((ICTgrade=='A' && Mathgrade=='A' && PFgrade=='A')&&(total_marks>=270)){
//		cout<<"\n\t\t\t\t **congratulation**\n \t\t \t\n\t\t---->>---- you are elligeble for the merit scholarship---->>----\n";
//	}
//	else if(((ICTgrade=='A'|| ICTgrade=='B')&&(Mathgrade=='A'|| Mathgrade=='B')&&(PFgrade=='A'|| PFgrade=='B'))&&(total_marks>=240 )){
//		cout<<"\n\t\t\t\t **Congratulation**\n  \t\t \t\n\t\t ----->>----You are elligeble for standerd scholarship---->>----\n";
//	} 
//	else{
//		cout<<"\n\t\t\t\t Work hard to get next scholarship "<<endl;
//	
//	}
//		cout<<"\n\n\n\n\t\t\t\t +<<<>>>--THANK YOU && BEST OF LUCK--<<<>>>+"<<endl;
//	return 0;	
	

//       #loan eligibility  age and income#

//	int age;
//	int income;
//	cout<<"Enter your age : ";
//	cin>>age;
//	cout<<"Ente your annual income : ";
//	cin>>income;
//	if(age<18 ){
//		cout<<"You are not eligible for a loan because you are under 18 years of age."<<endl;
//	}
//	else if(age>=18 && income<30000){
//		cout<<"You meet the age requirement but are not eligible for a loan because your income is below $30,000."<<endl;
//	}
//	else{
//		cout<<"Congratulations! You are eligible for a loan."<<endl;
//	}
	
//=====================================================Access control system==========================================================================	
	
	
//	string	username;
//	string password;
//	cout<<"enter user name : ";
//	cin>>username;
//	cout<<"enter your passord : ";
//	cin>>password;
//	if(username=="admin" && password=="password123"){
//		cout<<"\n \t authentication successful"<<endl;
//	} 
//	else if (username !="admin" ||password!="password123"){
//		cout<<"\n \t authentication failed access denied"<<endl;
//		return 0;
//	}
//	string role;
//	cout<<"\nyour role : ";
//	cin>>role;
//	
//	if(role=="admin"){
//		cout<<"\n \t full Access"<<endl;
//	}
//	else if(role=="guest"){
//		cout<<"\n \t Limited access"<<endl;
//	}
//	else{
//		cout<<"\n \t no access"<<endl;
//	}
	
	return 0;
	
}
	
	
		

