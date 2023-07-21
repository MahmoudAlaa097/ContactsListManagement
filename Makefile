include makeconfig

.PHONY: build run clean

build:
	@$(CC) $(SRC) -o $(OUTPUT)

run:
	@.\$(OUTPUT)

clean:
	@remove-item -fo E:\Studying\C++\ContactList

