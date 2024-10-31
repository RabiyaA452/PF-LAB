#include<iostream>
using namespace std;
int main()
{
	int num1,num2,result;
	int choice;

	
	cout<<"menu"<<endl;
	cout<<"1.addition"<<endl;
	cout<<"2.subtraction"<<endl;
	cout<<"3.exit"<<endl;
	
		cout<<"enter two numbers:"<<endl;
		cin>>num1>>num2;
	
	cout<<"select an option(1,2,3):"<<endl;
	cin>>choice;
		do
	{
	
	 if(choice==1)
	{
			cout<<"answer:"<<num1+num2<<endl;
		}
	else if(choice==2)
			{			
				cout<<"answer:"<<num1-num2<<endl;
		}
	
			else if(choice==3)
			{
					cout<<"exit.."<<endl;
				}
				else
				{
				cout<<"Invalid Option";}
	}
 
         while (choice !=3);  
         
  return 0;
}