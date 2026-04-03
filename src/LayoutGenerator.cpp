#include "../include/LayoutGenerator.hpp"

void LayoutGenerator::generateLayout(EditorLayer* editor, float length) {

    float x = 0;

    while (x < length) {

        int section = rand() % 3;

        if (section == 0) cubeSection(editor, x);
        if (section == 1) shipSection(editor, x);
        if (section == 2) waveSection(editor, x);
    }
}

void LayoutGenerator::cubeSection(EditorLayer* editor, float& x) {

    for (int i = 0; i < 10; i++) {

        auto block = GameObject::createWithKey(1);
        block->setPosition({x,120});

        editor->addObject(block);

        if (rand() % 3 == 0) {

            auto spike = GameObject::createWithKey(8);
            spike->setPosition({x,150});

            editor->addObject(spike);
        }

        x += 30;
    }
}

void LayoutGenerator::shipSection(EditorLayer* editor, float& x) {

    for (int i = 0; i < 15; i++) {

        auto top = GameObject::createWithKey(1);
        top->setPosition({x,220});

        editor->addObject(top);

        auto bottom = GameObject::createWithKey(1);
        bottom->setPosition({x,80});

        editor->addObject(bottom);

        x += 30;
    }
}

void LayoutGenerator::waveSection(EditorLayer* editor, float& x) {

    for (int i = 0; i < 12; i++) {

        auto spike = GameObject::createWithKey(8);

        spike->setPosition({x, 120 + rand() % 80});

        editor->addObject(spike);

        x += 30;
    }
}
