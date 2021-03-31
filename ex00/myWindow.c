/*
** EPITECH PROJECT, 2020
** csml_basics
** File description:
** myWindow.c
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

}

int main()
{
    myWindow_t window = init_window(500, 300);
    sleep(5);
    return 0;
}