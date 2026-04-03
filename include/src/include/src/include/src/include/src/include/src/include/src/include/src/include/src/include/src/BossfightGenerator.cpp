#include "../include/BossfightGenerator.hpp"

void BossfightGenerator::generateBoss(EditorLayer* editor, float x) {

    bossBody(editor, x);

    attackPattern(editor, x);
}

void BossfightGenerator::bossBody(EditorLayer* editor, float x) {

    for (int i = 0; i < 6; i++) {

        auto block = GameObject::createWithKey(1);

        block->setPosition({x + i * 30, 200});

        editor->addObject(block);
    }
}

void BossfightGenerator::attackPattern(EditorLayer* editor, float x) {

    for (int i = 0; i < 10; i++) {

        auto spike = GameObject::createWithKey(8);

        spike->setPosition({x + i * 60, 150});

        editor->addObject(spike);
    }
}
