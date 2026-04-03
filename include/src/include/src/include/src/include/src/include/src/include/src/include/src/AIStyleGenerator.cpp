#include "../include/AIStyleGenerator.hpp"

void AIStyleGenerator::applyStyle(EditorLayer* editor, std::string styleName) {

    if (styleName == "glow")
        glowStyle(editor);

    if (styleName == "tech")
        techStyle(editor);

    if (styleName == "minimal")
        minimalStyle(editor);
}

void AIStyleGenerator::glowStyle(EditorLayer* editor) {

    for (int i = 0; i < 200; i++) {

        auto glow = GameObject::createWithKey(744);

        glow->setPosition({(float)(rand()%4000), (float)(rand()%300)});
        glow->setScale(1.5);

        editor->addObject(glow);
    }
}

void AIStyleGenerator::techStyle(EditorLayer* editor) {

    for (int i = 0; i < 100; i++) {

        auto deco = GameObject::createWithKey(1753);

        deco->setPosition({(float)(rand()%4000), (float)(rand()%300)});

        editor->addObject(deco);
    }
}

void AIStyleGenerator::minimalStyle(EditorLayer* editor) {

    for (int i = 0; i < 80; i++) {

        auto block = GameObject::createWithKey(1);

        block->setPosition({(float)(rand()%4000), (float)(rand()%200)});

        editor->addObject(block);
    }
}
