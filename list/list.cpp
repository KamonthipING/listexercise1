#include <iostream>
#include "list.h"
using namespace std;

//Destructor
List::~List() {
	for(Node *p; !isEmpty(); ) {
		p=head->next;
		delete head;
		head = p;
	}
}

void List::pushToHead(char el)
{
	head = new Node(el, head);
	if(tail==0)
	{
		tail = head;
	}
}
void List::pushToTail(char add_tail)
{
	//TO DO!
	Node* p = new Node(add_tail);
	if (head == NULL) {
		head = p;
		tail = p;
	}
	else {
		tail->next = p;
		tail = p;
	}
}
char List::popHead()
{
	char el = head->data;
	Node *tmp = head;
	if(head == tail)
	{
		head = tail = 0;
	}
	else
	{
		head = head->next;
	}
	delete tmp;
	return el;
}
char List::popTail()
{
	// TO DO!
	Node* p = head;
	while (p->next != tail) {
		p = p->next;
	}
	delete tail;
	p->next = 0;
	tail = p;
	return 0;
}
bool List::search(char el)
{
	// TO DO! (Function to return True or False depending if a character is in the list.
	Node* p = head;
	while (p->next != NULL) {
		if (p->data == el) {
			cout << "True" << endl;
			return true;
		}
		else {
			p = p->next;
		}
	}
	cout << "False" << endl;
	return false;
}
void List::reverse()
{
	// TO DO! (Function is to reverse the order of elements in the list.
		List rev;
	for (Node* p = head; p != 0; p = p->next)
	{
		char el = p->data;
		rev.pushToHead(el);
	}
	rev.print();
}
void List::print()
{
	if(head  == tail)
	{
		cout << head->data;
	}
	else
	{
		Node *tmp = head;
		while(tmp!=tail)
		{
			cout << tmp->data;
			tmp = tmp->next;
		}
		cout << tmp->data;
	}
}
