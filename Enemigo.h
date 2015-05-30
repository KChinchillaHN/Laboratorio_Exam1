#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <vector>

#include "Personaje.h"


class Enemigo : public Personaje
{
    public:
        std::vector<SDL_Rect> rect_balase;
        void dibujar();
        void logica();

        Enemigo(SDL_Renderer* renderer);
        virtual ~Enemigo();
    protected:
    private:
};

#endif // ENEMIGO_H
