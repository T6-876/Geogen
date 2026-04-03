#pragma once

#include <Geode/Geode.hpp>

using namespace geode::prelude;

class TriggerAutomation {

public:

    void generateTriggers(EditorLayer* editor, float levelLength);

private:

    void addMoveTrigger(EditorLayer* editor, float x);
    void addPulseTrigger(EditorLayer* editor, float x);
    void addColorTrigger(EditorLayer* editor, float x);

};
