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

        void push(int x)
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

        void pop(){
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
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    q.push(12);
    q.display();
    return 0;
}