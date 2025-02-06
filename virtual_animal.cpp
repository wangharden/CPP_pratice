#include<iostream>

using namespace std;

//Ðéº¯Êý
class Animal {
public:
	virtual void speak() {
		cout << "Animal sound" << endl;
	}
};

class dog :public Animal {

};