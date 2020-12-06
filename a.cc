#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

void  UserName(int num){
	string user_name;
	cout << "What is your name? : ";
	cin >> user_name;
	cout << "Your name is : " << user_name << endl;
}

int main(){
	UserName(0);
}
