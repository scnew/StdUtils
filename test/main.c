#include <stdio.h>
#include <stdlib.h>
#include "StdUtils.h"
#include "unity.h"
#include "limits.h"
#include "float.h"


void setUp(void)
{

}

void tearDown(void)
{

}


void U32_MAX_TEST(void)
{
  TEST_ASSERT_EQUAL_UINT32(10,U32_MAX(10,5));
  TEST_ASSERT_EQUAL_UINT32(1,U32_MAX(0,1));
  TEST_ASSERT_EQUAL_UINT32(UINT_MAX, U32_MAX(UINT_MAX-1, UINT_MAX));
}

void U32_MIN_TEST(void)
{
   TEST_ASSERT_EQUAL_UINT32(5,U32_MIN(10,5));
   TEST_ASSERT_EQUAL_UINT32(0,U32_MIN(0,1));
   TEST_ASSERT_EQUAL_UINT32(UINT_MAX-1, U32_MIN(UINT_MAX, UINT_MAX-1));
}

void DOBL_MAX_TEST(void)
{
  TEST_ASSERT_EQUAL_DOUBLE( 0, DOBL_MAX(0,-1) );
  TEST_ASSERT_EQUAL_DOUBLE( DBL_MAX, DOBL_MAX(DBL_MAX, DBL_MAX-DBL_EPSILON ) );
  TEST_ASSERT_EQUAL_DOUBLE( 0, DOBL_MAX(0, -DBL_EPSILON) );
  TEST_ASSERT_EQUAL_DOUBLE( 1, DOBL_MAX(1, -DBL_EPSILON) );
  TEST_ASSERT_EQUAL_DOUBLE( 1, DOBL_MAX(1, 1-DBL_EPSILON) );
  TEST_ASSERT_EQUAL_DOUBLE( -DBL_EPSILON, DOBL_MAX(-1, -DBL_EPSILON));
}

void DOBL_MIN_TEST(void)
{
  TEST_ASSERT_EQUAL_DOUBLE( -1, DOBL_MIN(0,-1) );
  TEST_ASSERT_EQUAL_DOUBLE( DBL_MAX-DBL_EPSILON, DOBL_MIN( DBL_MAX, DBL_MAX-DBL_EPSILON) );
  TEST_ASSERT_EQUAL_DOUBLE( -DBL_EPSILON, DOBL_MIN( 0, -DBL_EPSILON) );
  TEST_ASSERT_EQUAL_DOUBLE( -DBL_EPSILON, DOBL_MIN( 1, -DBL_EPSILON) );
  TEST_ASSERT_EQUAL_DOUBLE( 1-DBL_EPSILON, DOBL_MIN( 1, 1-DBL_EPSILON) );
  TEST_ASSERT_EQUAL_DOUBLE( -1, DOBL_MIN( -1, -DBL_EPSILON) );
}

void DOUBLE_IS_EQ_TEST(void)
{
   TEST_ASSERT_TRUE( DoubIsEquall( (double) 22/7, (double) 22/7) );
   TEST_ASSERT_FALSE( DoubIsEquall( (double) 21/7, (double) 22/7 ));
}

void DOUBLE_TO_INT_TEST(void)
{
  TEST_ASSERT_EQUAL_INT32( (int32_t) 57, DoubToInt(57.1));
}



////////////////////////////////////////////////////////////////////////////////
int main()
{

UNITY_BEGIN();
RUN_TEST(U32_MAX_TEST);
RUN_TEST(U32_MIN_TEST);
RUN_TEST( DOBL_MAX_TEST );
RUN_TEST( DOBL_MIN_TEST );
RUN_TEST( DOUBLE_IS_EQ_TEST );
RUN_TEST(DOUBLE_TO_INT_TEST);
return UNITY_END();
}

