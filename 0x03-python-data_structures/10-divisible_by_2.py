#!/usr/bin/python3


def divisible_by_2(my_list=[]):
    """multiples of 2."""
    multix = []
    for i in range(len(my_list)):
        if my_list[i] % 2 == 0:
            multix.append(True)
        else:
            multix.append(False)

    return (multix)
