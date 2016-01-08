/*
 * Node.h
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#ifndef NODE_H_
#define NODE_H_
#include <string>
class Node {

public:
	Node(std::string name);
	virtual ~Node();
	void addChild(Node* child);
private:
	std::string _name;
	Node* _first;
	Node* _last;
	Node* _next;
	int _depth;
	friend class Tree;
};

#endif /* NODE_H_ */
