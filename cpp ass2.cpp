#include <iostream>
using namespace std;

int main(){
	int t,table;
	cout<<"enter the table :";
	cin>>t;
	
	for(int i=1;i<=10;i++){
		table=t*i;
		
		cout<<t<<" * "<<i<<" = "<<table<<endl;
	}
return 0;
}