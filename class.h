#ifndef HUGEINT_H
#define HUGEINT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class HugeInt{
	
	friend ostream &operator <<(ostream&,const HugeInt&);
	friend istream &operator >>(istream&,HugeInt&);
	

	public:
		int operator +(HugeInt& Obj1);
		int operator -(HugeInt& Obj1);
		HugeInt(int j);
		HugeInt(string j);

	private:
		int Obj;
		vector<int> v;
		string str;


};
#endif
