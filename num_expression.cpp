#include "num_expression.h"

void NumExpression::Accept(IVisitor* v) {
    v->Visit(this);
}

int NumExpression::GetValue() const {
    return value;
}
