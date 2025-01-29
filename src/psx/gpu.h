#ifndef GPU_H
#define GPU_H

#include <stdint.h>
#include <stdlib.h>
#include <libgpu.h>

typedef struct {
    uint32_t idx;
    uint32_t draw_stamp;
    void *prims_head;
    void *prims_tail;
    uint32_t ticks_per_frame;
    DRAWENV draw;
    DISPENV disp;
    P_TAG ot[2048]; // Assuming O_TAG is a struct type used for the draw list
} gfx_context;

typedef struct {
    gfx_context c1;
    gfx_context c2;
    gfx_context *cur;
    gfx_context *c1_p;
    gfx_context *c2_p;
    int count;
} gfx_context_db;

extern gfx_context_db context;


extern int rcnt_stopped;
extern ns_struct ns; // Assuming ns_struct is defined elsewhere
extern entry *cur_zone; // Assuming entry is defined elsewhere
extern int paused;
extern uint32_t ticks_elapsed;
extern int draw_count;

int GpuFillDisplay(void);
int GpuInit(void);
int GpuKill(void);
int GpuSetupPrims(void);
void GpuResetPrims(gfx_context *gc);
void **GpuGetPrimsTail(void);
void GpuSwapBuffers(void);
void GpuDrawRect(int x, int y, int w, int h, int r, int g, int b);
unsigned int GpuDrawOverlay(int brightness);
int GpuRoundTicks(int ticks);
int GpuUpdate(void);

#endif // GPU_H