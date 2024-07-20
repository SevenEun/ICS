def get_int(prompt):
    while True:
        # Python will try to get an input from the user, will try to convert it to an integer.
        try:
            return int(input(prompt))
        except ValueError:
            pass


def main():
    x = get_int("x: ")
    y = get_int("y: ")

    print(x + y)


main()