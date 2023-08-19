#include<stdio.h>

using namespace std;

struct StackNode{
     int data;
     StackNode* next;
     StackNode(int a)
     {
        data = a;
        next = NULL;
     }
};

class Mystack{
    private:
    StackNode*  top;
    public:
    void push(int a);
    int pop();
    Mystack () {top = NULL;}
};

void Mystack::push(int x)
{
       StackNode* newnode = new StackNode(x);
       newnode->next = top;
       top = newnode;
}

int Mystack::pop()
{
       if(top == NULL) return -1;

       int data = top->data;
       top = top ->next;
       return data;
}