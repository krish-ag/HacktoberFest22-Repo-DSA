import java.util.Stack;
 
class Node{
    char data;
    Node left,right;
    public Node(char data){
        this.data = data;
        left = right = null;
    }
}
 
public class Main {
    public static boolean isOperator(char ch){
        if(ch=='+' || ch=='-'|| ch=='*' || ch=='/' || ch=='^'){
            return true;
        }
        return false;
    }
    public static Node expressionTree(String postfix){
        Stack<Node> st = new Stack<Node>();
        Node t1,t2,temp;
 
        for(int i=0;i<postfix.length();i++){
            if(!isOperator(postfix.charAt(i))){
                temp = new Node(postfix.charAt(i));
                st.push(temp);
            }
            else{
                temp = new Node(postfix.charAt(i));
 
                t1 = st.pop();
                t2 = st.pop();
 
                temp.left = t2;
                temp.right = t1;
 
                st.push(temp);
            }
 
        }
        temp = st.pop();
        return temp;
    }
    public static void inorder(Node root){
        if(root==null) return;
 
        inorder(root.left);
        System.out.print(root.data);
        inorder(root.right);
    }
    public static void main(String[] args) {
        String postfix = "ABC*+D/";
 
        Node r = expressionTree(postfix);
        inorder(r);
    }
}
