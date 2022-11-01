#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
    int num = this->size();
    int j=0;
    this->mSize = num*2;
    this->ensureCapacity(num*2);
    for(int i= num*2-1;i>=num;i--){
        mData[i] = mData[j++];
    }
}

#endif
