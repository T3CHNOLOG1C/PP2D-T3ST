/*-----------------------------------------------------*\
|                                                       |
|   App Title: PP2D-T3ST                                |
|   Author: T3CHNOLOG1C                                 |
|   Description: A test involving PP2D GFX Lib          |
|   License: WTFPL                                      |
|   Date Created: Dec. 17 2017                          |
|   Date Modified: Dec. 17 2017                         |
|                                                       |
|    Dependencies:                                       |
|       - devkitARM                                     |
|       - ctrulib                                       |
|       - makerom and bannertool added to PATH          |
|       - "zip" command line tool for "make release"    |
\*-----------------------------------------------------*/

#include <3ds.h>
#include <stdio.h>
#include "pp2d/pp2d.h"

int main(int argc, char **argv)
{

    pp2d_init();
    pp2d_begin_draw(GFX_TOP, GFX_LEFT);

    pp2d_draw_rectangle(0, 0, 400, 240, RGBA8(0, 50, 255, 255));
    pp2d_draw_text_center(GFX_TOP, 220, 0.5, 0.5, RGBA8(255, 255, 255, 255), "Press Start To exit.");

    while (aptMainLoop())
    {
        pp2d_end_draw();
        hidScanInput();

        u32 kDown = hidKeysDown();
        u32 kHeld = hidKeysHeld();

        // Exit if start is held.
        if (kDown & KEY_START) {
            pp2d_exit();	
            break;
        }

    }

    pp2d_exit()
    return 0;
}
