#include <stdio.h>
#include <stdlib.h>
#include "StdUtils.h"
#include "TestSTdUtils.h"
#include <stdbool.h>
#include <limits.h>
#include <float.h>


/**
/// Global verbose
*/
bool TestMaxVerbose = true;


/**

*/
uint32_t U32_TestOuputEqual( uint32_t fut,  uint32_t sol, bool dlev, const char *fnam, uint32_t tnum )
{
    uint32_t ans = (uint32_t) 1;

    ans = (fut == sol) ? (uint32_t) 0 : (uint32_t)1;

    if( dlev == true )
    {
        printf("Pass -> %s : %d\n",fnam,tnum );
    }
    else
    {
        printf("Fail -> %s : %d\n",fnam,tnum );
    }

    return ans;
}


/**

*/
uint32_t I32_TestOuputEqual( int32_t fut,  int32_t sol, bool dlev, const char *fnam, uint32_t tnum )
{
    uint32_t ans = (uint32_t) 1;

    ans = (fut == sol) ? (uint32_t) 0 : (uint32_t)1;

    if( dlev == true )
    {
        printf("Pass -> %s : %d\n",fnam,tnum );
    }
    else
    {
        printf("Fail -> %s : %d\n",fnam,tnum );
    }

    return ans;
}



/**

*/
uint32_t DOBL_TestOuputEqual( double fut, double sol, bool dlev, const char *fnam, uint32_t tnum )
{
    uint32_t ans = (uint32_t) 1;

    ans = (fut == sol) ? (uint32_t) 0 : (uint32_t)1;

    if( dlev == true )
    {
        printf("Pass -> %s : %d\n",fnam,tnum );
    }
    else
    {
        printf("Fail -> %s : %d\n",fnam,tnum );
    }

    return ans;
}


/**

*/
uint32_t TestIsTrue( bool fut, bool sol, bool dlev, const char *fnam, uint32_t tnum )
{
     uint32_t ans = (uint32_t) 1;

     ans = (fut == sol) ? (uint32_t) 0 : (uint32_t)1;

    if( dlev == true )
    {
        printf("Pass -> %s : %d\n",fnam,tnum );
    }
    else
    {
        printf("Fail -> %s : %d\n",fnam,tnum );
    }


     return ans;

}


/**

*/
void Test_U32_MAX()
{
    uint32_t all = 0;
    const char *f=__FUNCTION__;

    all = U32_TestOuputEqual( U32_MAX(10,5), 10, TestMaxVerbose, f, 1 );
    all = U32_TestOuputEqual( U32_MAX(0,1), 1, TestMaxVerbose, f, 2 );
    all = U32_TestOuputEqual( U32_MAX(UINT_MAX ,UINT_MAX-1), UINT_MAX, TestMaxVerbose, f, 3 );

    if( all == 0 )
    {
        printf("All Pass -> %s\n",f);
    }

    return;
}



/**

*/
void Test_U32_MIN()
{
    uint32_t all = 0;
    const char *f=__FUNCTION__;

    all = U32_TestOuputEqual( U32_MIN(10,5), 5, TestMaxVerbose, f, 1 );
    all = U32_TestOuputEqual( U32_MIN(0,1), 0, TestMaxVerbose, f, 2 );
    all = U32_TestOuputEqual( U32_MIN(UINT_MAX ,UINT_MAX-1), UINT_MAX-1, TestMaxVerbose, f, 3 );

    if( all == 0 )
    {
        printf("All Pass -> %s\n",f);
    }

    return;
}



/**

*/
void Test_DOBL_MAX()
{
    uint32_t all = 0;
    const char *f=__FUNCTION__;


    all = DOBL_TestOuputEqual( DOBL_MAX(0,-1), 0, TestMaxVerbose, f, 1 );
    all = DOBL_TestOuputEqual( DOBL_MAX( DBL_MAX ,DBL_MAX-DBL_EPSILON), DBL_MAX, TestMaxVerbose, f, 2 );
    all = DOBL_TestOuputEqual( DOBL_MAX( 0,-DBL_EPSILON), 0, TestMaxVerbose, f, 3 );
    all = DOBL_TestOuputEqual( DOBL_MAX( 1,-DBL_EPSILON), 1, TestMaxVerbose, f, 4 );
    all = DOBL_TestOuputEqual( DOBL_MAX( 1,1-DBL_EPSILON), 1, TestMaxVerbose, f, 5 );
    all = DOBL_TestOuputEqual( DOBL_MAX( -1,-DBL_EPSILON), -DBL_EPSILON, TestMaxVerbose, f, 6 );

    if( all == 0 )
    {
        printf("All Pass -> %s\n",f);
    }

    return;
}

/**

*/
void Test_DOBL_MIN()
{
    uint32_t all = 0;
    const char *f=__FUNCTION__;


    all = DOBL_TestOuputEqual( DOBL_MIN(0,-1), -1, TestMaxVerbose, f, 1 );
    all = DOBL_TestOuputEqual( DOBL_MIN( DBL_MAX ,DBL_MAX-DBL_EPSILON), DBL_MAX-DBL_EPSILON, TestMaxVerbose, f, 2 );
    all = DOBL_TestOuputEqual( DOBL_MIN( 0,-DBL_EPSILON), -DBL_EPSILON, TestMaxVerbose, f, 3 );
    all = DOBL_TestOuputEqual( DOBL_MIN( 1,-DBL_EPSILON), -DBL_EPSILON, TestMaxVerbose, f, 4 );
    all = DOBL_TestOuputEqual( DOBL_MIN( 1,1-DBL_EPSILON), 1-DBL_EPSILON, TestMaxVerbose, f, 5 );
    all = DOBL_TestOuputEqual( DOBL_MIN( -1,-DBL_EPSILON), -1, TestMaxVerbose, f, 6 );

    if( all == 0 )
    {
        printf("All Pass -> %s\n",f);
    }

    return;
}



/**

*/
void Test_DoubIsEquall()
{
    uint32_t all = 0;
    const char *f=__FUNCTION__;


    all = TestIsTrue( DoubIsEquall( (double) 22/7, (double) 22/7 ), true, TestMaxVerbose, f, 1 );
    all = TestIsTrue( DoubIsEquall( (double) 21/7, (double) 22/7 ), false, TestMaxVerbose, f, 2 );

    if( all == 0 )
    {
        printf("All Pass -> %s\n",f);
    }

    return;
}

/**

*/
void Test_DoubToInt()
{
    uint32_t all = 0;
    const char *f=__FUNCTION__;

    all = I32_TestOuputEqual( DoubToInt(57.1), (int32_t) 57,  TestMaxVerbose, f, 1);

    if( all == 0 )
    {
        printf("All Pass -> %s\n",f);
    }

    return;
}




/**
 Start of all the tests.
*/
void HarnessStart()
{

    Test_U32_MAX();
    Test_U32_MIN();
    Test_DOBL_MAX();
    Test_DOBL_MIN();
    Test_DoubIsEquall();
    Test_DoubToInt();

    return;
}
