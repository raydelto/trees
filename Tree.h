/*
 * Tree.h
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#ifndef TREE_H_
#define TREE_H_
#include "Node.h"
class Tree {
public:
	Tree(Node* root);
	virtual ~Tree();
	void traverse();
	void traverse(Node* node);
private:
	Node* _root;
};

#endif /* TREE_H_ */
