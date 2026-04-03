#include "../include/TriggerAutomation.hpp"

void TriggerAutomation::generateTriggers(EditorLayer* editor, float levelLength) {

    for (int i = 0; i < levelLength; i += 300) {

        int type = rand() % 3;

        if (type == 0) addMoveTrigger(editor, i);
        if (type == 1) addPulseTrigger(editor, i);
        if (type == 2) addColorTrigger(editor, i);

    }
}

void TriggerAutomation::addMoveTrigger(EditorLayer* editor, float x) {

    auto trigger = GameObject::createWithKey(901);

    trigger->setPosition({x, 260});

    editor->addObject(trigger);
}

void TriggerAutomation::addPulseTrigger(EditorLayer* editor, float x) {

    auto trigger = GameObject::createWithKey(1006);

    trigger->setPosition({x, 260});

    editor->addObject(trigger);
}

void TriggerAutomation::addColorTrigger(EditorLayer* editor, float x) {

    auto trigger = GameObject::createWithKey(899);

    trigger->setPosition({x, 260});

    editor->addObject(trigger);
}
