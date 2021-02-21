def get_dataset():
    with open("dataset.in", "r") as myFile:
        unsorted_list = []
        for text in myFile:
            singleLine = text.strip()
            words = singleLine.split()
            number = int(words[0])
            words[0] = number
            unsorted_list.append(words)
        sorted_list = sorted(unsorted_list, reverse=True)
        return sorted_list

def find_ingredients_of_best_pizza():
    pizzas = get_dataset()
    b = []
    for i in range(0,len(pizzas)):
        pizzas[i].pop(0)
        b.append(pizzas[i])
    ingredients = []
    for i in range(0,len(b[0])):
        ingredients.append(b[0][i])
    return ingredients

def count():
    ingredients_1 = sorted(find_ingredients_of_best_pizza())
    pizzas = get_dataset()
    ingredients = []
    for i in range(0, len(pizzas)):
        pizzas[i].pop(0)
        ingredients.append(sorted(pizzas[i]))
    # print(ingredients_1)
    # print(ingredients)
    for i in ingredients:
        for j in ingredients_1:
            if j in i:
                print(i,j,"true")
            else:
                print(i,j,"false")
count()