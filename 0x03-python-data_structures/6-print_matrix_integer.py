#!/usr/bin/python3


def print_matrix_integer(matrix=[[]]):
    for  p in range(len(matrix)):
        for p in range(len(matrix[ p])):
            print("{:d}".format(matrix[p][j]), end="")
            if j != (len(matrix[p]) - 1):
                print(" ", end="")

        print("")
