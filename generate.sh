#!/usr/bin/env bash

echo "Generating Simbotic Sandbox project files"
echo "----------------------"
"$SIMBOTIC_ENGINE"/GenerateProjectFiles.sh -project="$SIMBOTIC_SANDBOX"/Sandbox.uproject -game -engine -Makefile -vscode
