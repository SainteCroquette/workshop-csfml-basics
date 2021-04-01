/*
** EPITECH PROJECT, 2020
** csml_basics
** File description:
** myLoop.cpp.c
*/

#include "my.h"

myWindow_t init_window(int width, int height)
{
    myWindow_t win = {{width, height, 32}, NULL};
    win.window = sfRenderWindow_create(win.mode, "test window title", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(win.window, 30);
    return win;
}

sfTexture *create_new_texture(char *file_path)
{
    sfTexture *texture = sfTexture_createFromFile("tree.png", NULL);
    return texture;
}

sfSprite *create_sprite_and_set_texture(sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, 0);
    return sprite;
}


int myLoop()
{
    // init
    sfEvent event;
    myWindow_t window = init_window(500, 300);
    my_sprite_t *button = game_button(30, 10);
    while (sfRenderWindow_isOpen(window.window)) {
        // game loop
        while (sfRenderWindow_pollEvent(window.window, &event)) {
            my_events(event, window);
        }
        sfRenderWindow_clear(window.window, sfBlack);
        sfRenderWindow_drawSprite(window.window, button->sprite, NULL);
        sfRenderWindow_display(window.window);
    }
    sfRenderWindow_destroy(window.window);
    // destroy
    return 0;
}

int main()
{
    return myLoop();
}