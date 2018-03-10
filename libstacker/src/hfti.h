#ifndef HFTI_H
#define HFTI_H

/*! @file hfti.h
    @brief Defines the header for the Fortran HFTI function used by FOCAS.
*/

#define MAX_MATCH	120	/* Max # of matches to use (~MAX_OBJS) */

// Fortran code is compiled and linked externally
extern "C" {
//    extern void hfti_(float (*)[MAX_MATCH], int*, int*, int*, float (*)[MAX_MATCH], int*, int*, float*, int*, float*, float*, float*, int*);
    extern void h12_(int, int, int, int, float*, int, float*, float*, int, int, int);
}

#endif // HFTI_H
