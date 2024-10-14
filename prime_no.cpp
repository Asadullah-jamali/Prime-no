#include<iostream>
using namespace std;
int main(){
	int num,i=1,counter=0;
	cout <<"Enter the number:";
	cin >> num;
	
	for(int i=1;i<=num;i++){
	if(num%i == 0){
		counter ++;
	}
	}
	if(counter==2){
	cout << "prime";
	}else {
	  cout <<"not prime"; }
	return 0;
}
