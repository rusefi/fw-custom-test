#!/usr/bin/env bash

# do we need export EXTRA_LIVE_DATA_FILE=",../../../board_extra.yaml" here?
cd ext/rusefi/firmware/
bash bin/compile.sh ../../../meta-info.env
