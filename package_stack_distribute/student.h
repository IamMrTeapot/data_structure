#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
    int ssize,countt,round,run;
    ssize = size()/k;
    countt = size()%k;
    std::vector<std::vector<T>> done;
    run = mSize-1;


    for (int i =0;i<k;i++){
        std::vector<T> temp;
        round = ssize;
        if(countt>0){
            round+=1;
        }
        for (int j=0;j<round;j++){
            temp.push_back(mData[run--]);
        }

        done.push_back(temp);
        countt--;
    }
    return done;
}
#endif
