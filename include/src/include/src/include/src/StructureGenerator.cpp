#include "../include/StructureGenerator.hpp"

void StructureGenerator::generateStructures(EditorLayer* editor, float length) {

    for (int i = 0; i < length; i += 300) {

        int type = rand() % 3;

        if (type == 0) pillar(editor, i);
        if (type == 1) staircase(editor, i);
        if (type == 2) floatingIsland(editor, i);

    }
}

void StructureGenerator::pillar(EditorLayer* editor, float x) {

    for (int y = 80; y < 200; y += 30) {

        auto block = GameObject::createWithKey(1);
        block->setPosition({x, (float)y});

        editor->addObject(block);
    }
}

void StructureGenerator::staircase(EditorLayer* editor, float x) {

    float y = 120;

    for (int i = 0; i < 6; i++) {

        auto block = GameObject::createWithKey(1);

        block->setPosition({x + i * 30, y + i * 30});

        editor->addObject(block);
    }
}

void StructureGenerator::floatingIsland(EditorLayer* editor, float x) {

    for (int i = 0; i < 4; i++) {

        auto block = GameObject::createWithKey(1);

        block->setPosition({x + i * 30, 200});

        editor->addObject(block);
    }
}
