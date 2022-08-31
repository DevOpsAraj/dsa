/*

--> push_back() – to insert an element at the end of the deque.
--> push_front() – to insert an element at the front of the deque.
--> pop_back() – deletes the last element of the deque.
--> pop_front() – deletes the front element of the deque.
--> front() – it gives a reference to the first element of the deque.
--> back() – it gives a reference to the last element of the deque.
--> size() – returns the number of elements on the deque.
--> empty() – to check if the deque is empty or not.

*/

#include <bits/stdc++.h>
using namespace std;

void printdeque(deque<int> dq)
{
    deque<int>::iterator it;
    for (it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);

    cout << "The elements in the deque are: ";
    printdeque(dq);

    cout << "The size of the deque is: " << dq.size() << endl;
    cout << "The first element in the deque: " << dq.front() << endl;

    cout << "Deleting the first element" << endl;
    dq.pop_front();
    printdeque(dq);

    cout << "The last element of the deque: " << dq.back() << endl;

    cout << "Deleting the last element" << endl;
    dq.pop_back();
    printdeque(dq);

    return 0;
}