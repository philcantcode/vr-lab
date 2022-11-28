import angr
import sys

def main(argv):
  path_to_binary = "./crackme" # path of the binary program
  goal_mem_address = 0x004016fc  # hex
  start_mem_address = 0x004016ab # hex

  project = angr.Project(path_to_binary)
  initial_state = project.factory.entry_state(addr=start_mem_address)
  simulation = project.factory.simgr(initial_state)

  simulation.explore(find=goal_mem_address)
  
  if simulation.found:
    solution_state = simulation.found[0]
    solution = solution_state.posix.dumps(sys.stdin.fileno())
    print("[+] Success! Solution is: {}".format(solution.decode("utf-8")))
  
  else:
    raise Exception('Could not find the solution')

if __name__ == '__main__':
  main(sys.argv)