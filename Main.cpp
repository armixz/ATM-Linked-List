#include<iostream>
#include "Node.h"

using namespace std;

int main() {

	list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	
	obj.display();
	obj.createnode(55);
	obj.display();
	obj.insert_start(50);
	obj.display();
	obj.insert_position(5, 60);
	obj.display();
	obj.delete_first();
	obj.display();
	obj.delete_last();
	obj.display();
	obj.delete_position(4);
	obj.display();

	system("pause");

	return 0;
}