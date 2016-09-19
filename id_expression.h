#pragma once

#include <string>

#include "expression.h"

class IdExpression: public IExpression {
public:
    void IdExpression(std::string id): id(id) {
    }
    void Accept(IVisitor* v);
    std::string GetId() const;
private:
    std::string id;
};
