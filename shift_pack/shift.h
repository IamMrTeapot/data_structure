void shift(int k) {
	// TODO: Add your code here
	if(mSize==0 || mSize==1){
        return;
    }
    int sizee = (int) mSize;


	k=k%sizee;

    if(k<0){
        k+=sizee;
    }
    if(k==0 || mSize==k){

        return;
    }


    node* LF = mHeader->next;
    node* RL = mHeader->prev;
    node* LL = mHeader;
    for(int i = 0 ;i<k;i++){
        LL=LL->next;
    }
    node* RF = LL->next;

    mHeader->next = RF;
    RF->prev = mHeader;

    mHeader->prev = LL;
    LL->next = mHeader;

    LF->prev = RL;
    RL->next = LF;
    return;


}
