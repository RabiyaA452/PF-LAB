#include<iostream>
using namespace std;
int main()
{
	char choice;
	int count;
	while(true)
	{
		cout<<"enter character";
		cin>>choice;
		if(choice=='#')
		break;
		count++;
		}
	cout<<"the number of characters are"<<count<<endl;
	return 0;
}