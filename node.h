#pragma once

#include <vector>

#include "visitor.h"

class INode {
public:
    INode() {
    }

    ~INode() {
        for (auto child : children) {
            delete child;
        }
        children.clear();
    }

    void AddChild(INode* child);
    virtual void Accept(IVisitor* v) = 0;

private:
    std::vector<INode*> children;
};
