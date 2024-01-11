#!/usr/bin/python3


def max_integer(my_list=[]):
    """biggest integer."""
    if len(my_list) == 0:
        return (None)

    uge = my_list[0]
    for l in range(len(my_list)):
        if my_list[l] > uge:
            uge = my_list[l]

    return (uge)
