/*************************************************************
 * Copyright (c) 2006 Shotaro Tsuji
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is	 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *************************************************************/

/* Please send bug reports to
	Shotaro Tsuji
	4-1010,
	Sakasedai 1-chome,
	Takaraduka-si,
	Hyogo-ken,
	665-0024
	Japan
	negi4d41@yahoo.co.jp
*/

#ifndef _MY_SETJMP_H_
#define _MY_SETJMP_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 * シグナルマスク無視しておk？
 *
 * setjmpでレジスタを詰め込んでlongjmpで元に戻すでおk？
 * longjmpの第二引数はjmp_bufのeaxの場所に詰め込まれるらしいお
 *
 * レジスタ一覧
 * EAX EBX ECX EDX ESI EDI EBP ESP EIP EFLAGS DS SS CS ES FS GS
 * 32bitレジスタ16個
 */

#define _JBLEN 16
#define _JBTYPE int
typedef _JBTYPE myjmp_buf[_JBLEN];

#define mysetjmp _mysetjmp
#define mylongjmp _mylongjmp

int _mysetjmp(myjmp_buf);
void _mylongjmp(myjmp_buf, int);

#ifdef __cplusplus
}
#endif

#endif
