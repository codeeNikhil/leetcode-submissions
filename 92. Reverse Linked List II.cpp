class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     int count=0;
       
        ListNode *pre=NULL;
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
         ListNode*temp=dummy;
        while(count!=left){
            if(temp->next!=NULL){
            pre=temp;
                temp=temp->next;
                
            }else{
                break;
            }
            count++;
        }
        
        ListNode* prevs=pre;
        ListNode* lastjoin=temp;
        ListNode* forward=NULL;
        for(int i=left;i<=right;i++){
            forward=temp->next;
            temp->next=pre;
            pre=temp;
            temp=forward;
        }
        prevs->next=pre;
        lastjoin->next=temp;
        
        
        return dummy->next;
    }
};