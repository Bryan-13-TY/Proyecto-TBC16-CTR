#ifndef TBC16_CTR_H
#define TBC16_CTR_H

#include "tbc16_ctr_status.h"

/**
 * @brief Genera una S-Box de 8 bits.
 * 
 * @return TBC16_CTRStatus Código de estado de la operación.
 */
TBC16_CTRStatus sbox_generator();

/**
 * @brief Genera una llave secreta `K` de 16 bits.
 * 
 * @return TBC16_CTRStatus Código de estado de la operación.
 */
TBC16_CTRStatus secret_key_generator();

/**
 * @brief Genera una P-Box de tamaño 8.
 * 
 * @return TBC16_CTRStatus Código de estado de la operación.
 */
TBC16_CTRStatus pbox_generator();

/**
 * @brief Cifra un texto en bloques de 2 bytes usando el modo CTR.
 * 
 * @param plaintext_filename Archivo con el plaintext.
 * 
 * @return TBC16_CTRStatus Código de estado de la operación.
 */
TBC16_CTRStatus encrypt_ctr(char plaintext_filename[]);

/**
 * @brief Descifra un texto en bloques de 2 bytes usando el modo CTR.
 * 
 * @param ciphertext_filename Archivo con el ciphertext.
 * 
 * @return TBC16_CTRStatus Código de estado de la operación.
 */
TBC16_CTRStatus decrypt_ctr(char ciphertext_filename[]);

#endif /* TBC16_CTR_H */
