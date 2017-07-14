#include <iostream>

using namespace std;

#define MAX 100

class deque
{
	int arr[MAX];
	int front;
	int rear;
	int size;
     public:
	deque(int size)
	{
		front = -1;
		rear = 0;
		this ->size = size;
	}
	void insertfront(int key);
	void insertrear(int key);
	void deletefront();
	void deleterear();
	bool isFull();
	bool isEmpty();
	int getFront();
	int getRear();
};

int main()
{
	cout <<"Waiting for Q implementation"<<endl;
	return 0;
}
