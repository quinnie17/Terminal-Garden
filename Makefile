CC = clang
CFLAGS = -Wall -g -Iinclude
SRCDIR = src
OBJDIR = build
BINDIR = bin

# Source files
SOURCES = $(wildcard $(SRCDIR)/*.c)
# Object files
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
# Executable name
TARGET = $(BINDIR)/garden

# Default target
all: directories $(TARGET)

# Create necessary directories
directories:
	@mkdir -p $(OBJDIR) $(BINDIR) saves

# Link
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -rf $(OBJDIR) $(BINDIR)

# Run
run: all
	./$(TARGET)

.PHONY: all clean directories run