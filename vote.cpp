#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age of the person:\n";
	cin>>age;
	if(age==18){
		cout<<"Eligible for Voting\n";
	}
	else if(age>18){
		cout<<"Eligible for Voting\n";
	}
	else{
		cout<<"Not Eligible for Voting";
	}
	return 0;
}
