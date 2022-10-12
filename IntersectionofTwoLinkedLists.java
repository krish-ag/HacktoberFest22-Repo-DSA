public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        
        int lenA = lengthOfLL(headA);
        int lenB = lengthOfLL(headB);
        
		// Difference between length of both LL
        int x = lenA > lenB ? (lenA-lenB) : (lenB-lenA);
        
        // Skip initial x nodes of bigger LL
        if(lenA > lenB){
            while(x !=0 ){
                headA = headA.next;
                x--;
            }
        }else{
            while(x !=0 ){
                headB = headB.next;
                x--;
            }
        }
        
        // traverse in both LL till u not get intersecton point
        while(true){
            
            if(headA == headB){
                return headA;
            }
            headA = headA.next;
            headB = headB.next;
        }
    }
    
    private int lengthOfLL(ListNode head){
        
        if(head == null){
            return 0;
        }
        
        return 1 + lengthOfLL(head.next);
    }
}
