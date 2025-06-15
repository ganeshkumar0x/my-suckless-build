#!/bin/sh

DIRS="dmenu dwm slock slstatus st"

for dir in $DIRS; do
    if [ -d "$dir" ]; then
        echo "Building $dir..."
        sudo make -C "$dir" clean install
    else
        echo "Warning: Directory '$dir' not found, skipping..."
    fi
done

echo "All builds completed."
