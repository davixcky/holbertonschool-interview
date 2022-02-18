#!/usr/bin/python3
""" Module for utf-8 utility"""


def validUTF8(data):
    """Check if a list of integers is a valid utf-8 set"""
    result = map(lambda x: x >= 0 and x <= 255, data)
    return all(result)
