include makeconfig

.PHONY: build run clean

build:
	@$(CC) $(SRC) -o $(OUTPUT)

run:
	@.\$(OUTPUT)

clean:
	@rm -fo .\$(OUTPUT)