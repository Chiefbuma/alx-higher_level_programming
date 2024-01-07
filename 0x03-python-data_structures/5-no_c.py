#!/usr/bin/python3
def no_c(my_string):
    nyStr = ""
    for let in my_string:
        if (let != 'c' and let != 'C'):
            nyStr += let
    return (nyStr)
