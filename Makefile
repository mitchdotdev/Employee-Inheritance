CC = g++
CCFLAGS = -g -Wall
DEPS = dateClass.h employeeClass.h programmerClass.h softwarearchitectClass.h
OBJ = main.o dateClass.o employeeClass.o programmerClass.o softwarearchitectClass.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CCFLAGS)

employeeInheritance_exe: $(OBJ)
	g++ -o $@ $^ $(CCFLAGS)

clean:
	rm *.o employeeInheritance_exe
