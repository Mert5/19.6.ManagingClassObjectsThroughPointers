
// guarding against to put more than once(for ex. if you put #include "constants.h" line more than once)
#ifndef CONSTANTS_H     // preprocessor will come here and say "if the constants name is not defined
#define CONSTANTS_H     // i will define that name

const double Pi {3.1415926535897932384626433832795};    // and put the code here in the source file"
                        // if already defined, ifndef condition will fail and 
                        // it is not going to do anymore thing in this file
                        // the preprocessor is going to give up on this file

#endif