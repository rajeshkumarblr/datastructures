.PHONY: clean All

All:
	@echo "----------Building project:[ dsutils - Debug ]----------"
	@cd "dsutils" && $(MAKE) -f  "dsutils.mk"
	@echo "----------Building project:[ bitmanip - Debug ]----------"
	@cd "bitmanip" && $(MAKE) -f  "bitmanip.mk"
clean:
	@echo "----------Cleaning project:[ dsutils - Debug ]----------"
	@cd "dsutils" && $(MAKE) -f  "dsutils.mk"  clean
	@echo "----------Cleaning project:[ bitmanip - Debug ]----------"
	@cd "bitmanip" && $(MAKE) -f  "bitmanip.mk" clean
