#include <iostream>

using namespace std;

int main()
{
    int hour,minute,toAdd;
    cin >> hour >> minute;
    cin >> toAdd;

    minute += toAdd;

    hour +=minute/60;
    minute=minute%60;

    hour=hour%24;


    cout<< hour/10 << hour%10<< " " << minute/10<<minute%10;

    return 0;
}
