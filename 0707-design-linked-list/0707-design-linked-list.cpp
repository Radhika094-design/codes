class MyLinkedList {
public:
struct ListNode{
    int val;
    ListNode* next ;
    ListNode(int x): val(x),next(nullptr){}
};
ListNode* head;
int size;

    MyLinkedList() {
      head= nullptr;
      size = 0;  
    }
    
    int get(int index) {
        if(index<0||index>=size)return -1 ;//size check
        ListNode* temp = head;
        for(int i = 0;i<index;i++){
            temp = temp->next;//till reach at end of list
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
       ListNode* newnode = new ListNode(val);//newnode which contain value to insert
       newnode->next = head;//newnode is joined but head pointing prev node
       head = newnode;//now newnode point to head
       size++; 
    }
    
    void addAtTail(int val) {
       ListNode* newnode = new ListNode(val);
        if(head==nullptr){ // if ll is empty
            head = newnode;
        }else{
            ListNode* temp = head;
            while(temp->next!=nullptr){ // till reach at end 
                temp=temp->next;
            }
            temp->next= newnode;//in place of null add node 
        }
            size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0||index>size) return ;// if index is valid 
        if(index==0){
            addAtHead(val); //frst func of add at head
            return;
        }
        ListNode* newnode = new ListNode(val);
        ListNode* temp = head;
        for(int i = 0;i<index- 1; i++){
            temp = temp->next;
        }
        newnode->next= temp->next;
        temp->next = newnode;
        size++;
    }
    
    void deleteAtIndex(int index) {
         if(index<0||index>=size)return ;// if index is valid 
         if (index == 0) {
            ListNode* deleting = head;
            head = head->next;
            delete deleting;
        } else {
            ListNode* temp = head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            ListNode* deleting = temp->next;
            temp->next = temp->next->next;
            delete deleting;
        }
        size--; 
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */