#include<iostream>
using namespace std;

int main(){
	int days;
	cout<<"Enter the number of days: ";
	cin>>days;
	int arr[days];
	
	for(int i=0;i<days;i++){
		cin>>arr[i];
	}
	for(int i=days-1; i>=0; i--)
	{
		cout<<arr[i];
	}
}
