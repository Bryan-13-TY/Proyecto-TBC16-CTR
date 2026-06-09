#include "tbc16_ctr_status.h"
#include <stdio.h>

void show_possible_error(TBC16_CTRStatus tbc16_ctr_status) {
    if (TBC16_CTR_SBOX_OPEN_FILE_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al cargar la S-Box");
    }
    if (TBC16_CTR_SBOX_GENERATION_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al generar y guardar la S-Box");
    } 
    if (TBC16_CTR_SBOX_MEMORY_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al reservar memoria para la S-Box");
    }
    if (TBC16_CTR_KEY_OPEN_FILE_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al cargar la llave");
    } 
    if (TBC16_CTR_KEY_GENERATION_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al generar y guardar la llave");
    } 
    if (TBC16_CTR_KEY_READ_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al leer la llave");
    } 
    if (TBC16_CTR_PBOX_OPEN_FILE_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al cargar la P-Box");
    } 
    if (TBC16_CTR_PBOX_GENERATION_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al generar y guardar la P-Box");
    } 
    if (TBC16_CTR_PBOX_OUT_OF_THE_RANGE_ERROR == tbc16_ctr_status) {
        printf("\n>>> El tamano de la P-Box es incorrecto");
    } 
    if (TBC16_CTR_PBOX_REPEATED_VALUES_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hay valores repetidos en la P-Box");
    } 
    if (TBC16_CTR_CIPHER_OPEN_FILE_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al cargar el ciphertext");
    } 
    if (TBC16_CTR_CIPHER_GENERATION_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al generar y guardar el texto cifrado");
    } 
    if (TBC16_CTR_CIPHER_READ_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error el leer los bloques del ciphertext");
    } 
    if (TBC16_CTR_COUNTER_READ_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al leer el byte alto del contador del modo CTR");
    } 
    if (TBC16_CTR_NUM_BLOCKS_READ_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al leer el numero de bloques del ciphertext");
    }
    if (TBC16_CTR_PLAINT_GET_SIZE_FILE_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al obtener el tamano del archivo con el plaintext");
    }
    if (TBC16_CTR_PLAINT_SIZE_FILE_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error con el tamano del archivo con el plaintext, debe pesar minimo 1 KB");
    }
    if (TBC16_CTR_PLAINT_MEMORY_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al reservar memoria para el plaintext");
    }
    if (TBC16_CTR_PLAINT_OPEN_FILE_ERROR == tbc16_ctr_status) {
        printf("\n>>> Hubo un error al cargar el plaintext");
    }
}
