/*
** EPITECH PROJECT, 2020
** csml_basics
** File description:
** myLoop.cpp.c
*/

typedef enum states{STATE_INIT = 0, STATE_MAIN_MENU = 1, STATE_GAME = 2, STATE_ERROR = 5, END} state_t;

typedef state_t (*state_func)(word_t *word);

state_t init(word_t *word)
{
    word->a = 2;
    return STATE_MAIN_MENU;
}

state_t main_menu(word_t *word)
{
    if (button_play_is_pressed())
        return STATE_GAME;
    else if (key_quit_is_pressed())
        return END;
    return STATE_MAIN_MENU;
}

state_t game(word_t *word)
{
    return END;
}

state_func STATES_HANDLERS[END] = {
    init,
    main_menu,
    game
};


int main()
{
    state_t state = INIT;
    state_func handler;
    word_t word;
    
    while (state != END) {
        handler = STATES_HANDLERS[state];
        state = handler(&word);
    }
}