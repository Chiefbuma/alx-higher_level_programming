#!/usr/bin/python3
""" Module appends to a text file
"""


def append_write(filename="", text=""):
    """ Function to a text file

    Args:
        filename: filename
        text: text to write

    Raises
        Exception: can be opened

    """

    with open(filename, 'a', encoding="utf-8") as f:
        return f.write(text)
