#ifndef UTIL_TEXT_H
#define UTIL_TEXT_H

/****************************************************************************
 * 
 ****************************************************************************/
#include "utiltypes.h"
#include "utildraw.h"

/****************************************************************************
 * 
 ****************************************************************************/
uint __utilGlyphMarginX__;
uint __utilGlyphMarginY__;
uint __utilGlyphScaling__;
uint __utilGlyphTabWidth__;
struct Point2f __utilGlyphCursorCurrent__;
struct Point2f __utilGlyphCursorStart__;
struct ColorRGB __utilGlyphColor__;

/****************************************************************************
 * 
 ****************************************************************************/
void utilInit2DGlyphs(void);

/****************************************************************************
 * 
 ****************************************************************************/
void utilSetGlyphDims(uint marginX, uint marginY, uint scaling, uint tabWidth);

/****************************************************************************
 * 
 ****************************************************************************/
void utilSetGlyphColorInt(uint color);

/****************************************************************************
 * 
 ****************************************************************************/
void utilSetGlyphColorRGB(struct ColorRGB * rgb);

/****************************************************************************
 * 
 ****************************************************************************/
void utilSetGlyphCursorXY(float x, float y);

/****************************************************************************
 * 
 ****************************************************************************/
void utilSetGlyphCursorPt(struct Point2f * pt);

/****************************************************************************
 * 
 ****************************************************************************/
void utilAdvanceGlyphCursorX(int numChars);

/****************************************************************************
 * 
 ****************************************************************************/
void utilAdvanceGlyphCursorY(int numLines);

/****************************************************************************
 * 
 ****************************************************************************/
void __utilEraseGlyphs__(uint numGlyphs);

/****************************************************************************
 * 
 ****************************************************************************/
#define X 0
#define Y 1
#define __UTIL_GLYPH_WIDTH__  3
#define __UTIL_GLYPH_HEIGHT__ 3
#define __MAX_GLYPH_DOTS__ 9
void __utilDrawGlyph__(const uint ** glyph, uint numVertices);

/****************************************************************************
 * 
 ****************************************************************************/
void utilDrawText(const char * text);

/****************************************************************************
 * 
 ****************************************************************************/
void utilDrawCharacter(const char c);

/****************************************************************************
 * 
 ****************************************************************************/
#define __UTIL_BUFFER_LENGTH__ 256

/****************************************************************************
 * 
 ****************************************************************************/
void utilDrawInteger(long int num);

/****************************************************************************
 * 
 ****************************************************************************/
void utilDrawFloat(long double num);

#endif // UTIL_TEXT_H