#!/usr/bin/env bash

if [ "$#" -ne 2 ] || ! [ -f "$1" ] || ! [ -f "$2" ]; then
  echo "Usage: $0 <arch_file> <netlist.json>" >&2
  exit 1
fi

# assume user already have the env activated
place="$(basename "$2" .json).place"
if ! [ -f "$place" ] ; then
    echo "$place not found" >&2
    exit 1
fi

python router.py $1 $2 $place -no-vis
