#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int x;
	for(int i=0;i<n;i++){
	 cin>>x;
	 while(x!=0){
		int last;
		last= x%10;
		sum=sum+last;
		x=x/10;
	}
	cout<<sum<<endl;
	sum=0;
	   
	}
