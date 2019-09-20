#!/bin/bash
curl --silent 'https://api.ipify.org?format=json' | jq .ip --raw-output
