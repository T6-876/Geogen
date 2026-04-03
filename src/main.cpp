#include <Geode/Geode.hpp>
#include <Geode/modify/EditorLayer.hpp>

using namespace geode::prelude;

class $modify(AutoGenEditor, EditorLayer) {

    bool init(LevelEditorLayer* editor) {
        if (!EditorLayer::init(editor)) return false;

        generateLevel();

        return true;
    }

    void generateLevel() {

        float x = 0.0f;

        for (int i = 0; i < 150; i++) {

            // create block
            auto block = GameObject::createWithKey(1);
            block->setPosition({x, 120});
            this->addObject(block);

            // randomly place spikes
            if (rand() % 4 == 0) {
                auto spike = GameObject::createWithKey(8);
                spike->setPosition({x, 150});
                this->addObject(spike);
            }

            x += 30.0f;
        }
    }
};
