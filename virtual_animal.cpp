#include<iostream>

using namespace std;

//�麯��
class Animal {
public:
	virtual void speak() {
		cout << "Animal sound" << endl;
	}
};

class dog :public Animal {

};