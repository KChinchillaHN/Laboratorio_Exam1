#ifndef ENEMIGOIZ_H
#define ENEMIGOIZ_H
#include <vector>

#include "Personaje.h"

class EnemigoIz : public Personaje
{
    public:
    std::vector<SDL_Rect> rect_balaar;
        void dibujar();
        void logica();

        EnemigoIz(SDL_Renderer* renderer);
        virtual ~EnemigoIz();
    protected:
    private:
};

#endif // ENEMIGOIZ_H
