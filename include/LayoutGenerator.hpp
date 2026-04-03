#pragma once

#include <Geode/Geode.hpp>

using namespace geode::prelude;

class LayoutGenerator {

public:
    void generateLayout(EditorLayer* editor, float length);

private:
    void cubeSection(EditorLayer* editor, float& x);
    void shipSection(EditorLayer* editor, float& x);
    void waveSection(EditorLayer* editor, float& x);

};
