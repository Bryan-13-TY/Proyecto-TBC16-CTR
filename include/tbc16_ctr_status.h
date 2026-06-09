#ifndef TBC16_CTR_STATUS_H
#define TBC16_CTR_STATUS_H

/**
 * @enum TCB16_CTRStatus
 * @brief Códigos de error para el TBC16-CTR.
 * 
 * Las funciones para generar una S-Box, P-Box, llave secreta,
 * cifrar y descifrar devuelven uno de estos valores para
 * indicar éxito o el tipo de error ocurrido.
 */
typedef enum {
    TBC16_CTR_OK = 0,                                 /**< Operación exitosa */
    TBC16_CTR_SBOX_OPEN_FILE_ERROR = -1,              /**< Error al abrir el archivo de la S-Box */
    TBC16_CTR_SBOX_GENERATION_ERROR = -2,             /**< Error al generar la S-Box */
    TBC16_CTR_SBOX_MEMORY_ERROR = -3,                 /**< Error al reservar memoria para la S-Box */
    TBC16_CTR_KEY_OPEN_FILE_ERROR = -4,               /**< Error al abrir el archivo de la llave */
    TBC16_CTR_KEY_GENERATION_ERROR = -5,              /**< Error al generar la llave */
    TBC16_CTR_KEY_READ_ERROR = -6,                    /**< Error al leer la llave */
    TBC16_CTR_PBOX_OPEN_FILE_ERROR = -7,              /**< Error al abrir el archivo de la P-Box */
    TBC16_CTR_PBOX_GENERATION_ERROR = -8,             /**< Error al generar la P-Box */
    TBC16_CTR_PBOX_OUT_OF_THE_RANGE_ERROR = -9,       /**< Error con el rango de la P-Box */
    TBC16_CTR_PBOX_REPEATED_VALUES_ERROR = -10,       /**< Error con valores repetidos en la P-Box */
    TBC16_CTR_CIPHER_OPEN_FILE_ERROR = -11,           /**< Error al abrir el archivo del ciphertext */
    TBC16_CTR_CIPHER_GENERATION_ERROR = -12,          /**< Error el generar el ciphertext */
    TBC16_CTR_CIPHER_READ_ERROR = -13,                /**< Error al leer el ciphertext */
    TBC16_CTR_COUNTER_READ_ERROR = -14,               /**< Error al leer el byte alto del contador del modo CTR */
    TBC16_CTR_NUM_BLOCKS_READ_ERROR = -15,            /**< Error al leer el número de bloques en las que se dividio el plaintext */
    TBC16_CTR_PLAINT_GET_SIZE_FILE_ERROR = -16,       /**< Error al obtener el tamaño del archivo con el plaintext */
    TBC16_CTR_PLAINT_SIZE_FILE_ERROR = -17,           /**< Error con el tamaño mínino del archivo con el plaintext */
    TBC16_CTR_PLAINT_MEMORY_ERROR = -18,              /**< Error al reservar memoria para al plaintext */
    TBC16_CTR_PLAINT_OPEN_FILE_ERROR = -19,           /**< Error al abrir el archivo del plaintext */
} TBC16_CTRStatus;

/**
 * @brief Muestra el posible erro de algunas de la funciones para el modo CTR.
 * 
 * @param tbc16_ctr_status Código de error.
 */
void show_error_code(TBC16_CTRStatus tbc16_ctr_status);

#endif /* TBC16_CTR_STATUS_H */
