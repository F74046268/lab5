#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "class.h"
using namespace std;
ostream &operator <<(ostream& out,const HugeInt& huge)
{
      for(int i=21;i>=0;--i)
	  {
	  	out<<huge.v[i];
		return out;
	  }

}

istream &operator >>(istream& in,HugeInt& huge)
{
	in>>huge.str;



	huge.Obj = atoi((huge.str).c_str());
	
	int i,k;
	k=huge.Obj;

	while(huge.Obj/10)
	{
		i++;
		huge.Obj=huge.Obj/10;
	}
	i++;

	for(;i>=0;--i)
	{
		(huge.v).push_back(k%10);
		k=k/10;
	}

   return in;



}



HugeInt::HugeInt(int j)
{
	int i,k;
	k=j;

	while(j/10)
	{
		i++;
		j=j/10;
	}
	i++;
	
	for(;i>=0;--i)
	{
		v.push_back(k%10);
		k=k/10;
	}

	
}

HugeInt::HugeInt(string j)
{
	
	Obj = atoi(j.c_str());
	
	int i,k;
	k=Obj;

	while(Obj/10)
	{
		i++;
		Obj=Obj/10;
	}
	i++;

	for(;i>=0;--i)
	{
		v.push_back(k%10);
		k=k/10;
	}

}

int HugeInt::operator +(HugeInt& Obj1)
{
		int i,carry=0;
		for(i=0;i<21;++i)
		{
			v[i]=v[i]+Obj1.v[i]+carry;
			carry=v[i]/10;
			v[i]%=10;
		}
}

int HugeInt::operator -(HugeInt& Obj1)
{
	int i,borrow=0;
	for(i=0;i<21;++i)
	{
		v[i]=v[i]-Obj1.v[i]-borrow;
		if(v[i]<0)
		{
			borrow=1,v[i]+=10;
		}
		else
		{
			borrow=0;
		}


	}
}


