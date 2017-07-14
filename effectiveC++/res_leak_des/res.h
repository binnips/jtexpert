#include <iostream>

using namespace std;


class ALA{
	public:
		virtual void processData() = 0;
	ALA() {cout <<"Base class "<<endl;};
	virtual	~ALA() {};
};

class red:public ALA
{
	public:
		virtual void processData();
		red(const red &s)
		{
			cout<<"lets enjoy"<<endl;
		}
			
		red(){
			cout <<"I am red constructor"<<endl;
		}
		~red()
		{
			cout <<"Red destructor"<<endl;
		}

};

class blue:public ALA

{
	public:
		virtual void processData();
	        blue(const red &s)
		{
			cout<<"lets enjoy"<<endl;
		}
			
		blue(){
			cout <<"I am blue constructor"<<endl;
		}
		~blue()
		{
			cout <<"blue destructor"<<endl;
		}
};
