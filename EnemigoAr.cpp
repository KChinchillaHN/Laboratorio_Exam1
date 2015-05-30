#include "EnemigoAr.h"

EnemigoAr::EnemigoAr(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "enemigoar.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 0;
    rect_textura.y = 4;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "balaab.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 0;
    rect_bala.y = 100;
    rect_bala.w = w;
    rect_bala.h = h;
}

void EnemigoAr::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
    for(int i=0;i<rect_balaar.size();i++)
    SDL_RenderCopy(renderer,textura_bala,NULL,&rect_balaar[i]);
}

void EnemigoAr::logica()
{
    rect_textura.x+=2;
        if(rect_textura.x==850)
        {
        rect_textura.x=100;
        }

for(int i=0;i<rect_balaar.size();i++)
  rect_balaar[i].y+=20;

if(frame%30==0)
        {
            SDL_Rect temp;
            temp.x=rect_textura.x+19;
            temp.y=rect_textura.y;
            temp.w=rect_bala.w;
            temp.h=rect_bala.h;
            rect_balaar.push_back(temp);
        }

frame++;



}

EnemigoAr::~EnemigoAr()
{
    //dtor
}
