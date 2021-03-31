/*
** EPITECH PROJECT, 2020
** csml_basics
** File description:
** mySprite.c
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


int main()
{
    myWindow_t window = init_window(500, 300);
    sfTexture *little_tree = create_new_texture("tree.png");
    sfSprite *my_first_sprite = create_sprite_and_set_texture(little_tree);


    sfRenderWindow_drawSprite(window.window, my_first_sprite, NULL);
    sfRenderWindow_display(window.window);

    sleep(5);
    return 0;
}