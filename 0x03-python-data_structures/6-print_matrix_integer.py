#!/usr/bin/python3


def print_matrix_integer(matrix=[[]]):
    for t in range(len(matrix)):
        for x in range(len(matrix[t])):
            print("{:d}".format(matrix[t][x]), end="")
            if x != (len(matrix[t]) - 1):
                print(" ", end="")

        print("")
