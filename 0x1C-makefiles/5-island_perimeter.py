#!/usr/bin/python3
"""calculate the perimeter of an Island"""


def island_perimeter(grid):
    """calculate the perimeter of an island
    variables:

    1 = land area
    0 = water area
    each cell is a square of side lenght 1
    """
    width = 0
    length = 0
    grid_len = len(grid) - 1
    index = 0
    for i in range(grid_len + 1):
        indicator = 0
        curr_width = 0
        for j in grid[i]:
            if j == 1:
                if i == index:
                    length += 1
                    indicator = 1
                    if i + 1 <= grid_len:
                        index = i + 1
                curr_width += 1
        if indicator == 0:
            index += 1
        if curr_width > width:
            width = curr_width
    p_add = length + width
    return 2 * p_add
