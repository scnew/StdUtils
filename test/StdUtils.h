#ifndef STDUTILS_H_INCLUDED
#define STDUTILS_H_INCLUDED
#include <stdbool.h>
#include <stdint.h>
/**
   Standard Utilities for projects

*/


/**
 Externals
*/
extern uint32_t U32_MAX( uint32_t x , uint32_t y);
extern uint32_t U32_MIN( uint32_t x, uint32_t y );
extern double DOBL_MAX( double x , double y);
extern double DOBL_MIN( double x , double y);



/**
 Functions
*/
bool DoubIsEquall(double x, double y);
int32_t DoubToInt( double x );



//int RoundDoblToInt(double x);
//
//// Perform relative difference for driver variables.
//// All driver variables are double so this must be
//// used instead of an absolute compare.
//double reldif(double a, double b);
//
//// Use this function to compare driver variables for
//// equality.
//bool isequal(double x, double y);
#endif // STDUTILS_H_INCLUDED
