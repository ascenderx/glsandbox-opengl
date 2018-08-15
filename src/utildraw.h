#ifndef UTIL_DRAW_H
#define UTIL_DRAW_H

#include "utiltypes.h"

struct Point2f {
   float x;
   float y;
};

struct Path2f {
   uint length;
   struct Point2f * points;
};

struct ColorRGB {
    uint r;
    uint g;
    uint b;
};

void utilInit2DRenderer(struct UtilitySettings * stgs);
struct ColorRGB utilParseColor(uint color);
void utilSetColor(uint color);
void utilClearScreen();
void utilPolyline2D(const struct Path2f * path);

#endif // UTIL_DRAW_H
