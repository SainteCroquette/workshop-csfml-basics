/*
** EPITECH PROJECT, 2020
** csml_basics
** File description:
** myLoop.cpp.c
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct myWindow {
    sfVideoMode mode;
    sfRenderWindow *window;
    int state;
} myWindow_t;

typedef struct my_button
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfEvent event;
} my_sprite_t;


void button_launch(sfEvent event, myWindow_t window);
void my_events(sfEvent event, myWindow_t window);
void keyboard(sfEvent event, myWindow_t window);
void close_window(sfEvent event, myWindow_t window);
my_sprite_t *game_button(int x, int y);

#endif
