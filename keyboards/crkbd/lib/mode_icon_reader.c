#include <stdio.h>
#include "crkbd.h"

char mode_icon[24];

const char *read_mode_icon(bool swap) {
  static char logo[][2][3] = {
    {
      {0x95, 0x96, 0},
      {0xb5, 0xb6, 0}
    },
    /* 
    // Windows
    {
      {0x97, 0x98, 0},
      {0xb7, 0xb8, 0}
    }
    */
    // linux
    {
      {0x99, 0x9a, 0},
      {0xb9, 0xba, 0}
    }
    /* 
    // Android
    {
      {0x9b, 0x9c, 0},
      {0xbb, 0xbc, 0}
    }
    */
  };
  if (swap == false) {
    snprintf(mode_icon, sizeof(mode_icon), "%s\n%s", logo[0][0], logo[0][1]);
  } else {
    snprintf(mode_icon, sizeof(mode_icon), "%s\n%s", logo[1][0], logo[1][1]);
  }

  return mode_icon;
}
