/*
 * Tree.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Tree.h"


Tree::~Tree() {
	// TODO Auto-generated destructor stub
}

Tree::Tree(Node *root) : _root(root)
{
}

void Tree::traverse(Node *node)
{
	cout << node -> _name << endl;
	Node* i = node -> _first;
	while(i != NULL)
	{
		traverse(i);
		i = i -> _next();
	}
}



void Tree::traverse()
{
	traverse(_root);
}


