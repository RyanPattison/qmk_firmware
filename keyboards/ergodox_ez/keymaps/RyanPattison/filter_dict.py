#!/usr/bin/env python3


"""
filters a dictionary down to a list of word definitions.
"""

import sys
import json

dictionary = json.load(open(sys.argv[1]))
reverse_dict  = dict()
for k, v in dictionary.items():
    reverse_dict[v] = k
words = open(sys.argv[2]).read().split()
filtered = dict()
for word in words:
    if word in reverse_dict:
      filtered[reverse_dict[word]] = word
json.dump(filtered, sys.stdout)
