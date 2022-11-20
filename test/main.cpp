#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> p;
    p.push(2);
    p.push(5);
    p.push(1);
    p.push(3);

    std::cout << p.top() ;



}
