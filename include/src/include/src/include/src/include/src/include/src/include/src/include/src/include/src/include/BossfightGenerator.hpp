#pragma once

#include <Geode/Geode.hpp>

using namespace geode::prelude;

class BossfightGenerator {

public:

    void generateBoss(EditorLayer* editor, float x);

private:

    void bossBody(EditorLayer* editor, float x);
    void attackPattern(EditorLayer* editor, float x);

};
