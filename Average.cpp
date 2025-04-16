#include<iostream>
using namespace std;
int main()
{
	int n,i;
	float num[100], sum=0.0,avg;
	cout<<"ENter the number of data=";
	cin>>n;
	
	while (n>100 || n<0)
	{
		cout<<"ERROR..!! number should be enter in reng:";
		cout<<"Enter the number again:";
		cin>>n;
		
	}
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" Enter the number=";
		cin>>num[i];
		sum +=num[i];
	}
	avg=sum/n;
	cout<<"Average= "<<avg;
	return 0;
}
