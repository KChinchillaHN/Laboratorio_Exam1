#ifndef ENEMIGOAB_H
#define ENEMIGOAB_H
#include "math.h"
#include <vector>

#include "Personaje.h"

class EnemigoAb : public Personaje
{
    public:
        std::vector<SDL_Rect> rect_balaab;
        void dibujar();
        void logica();

        EnemigoAb(SDL_Renderer* renderer);
        virtual ~EnemigoAb();
    protected:
    private:
};

#endif // ENEMIGOAR_H
