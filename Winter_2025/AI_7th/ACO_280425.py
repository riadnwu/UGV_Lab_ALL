import random
def population_gen(n):
    population=[]
    for i in range(n):
        temp_l = [0, 1, 2, 3, 4]
        random.shuffle(temp_l)
        population.append(temp_l)
    print(population)
    return population
def phermeon_cal():
    fitness=[0]*n

    for i in range(n):
        for j in range(len(l)-1):
            index1=population[i][j]
            index2 = population[i][j+1]
            fitness[i]=fitness[i]+g[index1][index2]
        fitness[i] =1/fitness[i]
    print(fitness)
    for i in range(n):
        for j in range(len(l) - 1):
            index1 = population[i][j]
            index2 = population[i][j + 1]
            phermeon[index1][index2]= phermeon[index1][index2]+ fitness[i]
    print(phermeon)
    return phermeon
def new_ant_gen():
    for i in range (n):
        old_population=population[i]
        population[i]=[]
        present_city = old_population[0]
        population[i].append(present_city)
        old_population.remove(present_city)
        print(old_population)
        while len(old_population)>0:
            temp_value=[]
            for j in old_population:
                temp_value.append(phermeon[present_city][j]*(1/g[present_city][j]))
            total_temp=sum(temp_value)
            for j in range (len(temp_value)):
                temp_value[j]=temp_value[j]/total_temp
            present_city = random.choices(old_population, weights=temp_value)[0]
            old_population.remove(present_city)
            population[i].append(int(present_city))
        print(population[i])
        print('----------------')

def best_root():
    fitness = [0] * n
    for i in range(n):
        for j in range(len(l)-1):
            index1=population[i][j]
            index2 = population[i][j+1]
            fitness[i]=fitness[i]+g[index1][index2]
    print(min(fitness))
    index_min=fitness.index(min(fitness))
    print(population[index_min])


g=[[0,30,4,5,60],
   [2,0,5,8,9],
   [4,5,0,30,19],
   [20,3,5,0,47],
   [70,2,3,4,0],
   ]
print(g)
#  A B C D E
city=5
phermeon=[[0]*city]*city
l=[0,1,2,3,4]
n=4
population=population_gen(n)
for i in range(50):
    phermeon=phermeon_cal()
    new_ant_gen()
    best_root()