#include<iostream>
using namespace std;
class Node{
public:
int data;
Node * next;
};
class LinkedList{
private:
Node* first;
Node * last;
public:
LinkedList(){
first = NULL;
last = NULL;
}
void addItem(int d);
void display();
void displayReverse();
};
void LinkedList::addItem(int d){
Node * newLink = new Node;
newLink->data = d;
newLink->next = first;
first = newLink;
}
void LinkedList::display(){
Node * current = first;
while(current != NULL){
cout<<current->data<<endl;
current = current->next;
}
}
int main(){
LinkedList l;
l.addItem(1);
l.addItem(2);
l.addItem(3);
l.addItem(4);
l.addItem(5);
l.display();
}
