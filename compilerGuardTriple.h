#include "compilerGuardAdd.h"

#ifndef COMPILER_GUARD_TRIPLE_H
#define COMPILER_GUARD_TRIPLE_H

inline int compilerGuardTriple(int x) {return compilerGuardAdd(x, compilerGuardAdd(x, x));}

#endif