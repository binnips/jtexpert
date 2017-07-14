#include "res.h"
#include <memory>


ALA *getData()
{
	red* a = new red();
	return a;
}
void processColors()
{
	auto_ptr<ALA> a  (getData());
	a -> processData();
}

int main()
{
	processColors();
	return 0;
}
