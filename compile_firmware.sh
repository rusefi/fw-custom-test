#!/usr/bin/env bash

export EXTRA_LIVE_DATA_FILE=",../../../board_extra.yaml"
# todo: code reuse with manual-generate-meta-data.sh?
export META_OUTPUT_ROOT_FOLDER="../../../generated/"

export AUTOMATION_REF=`git branch --show-current`
cd ext/rusefi/firmware/
bash bin/compile.sh ../../../meta-info.env
