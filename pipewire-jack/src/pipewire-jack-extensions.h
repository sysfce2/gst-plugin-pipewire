/* PipeWire JACK extensions */
/* SPDX-FileCopyrightText: Copyright © 2020 Wim Taymans */
/* SPDX-License-Identifier: MIT */

#ifndef PIPEWIRE_JACK_EXTENSIONS_H
#define PIPEWIRE_JACK_EXTENSIONS_H
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** 1.0 gamma, full range HDR 0.0 -> 1.0, pre-multiplied
 * alpha, BT.2020 primaries, progressive */
#define JACK_DEFAULT_VIDEO_TYPE	"32 bit float RGBA video"

typedef struct jack_image_size {
	uint32_t width;
	uint32_t height;
	uint32_t stride;
	uint32_t flags;
} jack_image_size_t;

int jack_get_video_image_size(jack_client_t *client, jack_image_size_t *size);

int jack_set_sample_rate (jack_client_t *client, jack_nframes_t nframes);

/* raw OSC message */
#define JACK_DEFAULT_OSC_TYPE "8 bit raw OSC"

/* MIDI 2.0 UMP type. This contains raw UMP data, which can have MIDI 1.0 or
 * MIDI 2.0 packets. The data is an array of 32 bit ints. */
#define JACK_DEFAULT_UMP_TYPE "32 bit raw UMP"

#ifdef __cplusplus
}
#endif

#endif /* PIPEWIRE_JACK_EXTENSIONS_H */
