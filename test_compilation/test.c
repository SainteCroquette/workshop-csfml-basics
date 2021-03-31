/*
** EPITECH PROJECT, 2020
** csml_basics
** File description:
** test.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <unistd.h>

int main()
{
    sfVideoMode mode = {500, 300, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "test window title", sfClose, NULL);
    sfRenderWindow_display(window);
    sleep(5);
    sfRenderWindow_close(window);
    return 0;
}