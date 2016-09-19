#pragma once

#include "expression.h"

enum class OperatorType {PLUS, MINUS, MULTIPLY};

class OpExpression: public IExpression {
public:
    void OpExpression(OperatorType op): op(op) {
    }
    void Accept(IVisitor* v);
    OperatorType GetOp() const;
private:
    OperatorType op;
};
