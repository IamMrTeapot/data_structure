#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mFront,mSize ,mCap,last, correction;
    for (int i=0;i<n;i++){
        cin >> mFront >> mSize >> mCap >> last >> correction;
        bool pass = true;
        if (mSize > mCap){
            pass = false;
        }
        if (mFront >= mCap){
            pass = false;
        }
        if (mCap < mSize || mCap < last || mCap < mFront) {
            pass = false;
        }
        if (mCap != 0 && (last-mFront+mCap)%mCap!=mSize){
            pass = false;
        }

        if (correction == 0){
            if (pass){
                cout << "OK";
            } else {
                cout << "WRONG";
            }
            cout << endl;
        } else {
            if (pass) {
                cout << "OK";
            } else {
                cout << "WRONG ";
                if (correction==1){
                    cout << (last-mSize+mCap)%mCap;
                } else if (correction ==2){
                    if(last == mFront){
                        cout << 0;
                    } else {
                        cout << (last-mFront+mCap)%mCap;
                    }
                } else if (correction ==3){
                    if(mFront >=last){
                        cout << (mFront +mSize -last);
                    } else{
                        cout << (last+1);
                    }

                } else if (correction ==4){
                    cout << (mFront + mSize)%mCap;
                }
            }
            cout << endl;
        }

    }

}
