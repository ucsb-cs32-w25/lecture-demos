# cs32kart-no-ns
This is the version without using any namespace.

## Instuctions for cs32kart
- To get executable for cs32kart with aimove and graphics: `make cs32kart`
    - Linking `aimove.h` and `graphics.h` works fine.
- To run: `./cs32kart`

## Instuctions for cs32kart2
- To get executable for cs32kart with aimove2 and graphics: `make cs32kart2`.
    - Linking `aimove2.h` and `graphics.h` causes a duplicate symbol link error due to both headers having the function `void compute()`.