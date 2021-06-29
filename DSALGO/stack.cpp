#include <iostream>
#include <string>
using namespace std;

#define n 5

class stack{
    int * arr;
    int top;
    public :
         stack(){
            arr = new int[n];
            top = -1;
         }

         void push(int x)
         {
             if (top == n-1)
             {
                 cout<<"Stack Overflow";
                 return;
             }
             top++;
             arr[top] = x;
         }

         void pop(){
             if(top==-1)
             {
                 cout<<"no element to pop"<<endl;
                 return;
                 }
             top--;
         }

         int peek(){
             if (top == -1)
             {
                 cout<<"No element in stack";
                 return -1;
             }
             return arr[top];
         }

         bool empty()
         {
             return top==-1;
         }
         void display(){
             for (int i = 0; i < n; i++)
             {
                 cout<<arr[i]<<endl;
             }
             
         }
};

int main()
{
     stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.display();
    cout<<"peek"<<endl;
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}