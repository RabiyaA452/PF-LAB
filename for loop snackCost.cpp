#include<iostream>
using namespace std;
int main()
{
	int snackCost=15;
	int numStudent,entryFee;
	cout<<"enter number of students who want to attend the game night:"<<endl;
	cin>>numStudent;
	if(numStudent>15)
	{
		cout<<"Error! more students are not allowed"<<endl;
	return 0;
	}
	string studentName[15];
	int totalCost=0;
	for(int i=0;i<numStudent;i++)
	{
		cout<<"enter name of student:"<<endl;
		cin>>studentName[i];
		int studentCost=entryFee+snackCost;
		totalCost+=studentCost;
		cout<<studentName[i]<<":"<<"Entry Fee:$"<<entryFee<<"Snack cost: $"<<snackCost<<"Total cost: $"<<studentCost<<endl;
	}
	cout<<"User names for the event:"<<endl;
	for (int i=0;i<numStudent;i++)
	{
		cout<<"User"<<i+1<<":"<<studentName[i]<<endl;
	}
	cout<<"Total cost for all students: $"<<totalCost<<endl;
	
	return 0;
}