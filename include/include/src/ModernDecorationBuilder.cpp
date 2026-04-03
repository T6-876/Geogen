#include "../include/ModernDecorationBuilder.hpp"

void ModernDecorationBuilder::build(EditorLayer* editor, float levelLength) {

    for (int i = 0; i < levelLength; i += 120) {

        auto glow = GameObject::createWithKey(744);

        glow->setPosition({(float)i, 250});
        glow->setScale(1.2);

        editor->addObject(glow);

        auto deco = GameObject::createWithKey(1753);

        deco->setPosition({(float)i, 220});

        editor->addObject(deco);
    }
}
