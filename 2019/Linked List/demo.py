# Tower of hanoi
# A B C
moves = 0

def hanoi(n, a, b, c):
    global moves
    if n == 0:
        return

    hanoi(n - 1, a, c, b)
    moves += 1
    print("Step " + str(moves) + ": Move disc " + str(n) + " from " + a + " to " + c)
    hanoi(n - 1, b, a, c)


hanoi(3, "a", "b", "c")
print("number of moves: {}".format(moves))
