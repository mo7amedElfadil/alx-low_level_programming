#!/usr/bin/python3
"""
module island_perimeter
returns the perimeter of the island described in grid:
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
"""


def island_perimeter(grid: list) -> int:
    if not grid or not len(grid):
        return 0
    perimeter = 0
    row, col = len(grid), len(grid[0])
    def calc(grid: list, i: int, j: int) -> int:
        perimeter = 0
        if i and not grid[i - 1][j]:
            perimeter += 1
        if j and not grid[i][j - 1]:
            perimeter += 1
        if i < row - 1 and not grid[i + 1][j]:
            perimeter += 1
        if j < col - 1 and not grid[i][j + 1]:
            perimeter += 1
        return perimeter
    for i in range(row):
        for j in range(col):
            if grid[i][j]:
                perimeter += calc(grid, i, j)

    return perimeter


