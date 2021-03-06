#pragma once

#include "Player.hpp"
#include "Room.hpp"
#include "Vec2.hpp"
#include "Follower.hpp"

class Key : public Object {
public:
    Key(const Vec2<double>& pos);
    void step() override;
};