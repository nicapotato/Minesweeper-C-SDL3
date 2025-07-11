#ifndef BORDER_H
#define BORDER_H

#include "main.h"

struct Border {
        SDL_Renderer *renderer;
        SDL_Texture *image;
        SDL_FRect *src_rects;
        unsigned rows;
        unsigned columns;
        float piece_height;
        float piece_width;
        float left_offset;
        float scale;
        unsigned theme;
};

bool border_new(struct Border **border, SDL_Renderer *renderer, unsigned rows,
                unsigned columns, float scale);
void border_free(struct Border **border);
void border_set_scale(struct Border *b, float scale);
void border_set_size(struct Border *b, unsigned rows, unsigned columns);
void border_set_theme(struct Border *b, unsigned theme);
void border_draw(const struct Border *b);

#endif
