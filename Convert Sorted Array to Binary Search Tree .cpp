public:
    TreeNode* createBST(int a[],int start,int end){
        if(start>end){
            return NULL;
        }
        int mid = (start+end)/2;
        TreeNode* tree = new TreeNode(a[mid]);
        tree->left = createBST(a,start,mid-1);
        tree->right = createBST(a,mid+1,end);
        return tree;
    }
};
