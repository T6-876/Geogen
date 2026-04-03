#include "../include/WaveGameplayGenerator.hpp"

void WaveGameplayGenerator::generate(EditorLayer* editor, float startX) {

    float x = startX;

    for (int i = 0; i < 40; i++) {

        auto spike = GameObject::createWithKey(8);

        float y = 100 + (rand() % 120);

        spike->setPosition({x, y});

        editor->addObject(spike);

        x += 40;
    }
}
