#include <stdint.h>
#include <stdbool.h>
#include "StdUtils.h"
#include <limits.h>
#include <float.h>
#include <math.h>

/**
 Using defines is not recommended due to unintended consequences
 that macros introduce in coding.  Some programmers recommend inline instead.
 Many projects choose macros. Note that -1 and other negatives
 can be put into this function. Limitation : unit32_t -1 will roll and get a
 very large number. Overflow is not checked here.  Values can be viewed in
 debugger if issues in complex calculations need a look.
*/
inline uint32_t U32_MAX( uint32_t x , uint32_t y)
{
    return ( x > y )  ? x : y;
}


/**

*/
inline uint32_t U32_MIN( uint32_t x, uint32_t y )
{
    return ( x > y ) ?  y : x;
}


/**

*/
inline double DOBL_MAX( double x , double y)
{
    return ( x > y )  ? x : y;
}


/**

*/
inline double DOBL_MIN( double x, double y )
{
    return ( x > y ) ?  y : x;
}


/**

*/
bool DoubIsEquall(double x, double y)
{
    if ( fabs(x - y) < DBL_EPSILON )
    {
        return true;
    }
    else
    {
        return false;
    }
}


/**

*/
int32_t DoubToInt( double x )
{
    // Value outside of int range
    if (x >= INT_MAX) { return (int32_t) -1; }

    if (x <= INT_MIN) { return (int32_t) -1; }

    if (x < (double) 0.0 )
    {
        return ( x - (double) 0.5);
    }
    else
    {
        return ( x + (double) 0.5);
    }

}



