#include "EnemigoIz.h"

EnemigoIz::EnemigoIz(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "enemigoiz.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 2;
    rect_textura.y = 0;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "balaiz.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 0;
    rect_bala.y = 100;
    rect_bala.w = w;
    rect_bala.h = h;
}

void EnemigoIz::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
    for(int i=0;i<rect_balaar.size();i++)
    SDL_RenderCopy(renderer,textura_bala,NULL,&rect_balaar[i]);
}

void EnemigoIz::logica()
{
    rect_textura.y+=2;
    if(rect_textura.y==600)
        {
        rect_textura.y=100;
        }

for(int i=0;i<rect_balaar.size();i++)
  rect_balaar[i].x+=20;

if(frame%30==0)
        {
            SDL_Rect temp;
            temp.x=rect_textura.x;
            temp.y=rect_textura.y+25;
            temp.w=rect_bala.w;
            temp.h=rect_bala.h;
            rect_balaar.push_back(temp);
        }

frame++;



}

EnemigoIz::~EnemigoIz()
{
//    dtor
}

