/*
** EPITECH PROJECT, 2020
** csml_basics
** File description:
** myLoop.cpp.c
*/

#include "my.h"

my_sprite_t *game_button(int x, int y)
{
    my_sprite_t *game_button = NULL;

    if (!(game_button = malloc(sizeof*(game_button)))) {
        return (NULL);
    }
    game_button->pos.x = x;
    game_button->pos.y = y;
    game_button->texture =
    sfTexture_createFromFile("tree.png", NULL);
    game_button->sprite = sfSprite_create();
    sfSprite_setTexture(game_button->sprite, game_button->texture, sfFalse);
    return (game_button);
}

void close_window(sfEvent event, myWindow_t window)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window.window);
}

void keyboard(sfEvent event, myWindow_t window)
{
    if (event.key.code == sfKeyQ) {
        sfRenderWindow_close(window.window);
    }
}

void my_events(sfEvent event, myWindow_t window)
{
    keyboard(event, window);
    close_window(event, window);
    button_launch(event, window);
}

void button_launch(sfEvent event, myWindow_t window)
{
        if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) 
        {
            if (event.mouseButton.x <= 257 && event.mouseButton.y <= 257 && event.mouseButton.x >= 0 && event.mouseButton.y >= 0) {
                printf("%s\n", "toto");
                sfRenderWindow_close(window.window);
            }
        }
}
