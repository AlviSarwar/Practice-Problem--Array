CC      ?= gcc
CFLAGS  ?= -Wall -Wextra -std=c11
SRCS    := $(wildcard *.c)
BINS    := $(patsubst %.c,build/%,$(SRCS))

# Programs that read from stdin get a default answer when run via `make run`.
INPUT_count_occurrences    := 2
INPUT_kth_smallest_element := 3

.PHONY: all run clean

all: $(BINS)

build/%: %.c | build
	$(CC) $(CFLAGS) $< -o $@

build:
	mkdir -p build

run: all
	@for b in $(BINS); do \
		name=$$(basename $$b); \
		echo "== $$name"; \
		case $$name in \
			count_occurrences)    echo $(INPUT_count_occurrences)    | $$b ;; \
			kth_smallest_element) echo $(INPUT_kth_smallest_element) | $$b ;; \
			*) $$b ;; \
		esac; \
		echo; \
	done

clean:
	rm -rf build
