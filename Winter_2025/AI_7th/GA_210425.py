import random
def population_gen(n):
    population=[]
    for i in range(n):
        temp_l = [0, 1, 2, 3, 4]
        random.shuffle(temp_l)
        population.append(temp_l)
    print(population)
    return population
def fitness_cal():
    fitness=[0]*n
    for i in range(n):
        for j in range(len(l)-1):
            fitness[i]=fitness[i]+g[population[i][j]][population[i][j+1]]
        fitness[i] =1/fitness[i]
    print(fitness)
    total_fit=sum(fitness)
    print(total_fit)
    for i in range(n):
        fitness[i]=fitness[i]/total_fit
    print(fitness)
    return fitness
def selection():
    parent=random.choices(population,weights= fitness,k=2)
    print(parent)
    return parent
def crossover(point):
    child=parent[0][:point]+parent[1][point:]
    print(child)
    mis_value=[]
    rep_indx=[]
    for i in range(len(l)):
        if child.count(i)==0:
            mis_value.append(i)
        elif child.count(i)>1:
            rep_indx.append(child.index(i))
    print(mis_value)
    print(rep_indx)
    for i in range(len(mis_value)):
        child[rep_indx[i]]=mis_value[i]
    print(child)
    return child
def mutation():
    m=random.sample(l,2)
    temp1=child[m[0]]
    temp2 = child[m[1]]
    child[m[0]]=temp2
    child[m[1]] = temp1
    print(child)
    return child
g=[[0,3,4,5,6],
   [2,0,5,8,9],
   [4,5,0,3,1],
   [2,3,5,0,4],
   [7,2,3,4,0],
   ]
print(g)
#  A B C D E
l=[0,1,2,3,4]
n=50

population=population_gen(n)
fitness=fitness_cal()
for o in range (50):
    parent=selection()
    point=3
    child=crossover(point)
    child=mutation()
    fitness=fitness_cal()
    min_value=min(fitness)
    print(fitness.index(min_value))
    min_fit=fitness.index(min_value)
    population[min_fit]=child
    fitness = fitness_cal()
    max_value = max(fitness)
    print(fitness.index(max_value))
    max_fit = fitness.index(max_value)
    print(max_value)
    print(population[min_fit])
