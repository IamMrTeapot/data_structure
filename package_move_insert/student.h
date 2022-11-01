#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
    if (m > s2.mSize){
        m=s2.mSize;
    }
    if (k > mSize){
        k=mSize;
    }

    int oldSize = mSize;
    expand(mSize+m);
    mSize = mSize+m;
    int lastIndex = mCap-1;
    for (int i = 0;i<k;i++){
        mData[mSize-1-i]=mData[oldSize-1-i];
    }
    for (int i = 0; i<m;i++){
        mData[mSize-1-k-i]=s2.top();
        s2.pop();
    }
}
#endif
