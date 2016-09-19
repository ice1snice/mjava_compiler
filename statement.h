#pragma once

#include "node.h"

class IStatement: public INode {
public:
    virtual void Accept(IVisitor* v) = 0;
};
