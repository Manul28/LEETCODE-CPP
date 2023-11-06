class Solution{
public:
      ListNode* deleteDuplicates(ListNode* head){
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        
        ListNode* ans=head;
        while(ans && ans->next){
         if(ans->val==ans->next->val) 
            ans->next=ans->next->next;
        else
           ans=ans->next;
        }
        return ans;
      }  
// retu
};
