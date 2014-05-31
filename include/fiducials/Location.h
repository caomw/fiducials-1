// Copyright (c) 20013 by Wayne C. Gramlich.  All rights reserved.

#if !defined(LOCATION_H_INCLUDED)
#define LOCATION_H_INCLUDED 1

#include "Bounding_Box.h"
#include "Double.h"
#include "Unsigned.h"

#ifdef __cplusplus
extern "C" {
#endif
/// @brief *Location* represents an X/Y/Bearing location.

typedef struct Location__Struct *Location;

/// @brief A *Location_Struct* represents an X/Y/Bearing location.
struct Location__Struct {
    /// @brief Goodness coefficient of location (closer to 0.0 is better.)
    Double goodness;

    /// @brief Tag identifier.
    Unsigned id;

    /// @brief Index counter.
    Unsigned index;

    /// @brief Bearing in radians.
    Double bearing;

    /// @brief X coordinate.
    Double x;

    /// @brief Y coordinate.
    Double y;

};

extern void Location__bounding_box_update(
  Location location, Bounding_Box bounding_box);
extern Location Location__copy(Location location);
extern void Location__free(Location location);
extern Location Location__initialize(Location location, Unsigned id,
  Double x, Double y, Double bearing, Double goodness, Unsigned index);
extern Location Location__new(void);

#ifdef __cplusplus
}
#endif
#endif // !defined(LOCATION_H_INCLUDED)
