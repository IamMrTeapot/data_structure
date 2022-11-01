#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
    if(mSize==0 && other.size()!=0){
        return true;
    }
    if (mSize && other.size() && mData[0]<other[0]){
        return true;
    }
    if (mSize && other.size() && mData[0]==other[0]){

        int minn = mSize <= other.size() ?  mSize : other.size();
        for(int i =0;i<minn;i++){
            if (mData[i]!=other[i]){
                return mData[i]<other[i];
            }
        }
        if (mSize == minn && other.size() > minn){
            return true;
        }

    }


    return false;
}

#endif
