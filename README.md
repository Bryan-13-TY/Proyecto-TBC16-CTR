# Proyecto-TBC16-CTR
Proyecto TBC16-CTR (Cifrador por bloques de 16 bits con el modo de operación CTR), desarrollado durante el periodo 2026/2 para la optativa de Introduction to Cryptography de la Escuela Superior de Cómputo (ESCOM-IPN) con la profesora Díaz Santiago Sandra.

## Operaciones
- Crear una llave de 2 bytes codificada en Base64.
- Crear una Caja de Sustitución (S-Box) de 8 bits.
- Crear una Permutación (P-Box) de tamaño 8.
- Cifrar un texto por bloques de 16 bits con el modo de operación CTR y codificarlo en Base64.
- Descifrar un texto codificado en Base64 por bloques de 16 bits con el modo de operación CTR.

## Estructura del proyecto
```
Proyecto-TBC16-CTR
├── data/
├── docs/
│   ├── _01projectTBC_introcrypto_20260518.pdf
│   ├── _lab07_introcrypto_20260416b 2.pdf
│   ├── _lab08_introcrypto_20260423.pdf
│   └──  _lab09_introcrypto_20260430.pdf
├── include/
│   ├── ctr_crypto.h
│   ├── ctr_status.h
│   └── utils_crypto.h
├── src/
│   ├── ctr_crypto.c
│   ├── ctr_status.c
│   ├── main.c
│   └── utils_crypto.c
├── gitignore
├── Makefile
└── README.md
```
