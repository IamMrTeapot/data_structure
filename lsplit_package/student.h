#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
    CP::list<T> result;
    if(it ==end()){
        return result;
    }
    if (it == begin()){
        std::cout << "printing " << mSize << "\n\n";
        std::cout << "printing this->mSize " << this->mSize << "\n\n";
        std::cout << "doing result = *this \n\n";
        result = *this;
        std::cout << "printing this->mSize " << this->mSize << "\n\n";
        std::cout << "printing " << mSize << "\n\n";
        std::cout << "printing rsize " << result.mSize << "\n\n";
        //result.mSize = mSize;
        mHeader->prev = mHeader;
        mHeader->next = mHeader;
        mSize =0;
        return result;
        //node *mH = new node(*end(),mHeader->prev,mHeader->next);




        //mHeader->next->prev = mH;
        //mHeader->prev->next = mH;
        //result.mHeader= mH;


        //mHeader->next = mHeader;
        //mHeader->prev = mHeader;
        //result.mSize = mSize;
        //mSize =0;
        //return result;



    }
    auto tmp = --it;
    it++;
    int rsize = mSize-pos;
    mSize=pos;

    result.mHeader->next = it.ptr;
    result.mHeader->prev = mHeader->prev;
    result.mSize = rsize;

    it.ptr->prev = result.mHeader;
    mHeader->prev->next = result.mHeader;

    tmp.ptr->next = mHeader;
    mHeader->prev = tmp.ptr;


    return result;
}

#endif
