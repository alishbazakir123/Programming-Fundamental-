#include<iostream>
using namespace std;
int main(){
	
	
	//==================================================shopping system======================================================================
	
	
	
//	int quantity,total,discount,NetPrice;
//	cout<<"choose category"<<endl;
//	char category;
//	cout<<" enter E for electronics:";
//
//	cout<<" enter C for clothing :";
//	
//	cout<<"enter G for groceries :";
//	cin>>category;
//	switch (category){
//		case 'E':
//			cout<<"electronics"<<endl;
//			int electronics;
//			cout<<" enter \n 1 for laptop : Rs 1000 \n 2 for smartphone : Rs 700 \n 3 for headphones : Rs 150";
//			cin>>electronics;
//			switch(electronics){
//				case 1:
//					cout<<"how may items you like to buy "<<endl;
//					cin>> quantity;
//					total=quantity*1000;
//					break;
//				case 2:
//					cout<<"how may items you like to buy "<<endl;
//					cin>>quantity;
//					total=quantity*700;
//					break;
//				case 3:
//					cout<<" how may items you like to buy"<<endl;
//					cin>>quantity;
//					total=quantity*150;
//					break;	
//					
//			}
//			break;
//		case 'C':
//			cout<<"clothing"<<endl;
//			int	clothing;
//			cout<<" enter \n 1 for jacket : Rs 120 \n 2 for t-shirt : Rs 40\n 3 for jeans : Rs 60"<<endl;
//			cin>>clothing;
//			switch(clothing){
//				case 1:
//					cout<<" how may items you like to buy"<<endl;
//					cin>>quantity;
//					total=quantity*120;
//					break;
//				case 2:
//					cout<<" how may items you like to buy"<<endl;
//					cin>>quantity;
//					total=quantity*40;
//					break;
//				case 3:
//					cout<<" how may items you like to buy"<<endl;
//					cin>>quantity;
//					total=quantity*60;
//					break;		
//			}
//			break;
//		case 'G':
//			cout<<"groceries"<<endl;
//			int groceries;
//			cout<<" enter \n 1 for malik : Rs 2\n 2 for bread : Rs 3\n 3 for egg : Rs 5"<<endl;
//			cin>>groceries;
//			switch (groceries){
//				case 1:
//					cout<<"how may items you like to buy"<<endl;
//					cin>>quantity;
//					total=quantity*2;
//					break;
//				case 2:
//					cout<<" how may items you like to buy"<<endl;
//					cin>>quantity;
//					total=quantity*3;
//					break;
//				case 3:
//					cout<<" how may items you like to buy"<<endl;
//					cin>>quantity;
//					total=quantity*5;
//					break;		
//			}	
//			break;
//		default:
//		 	cout<<" enbter correct menu"<<endl;	
//		return 0;
//			
//	}
//	cout<<"your total amout= "<<total<<endl;
//	
//	if(total<100){
//		NetPrice=total;
//		cout<<" No discount for this purchasing !\n"<<endl;
//	}	
//	else if (total>=100 && total<=500){
//		discount=0.1*total;
//		cout<<"discount = "<<discount<<endl;
//		NetPrice=total-discount;
//	}
//	else {
//		discount=0.2*total ;
//		cout<<"discount = "<<discount<<endl;
//		NetPrice=total-discount;
//	}
//	
//	 
//	cout<<"You just have to pay  Rs "<<NetPrice;
	
	
	//====================================================Days of a Week============================================================
	
	
//	int days;
//	cout<<" select any number from 1 to 7 to know the corrresponding day of week ";
//	cin>>days;
//	
//	switch(days){
//		case 1:
//			cout<<" \nIt is Monday \n";
//			break;
//		case 2:
//			cout<< "\n It is Tuesday \n";
//			break;
//		case 3:
//			cout<<" \n It is wednesday \n";
//			break;
//		case 4:
//			cout<<"\n It is Thrusday \n";
//			break;
//		case 5:
//			cout<<"\n It is Friday \n";
//			break;
//		case 6:
//			cout<<"\n It is Saturday \n";
//			break;
//		case 7:
//			cout<<"\n It is Sunday \n";
//			break;
//		default : cout<<" You typed wrong number. Try again !";
//	}
	
	
	//================================================calculator=================================================================
	
	
//	double a,b;
//	char operators;
//	cout<<" Enter two number to perform calculation\n";
//	cin>>a>>b;
//	cout<<"\nEnter operator to perform operation (+,-,*,/)\n";
//	cin>>operators;
//	switch(operators){
//		case'+':
//			cout<<" you performed addition "<<a<<"+"<<b<<"= "<<a+b<<endl;
//			break;
//		case'-':
//			cout<<" your performed subraction "<<a<<"-"<<b<<"= "<<a-b<<endl;
//			break;
//		case'*':
//			cout<<" you preformed multiplication "<<a<<"*"<<b<<"= "<<a*b<<endl;
//			break;
//		case'/':
//			cout<<" you performed division "<<a<<"/"<<b<<"= "<<a/b<<endl;
//			break;
//			default:
//				cout<<"\n incorrect data entry !\n please try again "<<endl;
//	}
	
	
	//=================================================Area of shapes=============================================================================
	
	
//	double const pi=3.17;
//	int shapes;
//	cout<<" press 1 for area of circle \n press 2 for area trianle \n press 3 for area of rectangle \n press 4 for area of square \n";
//	cin>>shapes;
//	double x,y,r;
//	switch(shapes){
//		case 1:
//			cout<<"Enter the radius of circle \n radius : ";
//			cin>>r;
//			cout<<" The area of circle is ="<< 2*pi*r*r<<endl;
//			break;
//		case 2:
//			cout <<" Enter the hight and base of triangle \n Hight :";
//			cin>>x;
//			cout<<" Base :";
//			cin>>y;
//			cout<<" The area of triangle is ="<<(x*y)/2<<endl;
//			break;
//		case 3:
//			cout<<"Enter the length and width of rectangle \n Length :";
//			cin>>x;
//			cout<<" Width :";
//			cin>>y;
//			cout<<" The area of rectangle is ="<<x*y<<endl;
//			break;
//		case 4:
//			cout<<" Enter the lenght and width of square\n Length :";
//			cin>>x;
//			cout<<" Width :";
//			cin>>y;
//			cout<<" The area of square is ="<<x*y<<endl;
//			break;
//			default:
//				cout<<" wrong entry of data !\n";
//	}


	//===========================================================================================================================================================================
	//s===============================================================Currency converter===========================================================================================
	
//	double currency,amount;
//	int converter;
//	cout<<" press 1 to convert US to PKR "<<endl;
//	cout<<" press 2 to convert US to INR "<<endl;
//	cout<<" press 3 to convert US to Euros :";
//	cin>>converter;
//	switch(converter){
//		case 1:
//			cout<<"\n Enter the US amount you want to convert in PKR :";
//			cin>>amount;
//			currency=amount*278.78;
//			cout<<"\n The amount you entered is "<<currency<<" PKR"<<endl;
//			break;
//		case 2:
//			cout<<"\n Enter the US amount you want to convert in INR :";
//			cin>>amount;
//			currency=amount*86.34;
//			cout<<"\n The amount you entered is "<<currency<<" INR"<<endl;
//			break;
//		case 3:
//			cout<<"\n Enter the US amount you want to convert in Euros :";
//			cin>>amount;
//			currency=amount* 0.8091;
//			cout<<"\n The amount you enered is "<<currency<<" Euros";
//			break;
//		default :
//			cout<<"\n Invalid data \n please enter valid data and try again ";
//	}

	
	
	
}
