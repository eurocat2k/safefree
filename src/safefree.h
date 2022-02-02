#ifndef _MEMORY_MANAGEMENT_HELPER_H_
#define _MEMORY_MANAGEMENT_HELPER_H_
/*
 * function prototypes.
 */
void safe_free (void ** ptrAddr);

#define SafeFree(pointer) safe_free((void **) &(pointer))

#endif // _MEMORY_MANAGEMENT_HELPER_H_