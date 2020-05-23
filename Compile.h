#ifndef COMPILER_HEADER
#define COMPILER_HEADER

/*
 * Compile.h
 *
 * ROBOTC doesn't know where definition files are and the order to link them in.
 * This file is made to compile all definition files.
*/

#include "Globals/Globals.h"
#include "Helpers/Helpers.h"
#include "Controllers/Controllers.h"

#include "Globals/Globals.c"
#include "Helpers/Helpers.c"
#include "Controllers/Controllers.c"

#endif