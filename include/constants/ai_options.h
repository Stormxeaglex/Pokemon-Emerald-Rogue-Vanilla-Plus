#ifndef GUARD_CONSTANTS_AI_OPTIONS_H
#define GUARD_CONSTANTS_AI_OPTIONS_H


/*
 * Option Index Constants
 *
 * Add new option IDs here following the pattern.
 * Use consecutive numbering starting from 0.
 *
 * IMPORTANT: Keep this list of indices in sync with:
 * 1. The switch cases in GetAIOptionValue()
 * 2. The actual SaveBlock2 structure
 */

// Option indices
#define OPTION_FOCUS_PUNCH_AI      0    // Maps to SaveBlock2->optionsFocusPunchAI
#define OPTION_TEXT_SPEED          1    // Maps to SaveBlock2->optionsTextSpeed (3-bit field)

// Add new options ABOVE this line
#define AI_OPTION_COUNT            2
// Add new options here

#endif // GUARD_CONSTANTS_AI_OPTIONS_H
