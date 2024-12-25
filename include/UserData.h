#pragma once

enum class UserDataType {
    PLAYER = 0,
    GROUND = 1,
    BOSS = 2,
    SKELETON = 3,
    ITEM = 4,

};

struct UserData {
    UserDataType type;
    void* data;
};
