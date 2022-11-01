#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
    T *newData = new T[mSize +(last-first)];
    int index = position - this->begin();
    int j = 0;
    for (int i =0;i<=mSize;i++){
        if (i==index){
            for(auto it = first;it!=last;it++){
                newData[j++]=*it;
            }
        }
        if(i<mSize){
            newData[j++]=mData[i];
        }

    }

    delete [] mData;
    mData = newData;
    mSize= mSize +(last-first);
    mCap=mSize;

}

#endif
