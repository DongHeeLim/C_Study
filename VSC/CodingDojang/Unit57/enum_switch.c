#include <stdio.h>

enum LuxSkill{
    LightBinding = 1,
    PrismaticBarrier,
    LucentSingularity,
    FinalSpark
};

int main(){

    enum LuxSkill skill;

    skill = LightBinding;

    switch(skill)
    {
        case LightBinding:
            printf("LightBinding");
            break;
        case PrismaticBarrier:
            printf("PrismaticBarrier");
            break;
        case LucentSingularity:
            printf("LucenSingularity");
            break;
        case FinalSpark:
            printf("FinalSpark");
            break;
        default:
            break;
    }

    return 0;
}