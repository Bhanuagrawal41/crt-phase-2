
class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        
        Node *temp = head;
        while (temp != nullptr)
        {
            if (temp -> data == key){
                return true;
            }
            temp = temp->next;
           
        }
         return false;
    }
};

class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head == NULL)
        return NULL;
        else if(head -> next == NULL){
            delete head;
            head = NULL;
            
        }
        else{
        Node *temp = head;
        while(temp -> next -> next != NULL){
            temp = temp -> next;
        }
        
        delete(temp -> next);
        temp -> next = NULL;
        
        return head;
        }
    }
};
