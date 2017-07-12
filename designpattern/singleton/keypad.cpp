#include <iostream>

using namespace std;

class Keypad
{
	public:
		static Keypad *getInstance()
		{
			if(!instance)
			{
				if(destroyed)
				{
					deadRef();
				}
				else
				{
					create();
				}

			}
			return instance;
		}
		void deleteme()
		{
			instance -> ~Keypad();
		}
	private:
		static void killKeypad()
		{
			instance -> ~Keypad();
		}
		static void create()
		{
			cout <<"Let me create this guy"<<endl;	
			static Keypad sinstance;
			instance = &sinstance;
		}
		static void deadRef()
		{
			cout <<"Who called me dead"<<endl;
			create();
			new(instance) Keypad;
			std::atexit(killKeypad);
			destroyed = false;
		}
		virtual ~Keypad()
		{
			instance = 0;
			destroyed = true;
		}
		static Keypad *instance;
		static bool destroyed;
};	
Keypad *Keypad::instance = 0;
bool Keypad::destroyed= false;
void hello()
{
	Keypad *x = Keypad::getInstance();
	x -> deleteme();
}
int main()
{
	hello();	
	hello();	
}
