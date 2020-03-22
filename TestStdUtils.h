#ifndef TESTSTDUTILS_H_INCLUDED
#define TESTSTDUTILS_H_INCLUDED

void HarnessStart();
void Test_U32_MAX();
void Test_U32_MIN();
void Test_DOBL_MAX();
void Test_DOBL_MIN();
void Test_DoubToInt();

uint32_t U32_TestOuputEqual( uint32_t fut,  uint32_t sol, bool dlev,
                             const char *fnam, uint32_t tnum );
uint32_t DOBL_TestOuputEqual( double fut,  double sol, bool dlev,
                              const char *fnam, uint32_t tnum );
uint32_t TestIsTrue( bool fut, bool sol, bool dleve, const char *fnam,
                     uint32_t tnum );
uint32_t I32_TestOuputEqual( int32_t fut,  int32_t sol, bool dlev,
                             const char *fnam, uint32_t tnum );


#endif // TESTSTDUTILS_H_INCLUDED
