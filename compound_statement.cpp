#include "compound_statement.h"

void CompoundStatement::Accept(IVisitor* v) {
    v->Visit(this);
}
