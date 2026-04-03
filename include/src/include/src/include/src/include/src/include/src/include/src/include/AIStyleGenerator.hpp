#pragma once

#include <Geode/Geode.hpp>
#include <string>

using namespace geode::prelude;

class AIStyleGenerator {

public:

    void applyStyle(EditorLayer* editor, std::string styleName);

private:

    void glowStyle(EditorLayer* editor);
    void techStyle(EditorLayer* editor);
    void minimalStyle(EditorLayer* editor);

};
