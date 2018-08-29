#ifndef UTIL_DRAW_H
#define UTIL_DRAW_H

/****************************************************************************
 * 
 ****************************************************************************/
#include "utiltypes.h"

/****************************************************************************
 * 
 ****************************************************************************/
struct ColorRGB {
    uint r;
    uint g;
    uint b;
};

/****************************************************************************
 * 
 ****************************************************************************/
void utilInitRenderer(uint width, uint height, uint color);

/****************************************************************************
 * 
 ****************************************************************************/
struct ColorRGB utilParseColor(uint color);

/****************************************************************************
 * 
 ****************************************************************************/
void utilSetColor(uint color);

/****************************************************************************
 * 
 ****************************************************************************/
void utilClearScreen(void);

/****************************************************************************
 * 
 ****************************************************************************/
struct Point2f {
   float x;
   float y;
};

/****************************************************************************
 * 
 ****************************************************************************/
struct Path2f {
   uint length;
   struct Point2f * center;
   struct Point2f * vertices;
};

/****************************************************************************
 * 
 ****************************************************************************/
void __utilIterateVertices__(const struct Path2f * path);

/****************************************************************************
 * 
 ****************************************************************************/
void utilStrokePolyline(const struct Path2f * path);

/****************************************************************************
 * 
 ****************************************************************************/
void utilStrokePolygon(const struct Path2f * path);

/****************************************************************************
 * 
 ****************************************************************************/
void utilFillPolygon(const struct Path2f * path);

/****************************************************************************
 * 
 ****************************************************************************/
void utilFillPoint(const struct Point2f * point);

/****************************************************************************
 * 
 ****************************************************************************/
#define PI 3.14159265358979

/****************************************************************************
 * 
 ****************************************************************************/
float __utilDegToRad__(float degrees);

/****************************************************************************
 * 
 ****************************************************************************/
float __utilRadToDeg__(float radians);

/****************************************************************************
 * 
 ****************************************************************************/
void utilRotatePoint(struct Point2f * point, float degrees);

/****************************************************************************
 * 
 ****************************************************************************/
void utilTranslatePolygon(struct Path2f * polygon, float dx, float dy);

/****************************************************************************
 * 
 ****************************************************************************/
void utilRotatePolygonAboutCenter(struct Path2f * polygon, float degrees);

/****************************************************************************
 * 
 ****************************************************************************/
uint __utilGlyphMarginX__;
uint __utilGlyphMarginY__;
uint __utilGlyphScaling__;

/****************************************************************************
 * 
 ****************************************************************************/
void utilSetGlyphDims(uint marginX, uint marginY, uint scaling);

/****************************************************************************
 * 
 ****************************************************************************/
struct Glyph {
    uint length;
    const uint ** vertices;
};

/****************************************************************************
 * 
 ****************************************************************************/
#define X 0
#define Y 1
#define __UTIL_GLYPH_WIDTH__  3
#define __UTIL_GLYPH_HEIGHT__ 5
void __utilDrawGlyph__(const uint ** glyph, uint numLines, uint x, uint y);

/****************************************************************************
 * 
 ****************************************************************************/
void utilDrawText(const char * text, struct Point2f * center);

#endif // UTIL_DRAW_H
