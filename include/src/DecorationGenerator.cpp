#include "../include/DecorationGenerator.hpp"

void DecorationGenerator::decorate(EditorLayer* editor) {

    for (int i = 0; i < 200; i++) {

        float x = rand() % 4000;
        float y = rand() % 300;

        auto glow = GameObject::createWithKey(744);

        glow->setPosition({x,y});
        glow->setScale(1.2);

        editor->addObject(glow);
    }
}
