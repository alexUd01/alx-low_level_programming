#!/usr/bin/python3
"""
A module that contains a function ``def island_perimeter(grid)``
that returns the perimeter of the island describeed in grid
"""


def island_perimeter(grid):
    """ A function that returns the perimeter of the island
    described in grid
    ARGS:
        grid - is a list of list of integers:
            * 0 represents a water zone
            * 1 represents a land zone
            * One cell is a square with side length 1
            * Grid cells are connected horizontally/vertically (not
              diagonally).
            * Grid is rectangular. width and height don't exceed 100

    Grid is completely surounded by water, and there is one island (or
    nothing).
    The island doesn't have 'lakes' (water insode that isn't connected
    to the water around the island).

    Example:
    =======
    alex@xandex-pc:~/0x1C$ cat 5-main.py
    #!/usr/bin/python3

    island_perimeter = __import__('5-island_perimeter').island_perimeter

    if __name__ = '__main__':
        grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
        ]
        print(island_perimeter(grid))

    alex@xandex-pc:~/0x1C$
    alex@xandex-pc:~/0x1C$ ./5-main.py
    12
    alex@xandex-pc:~/0x1C$
    """
    if type(grid) is not list or len(grid) == 0 or len(grid) > 100:
        return 0

    for row in grid:
        if type(row) is not list or len(row) == 0 or len(row) > 100:
            return 0

    breadth = 0

    for row in grid:
        for cell in row:
            if cell == 1:
                breadth += 1
    length = 1
    perimeter = 2 * (length + breadth)
    return perimeter
