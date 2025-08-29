import random
import numpy as np
def popolation_gen(n):
   population=[]
   for i in range(0,n):
      value = list(l)
      random.shuffle(value)
      population.append(value)
   return population
def fitness_cal(g,popolation):
   fitness=[]
   for i in (popolation):
      temp_fitness=0
      for j in range(len(i)-1):
         temp_fitness=temp_fitness + g[i[j]][i[j+1]]
      fitness.append(1/temp_fitness)
   print(fitness)
   sum_fitness = sum(fitness)
   print(sum_fitness)
   for i in range (len(fitness)):
      fitness[i]=(fitness[i]/sum_fitness)*100
   return fitness
def selection(popolation,fitness):
   selected_popolation=random.choices(popolation,weights=fitness,k=2)
   print(selected_popolation)
   return selected_popolation

def cross_over(selected_popolation):
   parent1=selected_popolation[0]
   parent2 =selected_popolation[1]
   print(parent1)
   print(parent2)
   pos=3
   child=parent1[:pos]+parent2[pos:]
   print(child)
   old_index=[]
   missValue=[]

   for i in range(len(l)):
      if child.count(i)>1:
         print(child.index(i))
         old_index.append(child.index(i))
      elif child.count(i)==0:
         missValue.append(i)
   print(old_index)
   print(missValue)
   for i in range (len(missValue)):
      child[old_index[i]]=missValue[i]
   print(child)

g=[[0,3,4,5,7],
   [2,0,4,6,8],
   [3,2,0,6,2],
   [2,4,3,0,7],
   [3,6,8,9,0]
   ]
l=list(range(0, len(g)))
p=4
print(g)
popolation=popolation_gen(p)
print(popolation)
fitness=fitness_cal(g,popolation)
print(fitness)
selected_popolation=selection(popolation,fitness)
cross_over(selected_popolation)