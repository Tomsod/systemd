/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

/***
  This file is part of systemd.

  Copyright 2013 Lennart Poettering
***/

#include <stdbool.h>

bool signature_is_single(const char *s, bool allow_dict_entry);
bool signature_is_pair(const char *s);
bool signature_is_valid(const char *s, bool allow_dict_entry);

int signature_element_length(const char *s, size_t *l);
