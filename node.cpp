#include "node.h"

void INode::AddChild(INode* child) {
    children.push_back(child);
}
