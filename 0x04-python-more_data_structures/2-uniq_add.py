#!/usr/bin/python3
def uniq_add(my_list=[]):
    plus = 0
    for j in set(my_list):
        plus += j
    return plus
