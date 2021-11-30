#include <stdio.h>
#include <stdlib.h>

int main()
{
    int strength;
    int weapon;
    int yes;
    printf("Imput your character's strength: ");
    scanf("%d", &strength);
    printf("Imput your weapon damage:");
    scanf("%d", &weapon);
    printf("\n Your total damage is: %d", strength + weapon);
    printf("\n\nType \"yes\" to exit the program:");
    scanf("%d", &yes);
    return 0;
}
