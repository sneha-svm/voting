#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age of the person:\n";
	cin>>age;
	if(age==18){
		cout<<"Eligible to vote\n";
	}
	else{
		cout<<"Not Eligible to Vote";
	}
	return 0;
}
