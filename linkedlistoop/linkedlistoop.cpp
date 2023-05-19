#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
	int noMhs;
	char nama[20];
	Node* next;
};

class list
{
	Node* START;
public:
	list();
	void addNote();
	bool Search(int nim, Node** current, Node** previous);
	bool listEmpty();
	bool delNote(int element);
	void traverse();
};

list::list()
{
	START = NULL;
}
void list::addNote() 
{

}