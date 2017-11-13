.PHONY: clean All

All:
	@echo "----------Building project:[ dsutils - Debug ]----------"
	@cd "dsutils" && "$(MAKE)" -f  "dsutils.mk"
	@echo "----------Building project:[ Arrays - Debug ]----------"
	@cd "Arrays" && "$(MAKE)" -f  "Arrays.mk"
clean:
	@echo "----------Cleaning project:[ dsutils - Debug ]----------"
	@cd "dsutils" && "$(MAKE)" -f  "dsutils.mk"  clean
	@echo "----------Cleaning project:[ Arrays - Debug ]----------"
	@cd "Arrays" && "$(MAKE)" -f  "Arrays.mk" clean
