#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Ellipse.cpp"
void Ellipse_Direct     (HDC,Point,Point,COLORREF);
void Ellipse_Polar      (HDC,Point,Point,COLORREF);
void Ellipse_MidPoint   (HDC,Point,Point,COLORREF);
void Ellipse_Draw4      (HDC,int,int,int,int,COLORREF);
#endif  // ELLIPSE_H

