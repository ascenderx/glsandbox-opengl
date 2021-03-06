#ifndef UTIL_DRAW_H
#define UTIL_DRAW_H

/****************************************************************************
 * 
 ****************************************************************************/
#include "utiltypes.h"

/****************************************************************************
 * 
 ****************************************************************************/
struct UtilColorRGB {
    float r;
    float g;
    float b;
};

/****************************************************************************
 * 
 ****************************************************************************/
void utilInitRenderer(uint width, uint height, uint color);

/****************************************************************************
 * 
 ****************************************************************************/
struct UtilColorRGB utilParseColor(uint color);

/****************************************************************************
 * 
 ****************************************************************************/
void utilSetStrokeColorInt(uint color);

/****************************************************************************
 * 
 ****************************************************************************/
void utilSetStrokeColorRGB(struct UtilColorRGB * color);

/****************************************************************************
 * 
 ****************************************************************************/
void utilClearScreen(void);

/****************************************************************************
 * 
 ****************************************************************************/
void utilStrokeLine(struct UtilPoint2f endpoints[2]);

/****************************************************************************
 * 
 ****************************************************************************/
void __utilIterateVertices__(const struct UtilPath2f * path);

/****************************************************************************
 * 
 ****************************************************************************/
void utilStrokePolyline(const struct UtilPath2f * path);

/****************************************************************************
 * 
 ****************************************************************************/
void utilStrokePolygon(const struct UtilPath2f * path);

/****************************************************************************
 * 
 ****************************************************************************/
void utilFillPolygon(const struct UtilPath2f * path);

/****************************************************************************
 * 
 ****************************************************************************/
void utilFillPoint(const struct UtilPoint2f * point);

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
void utilRotatePoint(struct UtilPoint2f * point, float degrees);

/****************************************************************************
 * 
 ****************************************************************************/
void utilTranslatePolygon(struct UtilPath2f * polygon, float dx, float dy);

/****************************************************************************
 * 
 ****************************************************************************/
void utilRotatePolygonAboutCenter(struct UtilPath2f * polygon, float degrees);

#endif // UTIL_DRAW_H
