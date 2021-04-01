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
    return (game_button);
}

void close_window(sfEvent event, myWindow_t window)
{
}

void keyboard(sfEvent event, myWindow_t window)
{
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
            }
        }
}
