#!/usr/bin/python3
"""Grid Island Module: defines a function to calculate island perimeter"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list): A 2D list representing the island.

    Returns:
        int: The perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    landcells = 0
    edges = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                landcells += 1
                if col > 0 and grid[row][col - 1] == 1:
                    edges += 1
                if row > 0 and grid[row - 1][col] == 1:
                    edges += 1

    perimeter = (landcells * 4) - (edges * 2)
    return perimeter
