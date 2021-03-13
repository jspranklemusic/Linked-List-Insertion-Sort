#include <iostream>
#include <vector>

//insertion sort
std::vector<int> sortNumsAscending(std::vector<int> arr) {
	int i = 1;
	while( i < arr.size()){
		int j = i;
			while( j > 0 and arr[j-1] > arr[j]){
				int swap = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = swap;
					j--;
			}
			i++;
	};

  
	return arr;
};

//linked list
struct node{
   //this stores the value of the list item
   int data;

   //this stores the memory location of a node
   node* next;
 };


 void traverse(node* head){
   node* p = head;
   while(p!=NULL){
     std::cout<< p->data;
     p = p->next;
   };
 };

 node* insertNodeAtStart(int value, node*head){
   node*n = new node();
   n->data = value;

   n->next=head;
   head=n;
   std::cout<<head->data<<std::endl;
   return head;
 };

 void insert_position(int pos, int value, node*head)
  {
    node *pre=new node;
    node *cur=new node;
    node *temp=new node;
    cur=head;
    for(int i=1;i<pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;	
    temp->next=cur;
  };


  void appendNode(int value, node*tail){
    node* n = new node();
   n->data = value;
   tail->next=n;
   tail = tail->next;
   n->next = NULL;
  };


int main() {

 

 //this is a pointer to a node
 node* n;
 //this is a pointer to a tail node
 node* t;
 //this is a pointer to a head node
 node* h;

//n points to a newly created node
 n = new node();



 n->data=1;

//this makes 't' point to the same place as n points to.
 t=n; h=n;

//AGAIN, we are changing what n is pointing to.
 n = new node();
 n->data = 2;
   t->next=n;
   t = t->next;
	
  n = new node();
   n->data = 3;
   t->next=n;
   t = t->next;
    n = new node();
   n->data = 4;
   t->next=n;
   t = t->next;
   n->next = NULL;

  
  appendNode(9,t);
  h = insertNodeAtStart(9,h);
  traverse(h);
  insert_position(3, 222, h);
  traverse(h);
 

  return 0;
}
