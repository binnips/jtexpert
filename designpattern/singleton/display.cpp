#include "display.h"


display* display::instance=0;

display::display()
{
	cout<<"Display constructor"<<endl;
}

display::display(const display &data)
{
	cout<<"Display default copy constroctor"<<endl;
}

display& display::operator=(const display &)
{
}
int display::get()
{
	return ++i;
}
int main()
{
	display::getInstance();

}
