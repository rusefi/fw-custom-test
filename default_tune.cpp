#include "pch.h"
#include "livedata_board_extra.h"

extra_s extraGauges;

template<>
const extra_s* getLiveData(size_t) {
	return &extraGauges;
}

void boardTuneDefaults() {
    engineConfiguration->displacement = 1.6;
}
