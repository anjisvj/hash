initial_data = [[0.75,0.15,-0.50,-0.50],[0.75,0.15, -1,-1],[0.75,0.15,-1.5,-1.5],[1.50,0.30,-1,-1],[1.50,0.30,-1.5,-1.5]]
final_data = [[-0.55,-0.38,0.80,0.03],[-0.98,-0.57,0.73,-0.28],[-1.19,-0.68,0.44,-0.67],[-1.08,-0.81,1.58,0.11],[-1.59,-1.05,1.59,-0.15]]

def total_momentum(record):
  i = 0
  answers = []
  for i in range(0, len(record)):
    answer = ((record[i][0] + record[i][2])**2 + (record[i][1] + record[i][3])**2)**0.5
    answers.append(round(answer,3))
  
  return answers

speed_vectors_1 = [[0.75,0.15,-0.5,-0.5],[0.75,0.15,-0.5,-0.5],[0.75,0.15,-0.5,-0.5],[0.75,0.15,-0.5,-0.5],[0.75,0.15,-0.5,-0.5]]
speed_vectors_2 = [[-0.55,-0.38,0.80,0.03],[-0.98,-0.57,0.36,-0.14],[-1.19,-0.68,0.15,-0.22],[-0.54,-0.4,0.79,0.05],[-0.80,-0.52,0.53,-0.05]]

def total_ke(record):
  i = 0
  answers = []
  masses=[[1,1],[1,2],[1,3],[2,2],[2,3]]
  for i in range(0, len(record)):
    answer = ((record[i][0]**2 + record[i][1]**2)*masses[i][0] + (record[i][2]**2 + record[i][3]**2)*masses[i][1])/2
    answers.append(round(answer,3))
  
  return answers

print("\ninitial momentum",total_momentum(initial_data))
print("final momentum",total_momentum(final_data))
print("\ninitial KE",total_ke(speed_vectors_1))
print("final KE",total_ke(speed_vectors_2))


data_2 = [[0.07,-0.13,0.18,-0.22],[-0.16,-0.23,-0.09,-0.62],[-0.27,-0.28,-0.48,-1.07],[0.14,-0.28,-0.36,-0.42],[-0.12,-0.41,0.12,-0.79]]
speed_vectors_3 = [[0.07,-0.13,-0.22,-0.22],[-0.16,-0.23,-0.05,-0.31],[-0.27,-0.28,-0.16,-0.36],[0.07,-0.14,0.18,-0.21],[-0.06,-0.2,0.04,-0.26]]

print("\ninitial momentum",total_momentum(initial_data))
print("final momentum",total_momentum(data_2))
print("\ninitial KE",total_ke(speed_vectors_1))
print("final KE",total_ke(speed_vectors_3))