from distutils.core import setup, Extension

setup(
    ext_modules=[Extension("Compass", ["_libpycompass.c"])
)
