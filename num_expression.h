#pragma once

#include "expression.h"

class NumExpression: public IExpression {
public:
    void NumExpression(int value): value(value) {
    }
    void Accept(IVisitor* v);
    int GetValue() const;
private:
    int value;
};
