#!/usr/bin/python3

import sys

total_size = 0
i = 0
info_codes = {
    '200': 0,
    '301': 0,
    '400': 0,
    '401': 0,
    '403': 0,
    '404': 0,
    '405': 0,
    '500': 0,
}


def print_data():
    print('File size: {}'.format(int(total_size)))
    for status_code, value in info_codes.items():
        if value == 0:
            continue

        print('{}: {}'.format(status_code, value))

if __name__ == "__main__":
    try:
        while True:
            current_line = sys.stdin.readline().strip()
            tokens = current_line.split(' ')
            current_size, status_code = tokens[-1], tokens[-2]
            total_size += float(current_size)
            info_codes[status_code] += 1
            i += 1

            if i == 10:
                print_data()
                i = 0

    except KeyboardInterrupt:
        print_data()
        sys.stdout.flush()
        raise

    print_data()
