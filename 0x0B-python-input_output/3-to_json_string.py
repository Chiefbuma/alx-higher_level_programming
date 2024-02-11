#!/usr/bin/python3
""" Module  object
"""
import json


def to_json_string(my_obj):
    """ Function  of an object

    Args:
        my_obj: object

    Raises:
        Exception: when the object

    """
    return json.dumps(my_obj)
