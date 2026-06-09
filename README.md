# Proyecto-TBC16-CTR
Proyecto TBC16-CTR (Cifrador por bloques de 16 bits con el modo de operación CTR), desarrollado
durante el periodo 2026/2 para la optativa de Introduction to Cryptography de la Escuela Superior
de Cómputo (ESCOM-IPN) con la profesora Díaz Santiago Sandra.

## Operaciones
- Crear una llave secreta de 2 bytes codificada en Base64.
- Crear una Caja de Sustitución (S-Box) de 8 bits.
- Crear una Permutación (P-Box) de tamaño 8.
- Cifrar un texto por bloques de 16 bits con el modo de operación CTR y codificarlo en Base64.
- Descifrar un texto codificado en Base64 por bloques de 16 bits con el modo de operación CTR.

## 🎯 Características
- ✅ Llave secreta de 2 bytes codificada en Base64 (`key.key`).
- ✅ Caja de sustitución de 8 bits en hexadecimal (`sbox.txt`).
- ✅ Permutación de tamaño 8 (`permutation.txt`).
- ✅ Cifrador por bloques (TBC) de 16 bits con expansión de la llave secreta.
- ✅ Cifrador por bloques con el modo de operación CTR.
- ✅ Codificación/decodificación en Base64 para el ciphertext.
- ✅ Tamaño mínimo de 1 Kb para el plaintext.
- ✅ Manejo de errores con `TBC16_CTRStatus`.

## 📁 Estructura del proyecto
```
Proyecto-TBC16-CTR
├── data/
├── docs/
│   ├── _01projectTBC_introcrypto_20260518.pdf
│   ├── _lab07_introcrypto_20260416b 2.pdf
│   ├── _lab08_introcrypto_20260423.pdf
│   └── _lab09_introcrypto_20260430.pdf
├── include/
│   ├── tbc16_ctr_status.h
│   ├── tbc16_ctr_utils.h
│   └── tbc16_ctr.h
├── src/
│   ├── main.c
│   ├── tbc16_ctr_status.c
│   ├── tbc16_ctr_utils.c
│   └── tbc16_ctr.c
├── gitignore
├── Makefile
└── README.md
```

## ⚠️ Manejo de errores

Todas las funciones públicas devuelven un valor de tipo `TBC16_CTRStatus` a excepción de
`show_error_code` que recibe como parámetro un valor del mismo tipo y muestra el código de
error correspondiente.

### Estados posibles para `TBC16_CTRStatus`
- `TBC16_CTR_OK` - Operación exitosa
- `TBC16_CTR_SBOX_OPEN_FILE_ERROR`- Error al abrir el archivo de la S-Box
- `TBC16_CTR_SBOX_GENERATION_ERROR` - Error al generar la S-Box
- `TBC16_CTR_KEY_OPEN_FILE_ERROR` - Error al abrir el archivo de la llave
- `TBC16_CTR_KEY_GENERATION_ERROR` - Error al generar la llave
- `TBC16_CTR_KEY_READ_ERROR` - Error al leer la llave
- `TBC16_CTR_PBOX_OPEN_FILE_ERROR` - Error al abrir el archivo de la P-Box
- `TBC16_CTR_PBOX_GENERATION_ERROR` - Error al generar la P-Box
- `TBC16_CTR_PBOX_OUT_OF_THE_RANGE_ERROR` - Error con el rango de la P-Box
- `TBC16_CTR_PBOX_REPEATED_VALUES_ERROR` - Error con valores repetidos en la P-Box
- `TBC16_CTR_CIPHER_OPEN_FILE_ERROR` - Error al abrir el archivo del ciphertext
- `TBC16_CTR_CIPHER_GENERATION_ERROR` - Error el generar el ciphertext
- `TBC16_CTR_CIPHER_READ_ERROR` - Error al leer el ciphertext
- `TBC16_CTR_COUNTER_READ_ERROR` - Error al leer el byte alto del contador del modo CTR
- `TBC16_CTR_NUM_BLOCKS_READ_ERROR` - Error al leer el número de bloques en las que se dividio el plaintext
- `TBC16_CTR_PLAINT_GET_SIZE_FILE_ERROR`  -Error al obtener el tamaño del archivo con el plaintext
- `TBC16_CTR_PLAINT_SIZE_FILE_ERROR` - Error con el tamaño mínino del archivo con el plaintext
- `TBC16_CTR_PLAINT_MEMORY_ERROR` - Error al reservar memoria para al plaintext
- `TBC16_CTR_PLAINT_OPEN_FILE_ERROR` - Error al abrir el archivo del plaintext

## 🚀 Uso del cifrador

- Compilar el programa
```
mingw32-make
```
- Correr el programa
```
mingw32-make run
```
- Borrar el ejecutable
```
mingw32-make clean
```
- Guardar estructura del programa
```
mingw32-make tree
```

