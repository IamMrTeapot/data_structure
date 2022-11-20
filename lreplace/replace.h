void replace(const T& x, list<T>& y) {
  //write your code here
    auto it = begin();
    if(y.mSize==0){
        while(it!=end()){
            if (*it==x){
                it = erase(it);
            }else {
                ++it;
            }
            return;
        }
    }
    while (it!=end()){
        if(*it == x){
            list<T> tmp(y);
            node* old = it.ptr;
            node* next = it.ptr->next;
            node* before = it.ptr->prev;
            node* first = tmp.mHeader->next;
            node* last = tmp.mHeader->prev;

            before->next = first;
            first->prev =before;
            next->prev = last;
            last->next = next;
            mSize += (y.mSize -1);

            it.ptr = next;
            tmp.mHeader->next=tmp.mHeader;
            tmp.mHeader->prev=tmp.mHeader;
            tmp.mSize=0;
            delete old;


        } else {
            ++it;
        }
    }
}
