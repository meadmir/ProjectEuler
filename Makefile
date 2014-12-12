.PHONY: clean All

All:
	@echo "----------Building project:[ ProjectEuler - Debug ]----------"
	@$(MAKE) -f  "ProjectEuler.mk"
clean:
	@echo "----------Cleaning project:[ ProjectEuler - Debug ]----------"
	@$(MAKE) -f  "ProjectEuler.mk" clean
