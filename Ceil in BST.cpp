int findCeil(Node* root, int key) {
   int ceil = -1;
        while(root != NULL){
            if(root->data == key){
                ceil = root->data;
                return ceil;
            }
            if(key > root->data) root = root->right;
            else{
                ceil = root->data;
                root = root->left;
            }
        }
        return ceil;
