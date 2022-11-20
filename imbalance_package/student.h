// Your code here
int abs(int a){
    if(a<0){
        a=-a;
    }
    return a;
}

int getHeight(node* n){
    if (n==NULL) {
        return -1;
    }
    return 1+std::max(getHeight(n->left),getHeight(n->right));
}


void getImbalance(node* n,int &imb ,KeyT &ans){
    if(n==NULL){
        return;
    }
    getImbalance(n->left,imb,ans);
    getImbalance(n->right,imb,ans);
    int diff = abs(getHeight(n->left)-getHeight(n->right));


    if (diff>imb){
        imb=diff;
        ans=n->data.first;
    } else if (diff==imb){
        if(mLess(n->data.first,ans)){
            ans = n->data.first;
        }
    }


}



KeyT getValueOfMostImbalanceNode() {
    // Your code here
    int imb =0;
    KeyT ans = mRoot->data.first;
    getImbalance(mRoot,imb,ans);
    return ans;
}
