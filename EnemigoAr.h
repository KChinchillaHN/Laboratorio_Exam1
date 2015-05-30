#ifndef ENEMIGOAR_H
#define ENEMIGOAR_H
#include <vector>

#include "Personaje.h"

class EnemigoAr : public Personaje
{
    public:
        std::vector<SDL_Rect> rect_balaar;
        void dibujar();
        void logica();

        EnemigoAr(SDL_Renderer* renderer);
        virtual ~EnemigoAr();
    protected:
    private:
};

#endif // ENEMIGOAR_H
