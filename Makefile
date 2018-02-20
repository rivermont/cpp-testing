all_targets: clean make

clean:
	find . -name "*.out" -delete

make:
	g++ -o compiled.out main.cpp

help:
	@echo "    clean"
	@echo "        Remove previously compiled artifacts."
	@echo "    make"
	@echo "        Compile main.cpp into compiled.out"
