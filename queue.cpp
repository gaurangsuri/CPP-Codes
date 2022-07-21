#include <iostream>
#define SIZE 5

using namespace std;

class queue{
    private:
    int arr[SIZE],front,rear;

    public:
    queue(){
        front=-1;
        rear=-1;
    }

    bool isFull(){
        if (front==0 && rear==SIZE-1){
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int x){
        if(isFull()){
            cout<<"\nOVERFLOW !!!";
        }
        else{
            if(front==-1){
                front=0;
                rear++;
                arr[rear]=x;
                cout<<"\nELEMENT INSERTED "<<x;
            }
            else{
            	rear++;
                arr[rear]=x;
                cout<<"\nELEMENT INSERTED "<<x;
			}
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"\nUNDERFLOW !!!";
        }
        else{
            cout<<"\nELEMENT DELETED "<<arr[front];
            front++;
        }
    }
};
int main(){
	queue b;
	b.enqueue(5);
	b.enqueue(6);
	b.enqueue(7);
	b.enqueue(8);
	b.enqueue(9);
	b.dequeue();
	b.dequeue();
}
