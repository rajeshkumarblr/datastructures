.PHONY: clean All

All:
	@echo "----------Building project:[ list - Debug ]----------"
	@cd "LinkedList" && "$(MAKE)" -f  "list.mk"
clean:
	@echo "----------Cleaning project:[ list - Debug ]----------"
	@cd "LinkedList" && "$(MAKE)" -f  "list.mk" clean
