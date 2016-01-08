/*
 * Tree.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Tree.h"
#include <iostream>

using namespace std;


Tree::~Tree() {
	// TODO Auto-generated destructor stub
}

Tree::Tree(Node *root) : _root(root)
{
}

void Tree::traverse(Node *node)
{
	for(int i = 0 ; i < node -> _depth ; i++)
	{
		cout << "\t";
	}
	cout << node -> _name << endl;
	Node* i = node -> _first;
	while(i != NULL)
	{
		traverse(i);
		i = i -> _next;
	}
}



void Tree::traverse()
{
	traverse(_root);
}


