#include <stdio.h>
#include <stdlib.h>

int main()
{
    int strength;
    int weapon;
    printf("Imput your character's strength: ");
    scanf("%d", &strength);
    printf("Imput your weapon damage:");
    scanf("%d", &weapon);
    printf("Your total damage is: %d", strength + weapon);
    return 0;
}
