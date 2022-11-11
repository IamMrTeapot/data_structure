void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    int half = (mSize+1)/2;

    node *mid = mHeader;
    for(int i =0 ; i<half ;i++){
        mid = mid->next;
    }

    node *last1 = list1.mHeader->prev;
    node *last2 = list2.mHeader->prev;
    node *first = mHeader->next;
    node *last = mHeader->prev;
    node *midnext = mid->next;


    last2->next = midnext;
    midnext->prev = last2;

    list2.mHeader->prev = last;
    last->next = list2.mHeader;
    list2.mSize += (mSize-half);



    last1->next = first;
    first->prev = last1;

    list1.mHeader->prev = mid;
    mid->next = list1.mHeader;
    list1.mSize+=half;


    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize=0;

}
