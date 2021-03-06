/*
 * Copyright (c) 1995-2009, 2015, 2018, 2021 Paul Mattes.
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Paul Mattes nor his contributors may be used
 *       to endorse or promote products derived from this software without
 *       specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY PAUL MATTES "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL PAUL MATTES BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *	status_stubs.c
 *		Stub functions for status.c.
 */

#include "globals.h"

#include "status.h"

void
status_compose(bool on _is_unused, ucs4_t ucs4 _is_unused,
	enum keytype keytype _is_unused)
{
}

void
status_ctlr_done(void)
{
}

void
status_insert_mode(bool on _is_unused)
{
}

void
status_keyboard_disable_flash(void)
{
}

void
status_lu(const char *s _is_unused)
{
}

void
status_minus(void)
{
}

void
status_oerr(int error_type _is_unused)
{
}

void
status_reset(void)
{
}

void
status_reverse_mode(bool on _is_unused)
{
}

void
status_screentrace(int n _is_unused)
{
}

void
status_script(bool on _is_unused)
{
}

void
status_scrolled(int n _is_unused)
{
}

void
status_syswait(void)
{
}

void
status_timing(struct timeval *t0 _is_unused, struct timeval *t1 _is_unused)
{
}

void
status_twait(void)
{
}

void
status_typeahead(bool on _is_unused)
{
}

void
status_untiming(void)
{
}
