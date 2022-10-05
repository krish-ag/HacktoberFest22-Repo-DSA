#include<iostream>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
    
}

void postorder(Node* root){	 	  	 	 		   	    	  	    	     	 	
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* insertinBST(Node* root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }

    if(root->data>val){
        root->left=insertinBST(root->left,val);
    }

    else if(root->data<val){
        root->right=insertinBST(root->right,val);
    }
    return root;
}

void takeinput(Node* &root){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        root=insertinBST(root,data);
    }
    
}

void searchinBST(Node* root,int val){	 	  	 	 		   	    	  	    	     	 	
    Node* temp=root;
    int flag=0;

    while(temp!=NULL){

        if(temp->data==val){
            cout<<val<<endl;
            flag=1;
            return;
        }

        if(temp->data<val){
            temp=temp->right;
        }

        if(temp->data>val){
            temp=temp->left;
        }
    
    }
    
    if(flag==0){
        cout<<"-1"<<endl;
    }
}

Node* Maxval(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

Node* Minval(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){	 	  	 	 		   	    	  	    	     	 	
        temp=temp->left;
    }
    return temp;
}

Node* deleteinBST(Node* root,int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini=Minval(root->right)->data;
            root->data=mini;
            root->right=deleteinBST(root->right,mini);
            return root;
        }
    }

    else if(root->data>val){
        root->left=deleteinBST(root->left,val);
        return root;
    }	 	  	 	 		   	    	  	    	     	 	
    else{
        root->right=deleteinBST(root->right,val);
        return root;
    }
}

int main(){
    Node* root=NULL;
    int input=0;
    
    while(input!=9){
        cin>>input;
        int n;
        if(input==1){
            takeinput(root);
        }
        
        if(input==2){
            int key;
            cin>>key;
            searchinBST(root,key);
        }
        
        if(input==3){
            inorder(root);
            cout<<endl;
        }
        if(input==4){
            preorder(root);
            cout<<endl;
        }
        if(input==5){
            postorder(root);
            cout<<endl;
        }
        if(input==6){	 	  	 	 		   	    	  	    	     	 	
            cout<<Minval(root)->data<<endl;
        }
        if(input==7){
            cout<<Maxval(root)->data<<endl;
        }
        if(input==8){
            int x;
            cin>>x;
            deleteinBST(root,x);
            inorder(root);
            cout<<endl;
        }
        
    }
    
}