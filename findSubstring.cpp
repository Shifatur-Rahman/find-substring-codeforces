#include <iostream>
using namespace std;
int main(){

string s="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

int n;
cin>>n;
while(n--){
	string m;
	cin>>m;
	int found = s.find(m);
	if(found != string::npos){
		cout<<"YES"<<endl;
	} else{
	    cout<<"NO"<<endl;
	}
}




}
