#pragma once

#include "statement.h"

class CompoundStatement: public IStatement {
public:
    void Accept(IVisitor* v);
};
