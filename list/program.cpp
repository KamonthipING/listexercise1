#include <iostream>
#include "list.h"
using namespace std;

void main()
{
	//Sample Code
	List mylist;
	mylist.pushToHead('i');
	mylist.pushToHead('i');
	mylist.pushToHead('n');
	mylist.pushToHead('g');
	mylist.pushToHead('g');
	mylist.popHead();
	mylist.popTail();
	mylist.reverse();
	mylist.print();
	cout << endl;
	mylist.search('n');

	//TO DO! Write a program that tests your list library - the code should take characters, push them onto a list, 
	//- then reverse the list to see if it is a palindrome!
	
}
