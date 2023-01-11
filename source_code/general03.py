# general03.py
#

class Pithari():
    def __init__(self, a, b, c):
        self._num_of_fruits = a
        self._num_of_biscuits = b
        self._num_of_pies = c

    def show_content(self):
        print(self._num_of_fruits, " fruits\n", self._num_of_biscuits, " biscuits\n", self._num_of_pies, " pies\n")

class Pontikaras():
    def __init__(self):
        self._hungry = True
        self._weight = 2    # kilos

# create objects
obj00 = Pithari(50, 86, 12)

obj01 = Pontikaras()
obj01._name = "Mitsaras"


# create a method
def eat_from(self, Pith):
    Pith._num_of_fruits -= 2
    Pith._num_of_biscuits -= 3
    Pith._num_of_pies -= 1

    self._hungry = False
    self._weight += 3

    print("\n", self._name, " just ate from pithos\n")

# add/bound the method to the object
obj01.eat_from = eat_from.__get__(obj01)

print("Pithari before:\n")
obj00.show_content();

# and it works!?!?!???
obj01.eat_from(obj00)

print("Pithari after:\n")
obj00.show_content();
