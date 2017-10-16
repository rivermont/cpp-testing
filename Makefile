all_targets: clean

clean:
	find . -name "*.out" -delete

help:
	@echo "    clean"
	@echo "        Remove compiled artifacts."
