#include "id_expression.h"

void IdExpression::Accept(IVisitor* v) {
    v->Visit(this);
}

std::string IdExpression::GetId() const {
    return id;
}
