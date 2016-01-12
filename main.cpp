/*
 * main.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

/*
 *
 * 0                  |Grand Pa|

1 |Father|                           |Uncle|            |Aunt|

2 |You|     |Mitch|                      |Cousin|

3          |Logan|  |Jules|

 *
 */
//This includes the header file for the tree class within the main
#include "Tree.h"
//This includes the iostream needed so that my main function here knows how to deal with input and output
#include <iostream>
//This includes the namespace needed so that my program classes know what to use
using namespace std;

//The main method that will process what we actually want this program to do
int main()
{
	//The nodes all created and assigned their values n such that they need
	Node* kristian = new Node("kristian");
	Node* kristian1 = new Node("kristian1");
	Node* kristian2 = new Node("kristian2");
	Node* kristian3 = new Node("kristian3");
	Node* kristian21 = new Node("kristian2.1");
	Node* kristian22 = new Node("kristian2.2");
	Node* kristian31 = new Node("kristian3.1");
	Node* kristian32 = new Node("kristian3.2");
	Node* kristian33 = new Node("kristian3.3");
	//Node list is completed (look at the node class is I need more information on how this will compile and run)

	//This will actually call the Node class as well to call up the constructor for the addChild() function
	kristian->addChild(kristian1);
	kristian->addChild(kristian2);
	kristian->addChild(kristian3);

	kristian2->addChild(kristian21);
	kristian2->addChild(kristian22);

	kristian3->addChild(kristian31);
	kristian3->addChild(kristian32);

	kristian3->addChild(kristian33);
	//Children to the elements are all assigned using the placeholder name also known as the variable name
	Tree* tree = new Tree(kristian);
	tree -> traverse();


}

