#include <stdlib.h>

#include "safefree.h"

/*
 * functions.
 */

void safe_free (void ** pointer_address) {
  if (pointer_address != NULL && *pointer_address != NULL)
  {
    free (*pointer_address);

    *pointer_address = NULL;
  }
}