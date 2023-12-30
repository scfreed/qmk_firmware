#pragma once
//TODO: these aren't working in rules.mk - investigate def expansion in Makefile structure
#define PLANCK_COLOR_BLUE

#if defined PLANCK_COLOR_GREEN
#   undef RGBLIGHT_RAINBOW_HUE_MIN
#   undef RGBLIGHT_RAINBOW_HUE_MAX
#   define RGBLIGHT_RAINBOW_HUE_MIN 47
#   define RGBLIGHT_RAINBOW_HUE_MAX 102
#elif defined PLANCK_COLOR_BLUE
#   undef RGBLIGHT_RAINBOW_HUE_MIN
#   undef RGBLIGHT_RAINBOW_HUE_MAX
#   define RGBLIGHT_RAINBOW_HUE_MIN 115
#   define RGBLIGHT_RAINBOW_HUE_MAX 175
#endif

#ifdef AUDIO_ENABLE
    //#define STARTUP_SONG SONG(PLANCK_SOUND)
    #define STARTUP_SONG SONG(STARTUP_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4
