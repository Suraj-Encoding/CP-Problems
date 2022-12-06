// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//          ListNode *temp,*current,*nextnode,*prevnode,*l;
//          prevnode = nullptr;
//          nextnode = current = l1;
//          while(nextnode!=nullptr)
//          {    
//              nextnode = nextnode->next;
//              current->next = prevnode;
//              prevnode = current;
//              current = nextnode;
//          }
//          l1 = prevnode;

//          prevnode = nullptr;
//          nextnode = current = l2;
//          while(nextnode!=nullptr)
//          {    
//              nextnode = nextnode->next;
//              current->next = prevnode;
//              prevnode = current;
//              current = nextnode;
//          }
//          l2 = prevnode;
         
//          current = l1;
//          nextnode = l2;
//          prevnode = nullptr;
//          l = temp =  nullptr;
//          int val,rem=0,carry=0;
//          while(current!=nullptr || nextnode !=nullptr)
//          {
//              prevnode = new struct ListNode;
//              prevnode->next = nullptr;
//              val = current->val + nextnode->val+carry;
//              if(val>=10)
//              {
//                 rem = val%10;
//                 prevnode->val = rem;
//                 carry = val/10;
//              }
//              else
//              { 
//                  prevnode->val = val;
//              }
//              if(l == nullptr)
//              {
//                  l = temp = prevnode;
//              }
//              else
//              {
//                  temp->next = prevnode;
//                  temp = temp->next;
//              }

//           }
          
//          prevnode = nullptr;
//          nextnode = current = l;
//          while(nextnode!=nullptr)
//          {    
//              nextnode = nextnode->next;
//              current->next = prevnode;
//              prevnode = current;
//              current = nextnode;
//          }
//          l = prevnode;
//          return l;
//     }
// };