#include<iostream>
using namespace std;
bool test(int a){
	int s=0;
	while(a){
		s+=a%10;
		a/=10;
	}
	return s%4==0;
}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int a;
		cin>>a;
		while(1){
			if(test(a))
				break;

			a++;
		}
		cout<<a<<endl;
	}
	return 0;
}