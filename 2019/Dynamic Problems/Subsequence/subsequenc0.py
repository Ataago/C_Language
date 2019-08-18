# Find all subsequences

problem = "abc"

def subsets(problem, solution):
    if not problem:
        print(solution)
        return

    subsets(problem[1:], solution)
    subsets(problem[1:], solution + problem[0])

subsets(problem, "")

