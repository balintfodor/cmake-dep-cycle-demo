Dummy project to demonstrate cmake `GLOBAL_DEPENDS_NO_CYCLES` switch.

```
mkdir build; cd build
cmake ..
```

You should get
```
The GLOBAL_DEPENDS_NO_CYCLES global property is enabled, so cyclic dependencies are not allowed even among static libraries.
CMake Generate step failed.  Build files cannot be regenerated correctly.
```
