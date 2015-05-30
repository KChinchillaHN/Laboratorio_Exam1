#include "EnemigoAb.h"

EnemigoAb::EnemigoAb(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "enemigoab.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 0;
    rect_textura.y = 595;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "balaar.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 0;
    rect_bala.y = 595;
    rect_bala.w = w;
    rect_bala.h = h;
}

void EnemigoAb::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
    for(int i=0;i<rect_balaab.size();i++)
        SDL_RenderCopy(renderer,textura_bala,NULL,&rect_balaab[i]);
}

void EnemigoAb::logica()
{
    rect_textura.x+=2;
    if(rect_textura.x==850)
        {
        rect_textura.x=100;
        }

 for(int i=0;i<rect_balaab.size();i++)
  rect_balaab[i].y-=20;

if(frame%30==0)
        {
            SDL_Rect temp;
            temp.x=rect_textura.x+19;
            temp.y=rect_textura.y;
            temp.w=rect_bala.w;
            temp.h=rect_bala.h;
            rect_balaab.push_back(temp);
        }

frame++;

}

EnemigoAb::~EnemigoAb()
{
   // dtor
}
