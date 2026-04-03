#pragma once

#include <Geode/Geode.hpp>

using namespace geode::prelude;

class StructureGenerator {

public:

    void generateStructures(EditorLayer* editor, float length);

private:

    void pillar(EditorLayer* editor, float x);
    void staircase(EditorLayer* editor, float x);
    void floatingIsland(EditorLayer* editor, float x);

};
