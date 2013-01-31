FLAGS = '-Wall -Wextra -pedantic -Wstrict-prototypes -Werror -std=c99'
env = Environment(CCFLAGS=FLAGS)

make = env.Program(target='clix', source=['lix.c'])

Default(make)
