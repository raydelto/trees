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
#include "Tree.h"
#include <iostream>
using namespace std;

int main()
{
	Node* gp = new Node("Grand Pa");
	Node* father = new Node("Father");
	Node* uncle = new Node("Uncle");
	Node* aunt = new Node("Aunt");
	Node* you = new Node("You");
	Node* mitch = new Node("Mitch");
	Node* cousin = new Node("Cousin");
	Node* logan = new Node("Logan");
	Node* jules = new Node("Jules");
	gp->addChild(father);
	gp->addChild(uncle);
	gp->addChild(aunt);
	father->addChild(you);
	father->addChild(mitch);
	mitch->addChild(logan);
	mitch->addChild(jules);
	uncle->addChild(cousin);
	Tree* tree = new Tree(gp);
	tree -> traverse();


}

