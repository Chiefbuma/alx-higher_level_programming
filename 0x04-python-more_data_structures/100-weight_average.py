#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list and len(my_list):
        nmn = 0
        kml = 0
        for tup in my_list:
            nmn += (tup[0] * tup[1])
            kml += tup[1]
        return (nmn / kml)
    return 0
