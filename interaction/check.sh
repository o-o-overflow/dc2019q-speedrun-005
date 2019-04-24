#!/bin/sh -e

RESULT=$(echo "adam" | nc "$1" "$2")
echo "$RESULT" | grep "Fifth time's the charm?"
echo "$RESULT" | grep "Safe, yet again."
echo "$RESULT" | grep "What do you mean this time? "
echo "$RESULT" | grep "Interesting"
echo "$RESULT" | grep "adam"
echo "$RESULT" | grep "food for thought"
