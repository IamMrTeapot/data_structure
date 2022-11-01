#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
    for(int i =0;i<mSize;i++){
        if (mData[i]==k){
            return true;
        }
    }
    return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
    if (!find(k)){
        return -1;
    }

    int index;
    for (int i=mSize-1;i>-1 ; i--){
        if (mData[i]==k){
            index = i;
            break;
        }
    }
    if (index == 0){
        return 0;
    } else {
        return log2(index)/1;
    }



}

#endif

