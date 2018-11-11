#include<iostream>

using namespace std;

struct ListNode{
    int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

ListNode* insertionSortList(ListNode* head) {
        ListNode* curr = head, *prev = head, *tmp = head, *prev_iter = head;
        ListNode* iter = NULL;
        while(curr != NULL){
            if(curr == head){
                curr = curr->next;
                continue;
            }
            iter = curr;
            tmp = head;
            prev = head;
            while(tmp != iter){
                if(iter->val >= tmp->val){
                    prev = tmp;
                    tmp = tmp->next;
                    continue;
		} else{
	            if(tmp == head){
                        prev_iter->next = iter->next;
                        iter->next = head;
			head = iter;
		    } else{
			  prev_iter->next = iter->next; 
			  prev->next = iter;
                          iter->next = tmp;
		    }
		    break;
		}
            }
	    prev_iter = curr;
            curr = curr->next;
        }
        return head;
}

int main(){
       ListNode* head = new ListNode(4);
       ListNode* temp = head;
       for(int i = 0;i<4;i++){
           int x;
           cout << "enter inps" << endl;
           cin >> x; 
           ListNode* curr = new ListNode(x);
           temp->next = curr;
	   temp = curr;
       }

       temp = head;
       cout << "printing lklist:" << endl;
       while(temp != NULL){
            cout << temp->val << endl;
	    temp = temp->next;
       }

       temp = insertionSortList(head);
       //temp = head;
       cout << "printing sorted lklist :" << endl;
       while(temp != NULL){
            cout << temp->val << endl;
	    temp = temp->next;
       }

       return 0;
}
