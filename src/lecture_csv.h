//
// Created by loic on 08/01/2022.
//

#ifndef REV_PARTY_LECTURE_CSV_H
#define REV_PARTY_LECTURE_CSV_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"
#include "utils_sd.h"

void lecture_csv(char* filename, char * delimiteur, int * nb_ligne, int * nb_col,  t_mat_char_star_dyn * matrice);

#endif //REV_PARTY_LECTURE_CSV_H