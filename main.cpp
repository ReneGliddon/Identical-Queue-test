#include <iostream>
#include "queueType.h"
using namespace std;
#include <queue>

template <class Type>
bool identicalQ ( queue<Type> queue1, queue<Type> queue2)
{
    bool isIdentical;

     while(!queue1.empty())
    {
        if(queue1.front()==queue2.front())
        {
            isIdentical=true;
            queue1.pop();
            queue2.pop();
        }
        else if(queue1.front()!=queue2.front())
        {
           isIdentical=false;
           return isIdentical;

        }
    }
    return isIdentical;

}
int main()
{
    queue<int> queue1;
    queue<int> queue2;
    queueType<int> queue3;

    queue1.push(1);
    queue1.push(3);
    queue1.push(4);
    queue1.push(6);
    queue1.push(7);
    queue1.push(8);
    queue1.push(2);

    queue2.push(1);
    queue2.push(3);
    queue2.push(4);
    queue2.push(6);
    queue2.push(7);
    queue2.push(8);
    queue2.push(2);

    bool identical = identicalQ(queue1, queue2);
    cout<<identical<<endl<<endl;

    if(identical)
    {
        cout<<"yes.";
    }
    else
        cout<<"no.";


    return 0;
}
