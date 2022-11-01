#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while (idx>0){
        size_t p = (idx-1)/4;
        if (mLess(tmp,mData[p])){
            break;
        }
        mData[idx]=mData[p];
        idx=p;
    }
    mData[idx]=tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t d,maxx;
    while ((d = idx*4+1)<mSize){

        maxx = d;
        for (int i =1;i<4;i++){
            if (d+i<mSize && mLess(mData[maxx],mData[d+i])){
                maxx = d+i;
            }
        }
        if (mLess(mData[maxx],tmp)) break;
        mData[idx]=mData[maxx];
        idx = maxx;

    }
    mData[idx]=tmp;
}

#endif

