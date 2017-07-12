#include <iostream>

using namespace std;


class display
{
	public:
		 static display*  getInstance(
				 )
		 {
			 if(!instance)
				 instance = new display();
			 return instance;
		 }
		 int get();

	private:
		 static display *instance;
		 int i;
		 display ();
		 display(const display &);
		 display& operator = (const display &);
};



