#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    int temp = number;

    int count=0;

    while (number>=2){
        if (number%2==1 && number!=1){
            number++;
        }
        number = number/2;
        count++;
    }

    int space = 1;
    for (int i =0;i<count;i++){
        space=space*2;
    }
    cout << space-temp;
}
