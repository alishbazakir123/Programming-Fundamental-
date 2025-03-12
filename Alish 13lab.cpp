#include<iostream>
using namespace std;
int main()
{
	int num=10;
	int*ptr=&num;
	cout<<"Value of num: "<<*ptr<<endl;
	return 0;
}



//#02


//int main ()
//{
//	int num=20;
//	int *ptr=&num;
//	cout<<"original values :"<<num<<endl;
//	*ptr=50;
//	cout<<"modified value :"<<num<<endl;
//	return 0;
//	
//}


//#03

//int main()
//{
//	int arr[]={1,2,3,4,5};
//	int*ptr=arr;
//	cout<<"Array element :";
//	for(int i=0;i<5;i++){
//		cout<<*(ptr+i)<<" ";
//	}
//	cout<<endl;
//	return 0;
//}




//#04

//void swap(int*a,int*b)
//{
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//}
//int main()
//{
//	int x=5,y=10;
//	cout<<"Before swaping :x= "<<x<<"y= "<<y<<endl;
//	swap(&x,&y);
//	cout<<"After swapping :x= "<<x<<"y= "<<y<<endl;
//	return 0;
//}


//#05

//int main()
//{
//	int *ptr=Null;
//	if(ptr==Null)
//	{
//		cout<<"pointer is null and does not point to any memory ."<<endl;
//	}
//	else
//	{
//		cout<<"pointer holds address : "<<ptr<<endl;
//	}
//	return 0;
//}


//#06
//int main()
//{
//	int num=42;
//	void*ptr=&num;
//	cout<<"Value using void pointer : "<<*(static_cast<int*>(ptr))<<endl;
//	return 0;
//}






