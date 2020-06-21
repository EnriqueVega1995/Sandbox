#!/usr/bin/env bash

export LD_LIBRARY_PATH=${LIBTORCH}/lib:$LD_LIBRARY_PATH
export GST_PLUGIN_PATH=${SIMBOTIC_TORCH}/target/release:${LIBTORCH}/lib
export RUST_BACKTRACE=1

"$SIMBOTIC_ENGINE"/Engine/Binaries/Linux/UE4Editor "$SIMBOTIC_SANDBOX"/Sandbox.uproject $@
