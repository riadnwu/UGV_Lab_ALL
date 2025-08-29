#   A B C D E
#   0 1 2 3 4
import random

def population_gen(n):
    population=[]
    for i in range(n):
        l = [0, 1, 2, 3, 4]
        random.shuffle(l)
        population.append(l)
    return population
def fitness_cal():
    fitness=[0]*n
    for i in range(n):
        for j in range(len(l)-1):
            fitness[i]=fitness[i]+ g[population[i][j]][population[i][j+1]]
        fitness[i]=1/fitness[i]
    print(fitness)
    total_fitness = sum(fitness)
    print(total_fitness)
    for i in range(n):
        fitness[i]=fitness[i]/total_fitness
    return fitness

def selection(population,fitness):
    parent=random.choices(population,weights=fitness,k=2)
    print(parent)
    return parent

def corssover(point):
    child=parent[0][:point]+parent[1][point:]
    child=list(child)
    print(child)
    miss_val=[]
    rep_index=[]
    for i in range(len(l)):
        if child.count(i)==0:
            miss_val.append(i)
        elif child.count(i)>1:
            rep_index.append(child.index(i))
    print(miss_val)
    print(rep_index)
    for i in range(len(rep_index)):
        child[rep_index[i]]=miss_val[i]
    print(child)
    return child
def mutation(child):
    random_index= random.sample(l, 2)
    print(random_index[0])
    print(random_index[1])
    temp1=child[random_index[0]]
    temp2=child[random_index[1]]
    child[random_index[0]]=temp2
    child[random_index[1]]=temp1
    print(child)
    return child
g=[[0,3,4,5,6],
   [2,0,5,8,9],
   [4,5,0,3,1],
   [2,3,5,0,4],
   [7,2,3,4,0],
   ]
print(g)

l=[0,1,2,3,4]
n=5
print(l)
population=population_gen(n)
print(population)
m=10
for i in range(m):
    fitness=fitness_cal()
    print(fitness)
    parent=selection(population,fitness)
    point=3
    child=corssover(point)
    child=mutation(child)
    population[0]=child
