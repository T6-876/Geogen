#include "../include/AILayoutLearning.hpp"

void AILayoutLearning::loadPatterns() {

    patterns.push_back({0, 8});   // cube jumps
    patterns.push_back({1, 12});  // ship corridor
    patterns.push_back({2, 10});  // wave zigzag
}

void AILayoutLearning::generateFromAI(EditorLayer* editor, float& x) {

    if (patterns.empty())
        loadPatterns();

    int index = rand() % patterns.size();

    LayoutPattern pattern = patterns[index];

    if (pattern.type == 0) {

        for (int i = 0; i < pattern.length; i++) {

            auto block = GameObject::createWithKey(1);

            block->setPosition({x, 120});

            editor->addObject(block);

            if (rand() % 3 == 0) {

                auto spike = GameObject::createWithKey(8);

                spike->setPosition({x, 150});

                editor->addObject(spike);
            }

            x += 30;
        }
    }

    if (pattern.type == 1) {

        for (int i = 0; i < pattern.length; i++) {

            auto top = GameObject::createWithKey(1);

            top->setPosition({x, 220});

            editor->addObject(top);

            auto bottom = GameObject::createWithKey(1);

            bottom->setPosition({x, 80});

            editor->addObject(bottom);

            x += 30;
        }
    }

    if (pattern.type == 2) {

        for (int i = 0; i < pattern.length; i++) {

            auto spike = GameObject::createWithKey(8);

            spike->setPosition({x, 120 + rand() % 80});

            editor->addObject(spike);

            x += 30;
        }
    }
}
