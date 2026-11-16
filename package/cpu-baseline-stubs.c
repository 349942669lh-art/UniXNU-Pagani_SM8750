#include <stdint.h>

/* CPU baseline does not link Adreno, haptics, or torch. Apple ld still
   requires definitions for these optional call sites. */
volatile uint32_t native_adreno_pool_stats[8];

int native_gpu_trace_enabled(void) { return 0; }

void native_gpu_trace_record(uint32_t event, uint32_t pid, const uint64_t *values, uint32_t count) {
    (void)event;
    (void)pid;
    (void)values;
    (void)count;
}

int native_gpu_pixel_put(const void *piece, uint32_t pid) {
    (void)piece;
    (void)pid;
    return 1;
}

void pagani_haptics_ios_commit(int audio_visible, int tunings_visible) {
    (void)audio_visible;
    (void)tunings_visible;
}

void pagani_torch_ios_commit(int plugin_visible) {
    (void)plugin_visible;
}
