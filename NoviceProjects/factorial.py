#!/usr/bin/env python3
"""
Author : Zaki Rucker <zakirucker@mac.com>
Date   : 2023-01-28
Purpose: Play with recursion and print a factorial
"""

import argparse


# --------------------------------------------------
def get_args():
    """Get command-line arguments"""

    parser = argparse.ArgumentParser(
        description='Use recursion to print a factorial',
        formatter_class=argparse.ArgumentDefaultsHelpFormatter)

    parser.add_argument('-f',
                        '--factorial',
                        help='The number to factor up to',
                        metavar='factorial',
                        type=int,
                        default=1)

    return parser.parse_args()


# --------------------------------------------------
def fact(x):
    if x == 1:
        return 1
    else:
        return x * fact(x-1)


# --------------------------------------------------
def main():
    """Make a jazz noise here"""

    args = get_args()
    factorial = args.factorial
    
    print (fact(factorial))


# --------------------------------------------------
if __name__ == '__main__':
    main()
