#!/usr/bin/python3
"""Defines island perimeter measuring function."""


def island_perimeter(grid):
    """
    Return perimiter of island

    Grid represents water with 0 and land with 1.

    Args:
        grid (list): List of int(s) representing island(s).
    Returns:
        Perimeter of island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2