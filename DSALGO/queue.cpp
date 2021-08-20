#include <iostream>
using namespace std;

#define n 5

class queues{
    int *arr;
    int front;
    int back;

    public :
        queues()
        {
            arr = new int[n];
            front=-1;
            back=-1;
        }

        void enqueue(int x)
        {
            if (back==n-1)
            {
                cout<<"Quese overflow"<<endl;
                return;
            }
            back++;
            arr[back]=x;

            if (front==-1)
            {
                front++;
            }
        }

        void dequeue(){
            if (front==-1 || front>back)
            {
                cout<<"no elements in queue"<<endl;
                return;
            }
            front++;

        }
        int peek()
        {
             if (front==-1 || front>back)
            {
                cout<<"no elements in queue"<<endl;
                return -1;
            }
            return arr[front];
        }

        bool empty(){
             if (front==-1 || front>back)
            {
                return true;
            }
        }

        void display()
        {
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<endl;
            }
            
        }
};

int main()
{
    queues q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.enqueue(12);
    q.display();
    return 0;
}
