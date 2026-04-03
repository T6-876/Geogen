#include "../include/SongSyncGenerator.hpp"

void SongSyncGenerator::addBeatTriggers(EditorLayer* editor, float levelLength) {

    for (int i = 0; i < levelLength; i += 240) {

        auto trigger = GameObject::createWithKey(901);

        trigger->setPosition({(float)i, 300});

        editor->addObject(trigger);
    }
}
