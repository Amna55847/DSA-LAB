#include <iostream>
using namespace std;

class Queue{
	
int front;
int rear;
int size;
int* arr;

public:
    Queue() {
        front = 0;
        rear = -1;
        size = 50;
        arr= new int[size];
    } 
    
    void empty()
    {
    	if (rear == -1)
    	{
    		cout<<"Empty"<<endl;
		}
		else
		{
			cout<<"Elements are present"<<endl;
		}
	}

    void enqueue(int value) {
    	if (rear < size-1)
    	{
    		rear++;
    		arr[rear]=value;
		}
		else
		{
		cout<<"Overflow"<<endl;
	}
}
        
    int dequeue() { 
    	if (rear==-1)
    	{
    		cout<<"Underflow"<<endl;
		}
		else
		{
		front++;	
    }
}
void rear_element()
{
	cout<<"current rear element: "<< arr[rear] <<endl;
}

void front_element()
{
	cout<<"current front element: "<< arr[front] <<endl;
}
void display()
{
	for(int i=front; i<= rear; i++)
	{
		cout<<arr[i]<<"  ";
	}
}
};

int main() {
    Queue q;
    q.empty();
    cout<<endl;
	q.enqueue(5); 
	q.rear_element();
	q.enqueue(3);
	cout<<endl;
	q.display();


}
