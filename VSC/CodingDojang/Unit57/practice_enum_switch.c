#include <stdio.h>

enum VayneSkill{
    Tumble = 1,
    SilverBolts,
    Condemn,
    FinalHour
};

int main()
{
    enum VayneSkill skill;

    skill = Tumble;

    switch(skill)
    {
        case Tumble:
            printf("Tumble\n");
            break;
        case SilverBolts:
            printf("SilverBolts\n");
            break;
        case Condemn:
            printf("Condemn\n");
            break;
        case FinalHour:
            printf("FinalHour\n");
            break;
        default:
            break;
    }

    return 0;
}