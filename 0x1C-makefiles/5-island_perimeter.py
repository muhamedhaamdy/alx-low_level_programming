#!/usr/bin/python3
'''Technical interview preparation'''


def island_perimeter(grid):
    '''function to claculate the perimeter of the island'''
    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j]:
                if j+1 >= len(grid[i]):
                    perimeter += 1
                elif not grid[i][j+1]:
                    perimeter += 1
                if j-1 < 0:
                    perimeter += 1
                elif not grid[i][j-1]:
                    perimeter += 1
                if i+1 >= len(grid):
                    perimeter += 1
                elif not grid[i+1][j]:
                    perimeter += 1
                if i-1 < 0:
                    perimeter += 1
                elif not grid[i-1][j]:
                    perimeter += 1
    return perimeter
