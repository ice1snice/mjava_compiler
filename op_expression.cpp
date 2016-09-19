#include "op_expression.h"

void OpExpression::Accept(IVisitor* v) {
    v->Visit(this);
}

OperatorType OpExpression::GetValue() const {
    return op;
}
