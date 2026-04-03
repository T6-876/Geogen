#pragma once

#include <Geode/Geode.hpp>
#include <vector>

using namespace geode::prelude;

struct LayoutPattern {

    int type;
    int length;

};

class AILayoutLearning {

public:

    void loadPatterns();
    void generateFromAI(EditorLayer* editor, float& x);

private:

    std::vector<LayoutPattern> patterns;

};
