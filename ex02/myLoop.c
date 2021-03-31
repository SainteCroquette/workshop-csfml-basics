/*
** EPITECH PROJECT, 2020
** csml_basics
** File description:
** myLoop.cpp.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <unistd.h>

typedef struct myWindow {
    sfVideoMode mode;
    sfRenderWindow *window;
} myWindow_t;


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

    while (sfRenderWindow_isOpen(...)) {
        // game loop
        while (sfRenderWindow_pollEvent(...)) {
            if ( /* event window is closed */ )
                sfRenderWindow_close(...);
        }
    }
    // destroy
    return 0;
}

int main()
{
    return myLoop();
}