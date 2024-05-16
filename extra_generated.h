// this section was generated automatically by rusEFI tool config_definition_base-all.jar based on (unknown script) ../../../extra.txt Wed May 15 21:50:20 EDT 2024
// by class com.rusefi.output.CHeaderConsumer
// begin
#pragma once
#include "rusefi_types.h"
// start of board_extra_s
struct board_extra_s {
	/**
	 * offset 0
	 */
	int extraField = (int)0;
	/**
	 * offset 4
	 */
	uint8_t unusedAtTheExtraEnd[92];
};
static_assert(sizeof(board_extra_s) == 96);

// end
// this section was generated automatically by rusEFI tool config_definition_base-all.jar based on (unknown script) ../../../extra.txt Wed May 15 21:50:20 EDT 2024
