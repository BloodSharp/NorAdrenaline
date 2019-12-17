#ifndef CRIANOSFERA_HACK_4_UTILS_H
#define CRIANOSFERA_HACK_4_UTILS_H

enum
{
    CH4_GAME_NONE=0,
    CH4_GAME_COUNTER_STRIKE_PROTOCOL_46,
    CH4_GAME_COUNTER_STRIKE_PROTOCOL_47,
    CH4_GAME_COUNTER_STRIKE_PROTOCOL_48,
    CH4_GAME_DAY_OF_DEFEAT_PROTOCOL_47,
    CH4_GAME_DAY_OF_DEFEAT_PROTOCOL_48,
    CH4_GAME_HALF_LIFE_PROTOCOL_47,
    CH4_GAME_HALF_LIFE_PROTOCOL_48,
    CH4_GAME_COUNTER_STRIKE_SOURCE_34,
    CH4_GAME_COUNTER_STRIKE_SOURCE_90,
};

namespace CH4
{
    namespace Utils
    {
        void*DetourFunction(unsigned char*orig,unsigned char*hook);
    }
}

#endif//CRIANOSFERA_HACK_4_UTILS_H
