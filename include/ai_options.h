#ifndef AI_OPTIONS_H
#define AI_OPTIONS_H

// Include necessary headers
#include "global.h"        // For SaveBlock2 definition
#include "config.h"        // For ARRAY_COUNT macro
#include "constants/ai_options.h"



/*
 * Helper function: GetAIOptionValue
 * Retrieves AI option values from SaveBlock2 based on index
 *
 * Parameters:
 *   index - One of the AIOptionIndices enum values
 *
 * Returns:
 *   u32 - Option value (cast appropriately in calling code)
 */
static inline u32 GetAIOptionValue(u8 index)
{
    switch(index)
    {
        //----------------------------------------------------------------------
        // Core Option Handlers
        //----------------------------------------------------------------------
        case OPTION_FOCUS_PUNCH_AI:
            return gSaveBlock2Ptr->optionsFocusPunchAI;

        case OPTION_QUICK_ROUTE:
            return gSaveBlock2Ptr->optionsQuickRoute;

        case OPTION_IGNORE_BAG:
            return gSaveBlock2Ptr->optionsIgnoreBag;

        //----------------------------------------------------------------------
        // Multi-bit Field Example
        //----------------------------------------------------------------------
        case OPTION_TEXT_SPEED:
            // For bitfield values, return raw bits - filtering happens in script
            return gSaveBlock2Ptr->optionsTextSpeed;

        //----------------------------------------------------------------------
        // Add New Option Handlers Here
        //----------------------------------------------------------------------
        // TEMPLATE:
        // case OPTION_NEW_FEATURE:
        //     return gSaveBlock2Ptr->optionsNewFeature;

        //----------------------------------------------------------------------
        // Error Handling
        //----------------------------------------------------------------------
        default:
            // Invalid option index - return safe default
            return 0;
    }
}

#endif // AI_OPTIONS_H
