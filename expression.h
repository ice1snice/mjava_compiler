#pragma once

#include "node.h"

class IExpression: public INode {
public:
    virtual void Accept(IVisitor* v) = 0;
};
