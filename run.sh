#!/bin/sh
set -e

./build.sh
clear


# run first executable found

BIN=$(find build -maxdepth 2 -type f -executable | head -n 1)

[ -z "$BIN" ] && echo "No executable found" && exit 1

"$BIN"
