#ifndef WHEELWRITER_H
#define WHEELWRITER_H

#include "quantum.h"
#include "quantum_keycodes.h"
#include "keycode.h"
#include "action.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
    k012,    k032, k033, k043, k053, k063, k062, k072, k073, k083, k093, k103, k102, k082, k112,         k122,      \
    k004,    k014, k034, k044, k054, k064, k065, k075, k074, k084, k094, k104, k105, k085, k125,         k124,      \
    k015,    k016, k031, k041, k051, k061, k060, k070, k071, k081, k091, k101, k100,       k110,         k121,      \
    k011,    k027, k036, k046, k056, k066, k067, k077, k076, k086, k096, k107,             k026,         k116,      \
    k000,                  k137,                 k007,                               k017,         k117, k120, k127 \
) \
{ \
    { k000,  KC_NO, KC_NO, KC_NO, k004,  KC_NO, KC_NO, k007  }, \
    { KC_NO, k011,  k012,  KC_NO, k014,  k015,  k016,  k017  }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k026, k027   }, \
    { KC_NO, k031,  k032,  k033,  k034,  KC_NO, k036,  KC_NO }, \
    { KC_NO, k041,  KC_NO, k043,  k044,  KC_NO, k046,  KC_NO }, \
    { KC_NO, k051,  KC_NO, k053,  k054,  KC_NO, k056,  KC_NO }, \
    { k060,  k061,  k062,  k063,  k064,  k065,  k066,  k067  }, \
    { k070,  k071,  k072,  k073,  k074,  k075,  k076,  k077  }, \
    { KC_NO, k081,  k082,  k083,  k084,  k085,  k086,  KC_NO }, \
    { KC_NO, k091,  KC_NO, k093,  k094,  KC_NO, k096,  KC_NO }, \
    { k100,  k101,  k102,  k103,  k104,  k105,  KC_NO, k107  }, \
    { k110,  KC_NO, k112,  KC_NO, KC_NO, KC_NO, k116,  k117  }, \
    { k120,  k121,  k122,  KC_NO,  k124,  k125,  KC_NO, k127 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k137  }  \
}

#endif
