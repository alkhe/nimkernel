/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/usr/lib/nim -o /home/chronize/Documents/projects/nimkernel/nimcache/strutils.o /home/chronize/Documents/projects/nimkernel/nimcache/strutils.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct valueerror3249 valueerror3249;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45135 tcell45135;
typedef struct tcellseq45151 tcellseq45151;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45147 tcellset45147;
typedef struct tpagedesc45143 tpagedesc45143;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TY76068[32];
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  valueerror3249  {
  Exception Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell45135  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45151  {
NI Len;
NI Cap;
tcell45135** D;
};
struct  tcellset45147  {
NI Counter;
NI Max;
tpagedesc45143* Head;
tpagedesc45143** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45151 Zct;
tcellseq45151 Decstack;
tcellset45147 Cycleroots;
tcellseq45151 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
typedef NimStringDesc* TY96973[1];
typedef NI TY26620[8];
struct  tpagedesc45143  {
tpagedesc45143* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY76068 chars, NI start);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75028, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, nsuAddf)(NimStringDesc** s, NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NOINLINE(void, invalidformatstring_96673)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, findnormalized_96640)(NimStringDesc* x, NimStringDesc** inarray, NI inarrayLen0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static NIM_CONST TY76068 TMP264 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP330, "invalid format string", 21);
STRING_LITERAL(TMP348, "", 0);
extern TFrame* frameptr_16242;
extern TNimType NTI21601; /* ref ValueError */
extern TNimType NTI3249; /* ValueError */
extern tgcheap47216 gch_47244;

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_16242 == NIM_NIL)) goto LA4;
		LOC1 = 0;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_16242).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_16242;
	frameptr_16242 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_18801();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_16242 = (*frameptr_16242).prev;
}

N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x, NI minchars) {
	NimStringDesc* result;
	nimfr("intToStr", "strutils.nim")
	result = 0;
	nimln(410, "strutils.nim");
	nimln(410, "strutils.nim");
	nimln(410, "strutils.nim");
	if (x == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = nimIntToStr((x > 0? (x) : -(x)));
	{
		NI i_93626;
		NI HEX3Atmp_93629;
		NI TMP173;
		NI res_93632;
		i_93626 = 0;
		HEX3Atmp_93629 = 0;
		nimln(411, "strutils.nim");
		nimln(411, "strutils.nim");
		nimln(411, "strutils.nim");
		TMP173 = subInt(minchars, result->Sup.len);
		HEX3Atmp_93629 = (NI64)(TMP173);
		nimln(1576, "system.nim");
		res_93632 = 1;
		{
			nimln(1577, "system.nim");
			while (1) {
				NimStringDesc* LOC4;
				nimln(1577, "system.nim");
				if (!(res_93632 <= HEX3Atmp_93629)) goto LA3;
				nimln(1576, "system.nim");
				i_93626 = res_93632;
				nimln(412, "strutils.nim");
				nimln(412, "strutils.nim");
				LOC4 = 0;
				LOC4 = rawNewString(result->Sup.len + 1);
appendChar(LOC4, 48);
appendString(LOC4, result);
				result = LOC4;
				nimln(1579, "system.nim");
				res_93632 = addInt(res_93632, 1);
			} LA3: ;
		}
	}
	nimln(413, "strutils.nim");
	{
		NimStringDesc* LOC9;
		nimln(413, "strutils.nim");
		if (!(x < 0)) goto LA7;
		nimln(414, "strutils.nim");
		nimln(414, "strutils.nim");
		LOC9 = 0;
		LOC9 = rawNewString(result->Sup.len + 1);
appendChar(LOC9, 45);
appendString(LOC9, result);
		result = LOC9;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c) {
	NimStringDesc* result;
	nimfr("repeatChar", "strutils.nim")
	result = 0;
	nimln(512, "strutils.nim");
	nimln(512, "strutils.nim");
	result = mnewString(count);
	{
		NI i_93993;
		NI HEX3Atmp_93995;
		NI TMP234;
		NI res_93998;
		i_93993 = 0;
		HEX3Atmp_93995 = 0;
		nimln(513, "strutils.nim");
		nimln(513, "strutils.nim");
		TMP234 = subInt(count, 1);
		HEX3Atmp_93995 = (NI64)(TMP234);
		nimln(1576, "system.nim");
		res_93998 = 0;
		{
			nimln(1577, "system.nim");
			while (1) {
				nimln(1577, "system.nim");
				if (!(res_93998 <= HEX3Atmp_93995)) goto LA3;
				nimln(1576, "system.nim");
				i_93993 = res_93998;
				nimln(513, "strutils.nim");
				if ((NU)(i_93993) > (NU)(result->Sup.len)) raiseIndexError();
				result->data[i_93993] = c;
				nimln(1579, "system.nim");
				res_93998 = addInt(res_93998, 1);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY76068 chars, NI start) {
	NI result;
	nimfr("find", "strutils.nim")
	result = 0;
	{
		NI i_94947;
		NI HEX3Atmp_94962;
		NI TMP263;
		NI res_94965;
		i_94947 = 0;
		HEX3Atmp_94962 = 0;
		nimln(787, "strutils.nim");
		nimln(787, "strutils.nim");
		nimln(787, "strutils.nim");
		TMP263 = subInt(s->Sup.len, 1);
		HEX3Atmp_94962 = (NI64)(TMP263);
		nimln(1576, "system.nim");
		res_94965 = start;
		{
			nimln(1577, "system.nim");
			while (1) {
				nimln(1577, "system.nim");
				if (!(res_94965 <= HEX3Atmp_94962)) goto LA3;
				nimln(1576, "system.nim");
				i_94947 = res_94965;
				nimln(788, "strutils.nim");
				{
					nimln(788, "strutils.nim");
					if ((NU)(i_94947) > (NU)(s->Sup.len)) raiseIndexError();
					if (!((chars[((NU8)(s->data[i_94947]))/8] &(1<<(((NU8)(s->data[i_94947]))%8)))!=0)) goto LA6;
					nimln(788, "strutils.nim");
					nimln(788, "strutils.nim");
					result = i_94947;
					goto BeforeRet;
				}
				LA6: ;
				nimln(1579, "system.nim");
				res_94965 = addInt(res_94965, 1);
			} LA3: ;
		}
	}
	nimln(789, "strutils.nim");
	nimln(789, "strutils.nim");
	result = -1;
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, quoteifcontainswhite_95234)(NimStringDesc* s) {
	NimStringDesc* result;
	nimfr("quoteIfContainsWhite", "strutils.nim")
	result = 0;
	nimln(852, "strutils.nim");
	{
		NIM_BOOL LOC3;
		NI LOC4;
		NimStringDesc* LOC8;
		nimln(852, "strutils.nim");
		LOC3 = 0;
		nimln(852, "strutils.nim");
		nimln(852, "strutils.nim");
		LOC4 = 0;
		LOC4 = nsuFindCharSet(s, TMP264, 0);
		LOC3 = (0 <= LOC4);
		if (!(LOC3)) goto LA5;
		nimln(852, "strutils.nim");
		nimln(852, "strutils.nim");
		if ((NU)(0) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = !(((NU8)(s->data[0]) == (NU8)(34)));
		LA5: ;
		if (!LOC3) goto LA6;
		nimln(853, "strutils.nim");
		nimln(853, "strutils.nim");
		LOC8 = 0;
		LOC8 = rawNewString(s->Sup.len + 2);
appendChar(LOC8, 34);
appendString(LOC8, s);
appendChar(LOC8, 34);
		result = LOC8;
	}
	goto LA1;
	LA6: ;
	{
		nimln(855, "strutils.nim");
		result = copyString(s);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing) {
	NimStringDesc* result;
	NI first;
	NI last;
	NI TMP269;
	nimfr("strip", "strutils.nim")
	result = 0;
	nimln(181, "strutils.nim");
	first = 0;
	nimln(182, "strutils.nim");
	nimln(182, "strutils.nim");
	nimln(182, "strutils.nim");
	TMP269 = subInt(s->Sup.len, 1);
	last = (NI64)(TMP269);
	nimln(183, "strutils.nim");
	{
		if (!leading) goto LA3;
		{
			nimln(184, "strutils.nim");
			while (1) {
				nimln(184, "strutils.nim");
				if ((NU)(first) > (NU)(s->Sup.len)) raiseIndexError();
				if (!(((NU8)(s->data[first])) == ((NU8)(32)) || ((NU8)(s->data[first])) == ((NU8)(9)) || ((NU8)(s->data[first])) == ((NU8)(11)) || ((NU8)(s->data[first])) == ((NU8)(13)) || ((NU8)(s->data[first])) == ((NU8)(10)) || ((NU8)(s->data[first])) == ((NU8)(12)))) goto LA6;
				nimln(184, "strutils.nim");
				first = addInt(first, 1);
			} LA6: ;
		}
	}
	LA3: ;
	nimln(185, "strutils.nim");
	{
		if (!trailing) goto LA9;
		{
			nimln(186, "strutils.nim");
			while (1) {
				NIM_BOOL LOC13;
				nimln(186, "strutils.nim");
				LOC13 = 0;
				nimln(186, "strutils.nim");
				LOC13 = (0 <= last);
				if (!(LOC13)) goto LA14;
				nimln(186, "strutils.nim");
				if ((NU)(last) > (NU)(s->Sup.len)) raiseIndexError();
				LOC13 = (((NU8)(s->data[last])) == ((NU8)(32)) || ((NU8)(s->data[last])) == ((NU8)(9)) || ((NU8)(s->data[last])) == ((NU8)(11)) || ((NU8)(s->data[last])) == ((NU8)(13)) || ((NU8)(s->data[last])) == ((NU8)(10)) || ((NU8)(s->data[last])) == ((NU8)(12)));
				LA14: ;
				if (!LOC13) goto LA12;
				nimln(186, "strutils.nim");
				last = subInt(last, 1);
			} LA12: ;
		}
	}
	LA9: ;
	nimln(187, "strutils.nim");
	nimln(187, "strutils.nim");
	result = copyStrLast(s, first, last);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix) {
	NIM_BOOL result;
	NI i;
	nimfr("startsWith", "strutils.nim")
	result = 0;
	nimln(644, "strutils.nim");
	i = 0;
	{
		nimln(645, "strutils.nim");
		while (1) {
			nimln(646, "strutils.nim");
			{
				nimln(646, "strutils.nim");
				if ((NU)(i) > (NU)(prefix->Sup.len)) raiseIndexError();
				if (!((NU8)(prefix->data[i]) == (NU8)(0))) goto LA5;
				nimln(646, "strutils.nim");
				nimln(646, "strutils.nim");
				result = NIM_TRUE;
				goto BeforeRet;
			}
			LA5: ;
			nimln(647, "strutils.nim");
			{
				nimln(647, "strutils.nim");
				nimln(647, "strutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if ((NU)(i) > (NU)(prefix->Sup.len)) raiseIndexError();
				if (!!(((NU8)(s->data[i]) == (NU8)(prefix->data[i])))) goto LA9;
				nimln(647, "strutils.nim");
				nimln(647, "strutils.nim");
				result = NIM_FALSE;
				goto BeforeRet;
			}
			LA9: ;
			nimln(648, "strutils.nim");
			i = addInt(i, 1);
		}
	}
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start) {
	NI result;
	nimfr("find", "strutils.nim")
	result = 0;
	{
		NI i_94908;
		NI HEX3Atmp_94910;
		NI TMP317;
		NI res_94913;
		i_94908 = 0;
		HEX3Atmp_94910 = 0;
		nimln(778, "strutils.nim");
		nimln(778, "strutils.nim");
		nimln(778, "strutils.nim");
		TMP317 = subInt(s->Sup.len, 1);
		HEX3Atmp_94910 = (NI64)(TMP317);
		nimln(1576, "system.nim");
		res_94913 = start;
		{
			nimln(1577, "system.nim");
			while (1) {
				nimln(1577, "system.nim");
				if (!(res_94913 <= HEX3Atmp_94910)) goto LA3;
				nimln(1576, "system.nim");
				i_94908 = res_94913;
				nimln(779, "strutils.nim");
				{
					nimln(779, "strutils.nim");
					if ((NU)(i_94908) > (NU)(s->Sup.len)) raiseIndexError();
					if (!((NU8)(sub) == (NU8)(s->data[i_94908]))) goto LA6;
					nimln(779, "strutils.nim");
					nimln(779, "strutils.nim");
					result = i_94908;
					goto BeforeRet;
				}
				LA6: ;
				nimln(1579, "system.nim");
				res_94913 = addInt(res_94913, 1);
			} LA3: ;
		}
	}
	nimln(780, "strutils.nim");
	nimln(780, "strutils.nim");
	result = -1;
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c) {
	NIM_CHAR result;
	nimfr("toLower", "strutils.nim")
	result = 0;
	nimln(69, "strutils.nim");
	{
		NI TMP327;
		nimln(69, "strutils.nim");
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3;
		nimln(70, "strutils.nim");
		nimln(70, "strutils.nim");
		nimln(70, "strutils.nim");
		nimln(70, "strutils.nim");
		TMP327 = addInt(((NI) (((NU8)(c)))), 32);
		result = ((NIM_CHAR) (((NI)chckRange((NI64)(TMP327), 0, 255))));
	}
	goto LA1;
	LA3: ;
	{
		nimln(72, "strutils.nim");
		result = c;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* s) {
	NimStringDesc* result;
	nimfr("toLower", "strutils.nim")
	result = 0;
	nimln(81, "strutils.nim");
	nimln(81, "strutils.nim");
	nimln(81, "strutils.nim");
	result = mnewString(s->Sup.len);
	{
		NI i_92094;
		NI HEX3Atmp_92096;
		NI TMP326;
		NI res_92099;
		i_92094 = 0;
		HEX3Atmp_92096 = 0;
		nimln(82, "strutils.nim");
		nimln(82, "strutils.nim");
		nimln(82, "strutils.nim");
		TMP326 = subInt(s->Sup.len, 1);
		HEX3Atmp_92096 = (NI64)(TMP326);
		nimln(1576, "system.nim");
		res_92099 = 0;
		{
			nimln(1577, "system.nim");
			while (1) {
				nimln(1577, "system.nim");
				if (!(res_92099 <= HEX3Atmp_92096)) goto LA3;
				nimln(1576, "system.nim");
				i_92094 = res_92099;
				nimln(83, "strutils.nim");
				if ((NU)(i_92094) > (NU)(result->Sup.len)) raiseIndexError();
				if ((NU)(i_92094) > (NU)(s->Sup.len)) raiseIndexError();
				result->data[i_92094] = nsuToLowerChar(s->data[i_92094]);
				nimln(1579, "system.nim");
				res_92099 = addInt(res_92099, 1);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

static N_INLINE(tcell45135*, usrtocell_48846)(void* usr) {
	tcell45135* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell45135*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45135))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45135* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_48817((&gch_47244.Zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45135* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_48846(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_50404(c);
	}
	LA3: ;
	popFrame();
}

N_NOINLINE(void, invalidformatstring_96673)(void) {
	valueerror3249* e_96677;
	NimStringDesc* LOC1;
	nimfr("invalidFormatString", "strutils.nim")
	e_96677 = 0;
	nimln(2149, "system.nim");
	e_96677 = (valueerror3249*) newObj((&NTI21601), sizeof(valueerror3249));
	(*e_96677).Sup.Sup.m_type = (&NTI3249);
	nimln(2150, "system.nim");
	LOC1 = 0;
	LOC1 = (*e_96677).Sup.message; (*e_96677).Sup.message = copyStringRC1(((NimStringDesc*) &TMP330));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(1264, "strutils.nim");
	raiseException((Exception*)e_96677, "ValueError");
	popFrame();
}

N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpIgnoreStyle", "strutils.nim")
	result = 0;
	i = 0;
	j = 0;
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			{
				while (1) {
					if (!((NU8)(a->data[i]) == (NU8)(95))) goto LA4;
					i += 1;
				} LA4: ;
			}
			{
				while (1) {
					if (!((NU8)(b->data[j]) == (NU8)(95))) goto LA6;
					j += 1;
				} LA6: ;
			}
			aa = nsuToLowerChar(a->data[i]);
			bb = nsuToLowerChar(b->data[j]);
			result = (NI64)(((NI) (((NU8)(aa)))) - ((NI) (((NU8)(bb)))));
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = !((result == 0));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(aa) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			LA11: ;
			i += 1;
			j += 1;
		}
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, findnormalized_96640)(NimStringDesc* x, NimStringDesc** inarray, NI inarrayLen0) {
	NI result;
	NI i;
	nimfr("findNormalized", "strutils.nim")
	result = 0;
	nimln(1256, "strutils.nim");
	i = 0;
	{
		nimln(1257, "strutils.nim");
		while (1) {
			nimln(1257, "strutils.nim");
			nimln(1257, "strutils.nim");
			if (!(i < (inarrayLen0-1))) goto LA2;
			nimln(1258, "strutils.nim");
			{
				NI LOC5;
				nimln(1258, "strutils.nim");
				nimln(1258, "strutils.nim");
				if ((NU)(i) >= (NU)(inarrayLen0)) raiseIndexError();
				LOC5 = 0;
				LOC5 = nsuCmpIgnoreStyle(x, inarray[i]);
				if (!(LOC5 == 0)) goto LA6;
				nimln(1258, "strutils.nim");
				nimln(1258, "strutils.nim");
				result = i;
				goto BeforeRet;
			}
			LA6: ;
			nimln(1259, "strutils.nim");
			i = addInt(i, 2);
		} LA2: ;
	}
	nimln(1261, "strutils.nim");
	nimln(1261, "strutils.nim");
	result = -1;
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, nsuAddf)(NimStringDesc** s, NimStringDesc* formatstr, NimStringDesc** a, NI aLen0) {
	NI i;
	NI num;
	nimfr("addf", "strutils.nim")
	nimln(1270, "strutils.nim");
	i = 0;
	nimln(1271, "strutils.nim");
	num = 0;
	{
		nimln(1272, "strutils.nim");
		while (1) {
			nimln(1272, "strutils.nim");
			nimln(1272, "strutils.nim");
			if (!(i < formatstr->Sup.len)) goto LA2;
			nimln(1273, "strutils.nim");
			{
				NI TMP329;
				nimln(1273, "strutils.nim");
				if ((NU)(i) > (NU)(formatstr->Sup.len)) raiseIndexError();
				if (!((NU8)(formatstr->data[i]) == (NU8)(36))) goto LA5;
				nimln(1274, "strutils.nim");
				nimln(1274, "strutils.nim");
				TMP329 = addInt(i, 1);
				if ((NU)((NI64)(TMP329)) > (NU)(formatstr->Sup.len)) raiseIndexError();
				switch (((NU8)(formatstr->data[(NI64)(TMP329)]))) {
				case 35:
				{
					nimln(1277, "strutils.nim");
					{
						nimln(1277, "strutils.nim");
						nimln(1277, "strutils.nim");
						if (!((NU64)((aLen0-1)) < (NU64)(num))) goto LA10;
						nimln(1277, "strutils.nim");
						invalidformatstring_96673();
					}
					LA10: ;
					nimln(1278, "strutils.nim");
					if ((NU)(num) >= (NU)(aLen0)) raiseIndexError();
					(*s) = resizeString((*s), a[num]->Sup.len + 0);
appendString((*s), a[num]);
					nimln(1279, "strutils.nim");
					i = addInt(i, 2);
					nimln(1280, "strutils.nim");
					num = addInt(num, 1);
				}
				break;
				case 36:
				{
					nimln(1282, "strutils.nim");
					(*s) = addChar((*s), 36);
					nimln(1283, "strutils.nim");
					i = addInt(i, 2);
				}
				break;
				case 49 ... 57:
				case 45:
				{
					NI j;
					NIM_BOOL negative;
					NI idx;
					nimln(1285, "strutils.nim");
					j = 0;
					nimln(1286, "strutils.nim");
					i = addInt(i, 1);
					nimln(1287, "strutils.nim");
					nimln(1287, "strutils.nim");
					if ((NU)(i) > (NU)(formatstr->Sup.len)) raiseIndexError();
					negative = ((NU8)(formatstr->data[i]) == (NU8)(45));
					nimln(1288, "strutils.nim");
					{
						if (!negative) goto LA16;
						nimln(1288, "strutils.nim");
						i = addInt(i, 1);
					}
					LA16: ;
					{
						nimln(1289, "strutils.nim");
						while (1) {
							NI TMP331;
							NI TMP332;
							NI TMP333;
							nimln(1289, "strutils.nim");
							if ((NU)(i) > (NU)(formatstr->Sup.len)) raiseIndexError();
							if (!(((NU8)(formatstr->data[i])) >= ((NU8)(48)) && ((NU8)(formatstr->data[i])) <= ((NU8)(57)))) goto LA19;
							nimln(1290, "strutils.nim");
							nimln(1290, "strutils.nim");
							nimln(1290, "strutils.nim");
							nimln(1290, "strutils.nim");
							TMP331 = mulInt(j, 10);
							nimln(1290, "strutils.nim");
							if ((NU)(i) > (NU)(formatstr->Sup.len)) raiseIndexError();
							TMP332 = addInt((NI64)(TMP331), ((NI) (((NU8)(formatstr->data[i])))));
							TMP333 = subInt((NI64)(TMP332), 48);
							j = (NI64)(TMP333);
							nimln(1291, "strutils.nim");
							i = addInt(i, 1);
						} LA19: ;
					}
					nimln(1292, "strutils.nim");
					nimln(1292, "strutils.nim");
					{
						NI TMP334;
						nimln(1292, "strutils.nim");
						if (!!(negative)) goto LA22;
						nimln(1292, "strutils.nim");
						TMP334 = subInt(j, 1);
						idx = (NI64)(TMP334);
					}
					goto LA20;
					LA22: ;
					{
						NI TMP335;
						nimln(1292, "strutils.nim");
						nimln(1292, "strutils.nim");
						TMP335 = subInt(aLen0, j);
						idx = (NI64)(TMP335);
					}
					LA20: ;
					nimln(1293, "strutils.nim");
					{
						nimln(1293, "strutils.nim");
						nimln(1293, "strutils.nim");
						if (!((NU64)((aLen0-1)) < (NU64)(idx))) goto LA27;
						nimln(1293, "strutils.nim");
						invalidformatstring_96673();
					}
					LA27: ;
					nimln(1294, "strutils.nim");
					if ((NU)(idx) >= (NU)(aLen0)) raiseIndexError();
					(*s) = resizeString((*s), a[idx]->Sup.len + 0);
appendString((*s), a[idx]);
				}
				break;
				case 123:
				{
					NI j;
					NI TMP336;
					NI x;
					NI TMP337;
					NI TMP338;
					NimStringDesc* LOC32;
					NI TMP340;
					nimln(1296, "strutils.nim");
					nimln(1296, "strutils.nim");
					TMP336 = addInt(i, 1);
					j = (NI64)(TMP336);
					{
						nimln(1297, "strutils.nim");
						while (1) {
							nimln(1297, "strutils.nim");
							nimln(1297, "strutils.nim");
							if ((NU)(j) > (NU)(formatstr->Sup.len)) raiseIndexError();
							if (!!((((NU8)(formatstr->data[j])) == ((NU8)(0)) || ((NU8)(formatstr->data[j])) == ((NU8)(125))))) goto LA31;
							nimln(1297, "strutils.nim");
							j = addInt(j, 1);
						} LA31: ;
					}
					nimln(1298, "strutils.nim");
					nimln(1298, "strutils.nim");
					nimln(1298, "strutils.nim");
					TMP337 = addInt(i, 2);
					nimln(1298, "strutils.nim");
					TMP338 = subInt(j, 1);
					LOC32 = 0;
					LOC32 = copyStrLast(formatstr, (NI64)(TMP337), (NI64)(TMP338));
					x = findnormalized_96640(LOC32, a, aLen0);
					nimln(1299, "strutils.nim");
					{
						NIM_BOOL LOC35;
						NI TMP339;
						nimln(1299, "strutils.nim");
						LOC35 = 0;
						nimln(1299, "strutils.nim");
						LOC35 = (0 <= x);
						if (!(LOC35)) goto LA36;
						nimln(1299, "strutils.nim");
						nimln(1299, "strutils.nim");
						LOC35 = (x < (aLen0-1));
						LA36: ;
						if (!LOC35) goto LA37;
						nimln(1299, "strutils.nim");
						nimln(1299, "strutils.nim");
						TMP339 = addInt(x, 1);
						if ((NU)((NI64)(TMP339)) >= (NU)(aLen0)) raiseIndexError();
						(*s) = resizeString((*s), a[(NI64)(TMP339)]->Sup.len + 0);
appendString((*s), a[(NI64)(TMP339)]);
					}
					goto LA33;
					LA37: ;
					{
						nimln(1300, "strutils.nim");
						invalidformatstring_96673();
					}
					LA33: ;
					nimln(1301, "strutils.nim");
					nimln(1301, "strutils.nim");
					TMP340 = addInt(j, 1);
					i = (NI64)(TMP340);
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j;
					NI TMP341;
					NI x;
					NI TMP342;
					NI TMP343;
					NimStringDesc* LOC43;
					nimln(1303, "strutils.nim");
					nimln(1303, "strutils.nim");
					TMP341 = addInt(i, 1);
					j = (NI64)(TMP341);
					{
						nimln(1304, "strutils.nim");
						while (1) {
							nimln(1304, "strutils.nim");
							if ((NU)(j) > (NU)(formatstr->Sup.len)) raiseIndexError();
							if (!(((NU8)(formatstr->data[j])) >= ((NU8)(97)) && ((NU8)(formatstr->data[j])) <= ((NU8)(122)) || ((NU8)(formatstr->data[j])) >= ((NU8)(65)) && ((NU8)(formatstr->data[j])) <= ((NU8)(90)) || ((NU8)(formatstr->data[j])) >= ((NU8)(48)) && ((NU8)(formatstr->data[j])) <= ((NU8)(57)) || ((NU8)(formatstr->data[j])) >= ((NU8)(128)) && ((NU8)(formatstr->data[j])) <= ((NU8)(255)) || ((NU8)(formatstr->data[j])) == ((NU8)(95)))) goto LA42;
							nimln(1304, "strutils.nim");
							j = addInt(j, 1);
						} LA42: ;
					}
					nimln(1305, "strutils.nim");
					nimln(1305, "strutils.nim");
					nimln(1305, "strutils.nim");
					TMP342 = addInt(i, 1);
					nimln(1305, "strutils.nim");
					TMP343 = subInt(j, 1);
					LOC43 = 0;
					LOC43 = copyStrLast(formatstr, (NI64)(TMP342), (NI64)(TMP343));
					x = findnormalized_96640(LOC43, a, aLen0);
					nimln(1306, "strutils.nim");
					{
						NIM_BOOL LOC46;
						NI TMP344;
						nimln(1306, "strutils.nim");
						LOC46 = 0;
						nimln(1306, "strutils.nim");
						LOC46 = (0 <= x);
						if (!(LOC46)) goto LA47;
						nimln(1306, "strutils.nim");
						nimln(1306, "strutils.nim");
						LOC46 = (x < (aLen0-1));
						LA47: ;
						if (!LOC46) goto LA48;
						nimln(1306, "strutils.nim");
						nimln(1306, "strutils.nim");
						TMP344 = addInt(x, 1);
						if ((NU)((NI64)(TMP344)) >= (NU)(aLen0)) raiseIndexError();
						(*s) = resizeString((*s), a[(NI64)(TMP344)]->Sup.len + 0);
appendString((*s), a[(NI64)(TMP344)]);
					}
					goto LA44;
					LA48: ;
					{
						nimln(1307, "strutils.nim");
						invalidformatstring_96673();
					}
					LA44: ;
					nimln(1308, "strutils.nim");
					i = j;
				}
				break;
				default:
				{
					nimln(1310, "strutils.nim");
					invalidformatstring_96673();
				}
				break;
				}
			}
			goto LA3;
			LA5: ;
			{
				nimln(1312, "strutils.nim");
				if ((NU)(i) > (NU)(formatstr->Sup.len)) raiseIndexError();
				(*s) = addChar((*s), formatstr->data[i]);
				nimln(1313, "strutils.nim");
				i = addInt(i, 1);
			}
			LA3: ;
		} LA2: ;
	}
	popFrame();
}

N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a) {
	NimStringDesc* result;
	NI TMP328;
	TY96973 LOC1;
	nimfr("%", "strutils.nim")
	result = 0;
	nimln(1363, "strutils.nim");
	nimln(1363, "strutils.nim");
	nimln(1363, "strutils.nim");
	nimln(1363, "strutils.nim");
	nimln(1363, "strutils.nim");
	TMP328 = addInt(formatstr->Sup.len, a->Sup.len);
	result = rawNewString((NI64)(TMP328));
	nimln(1364, "strutils.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(a);
	nsuAddf((&result), formatstr, LOC1, 1);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep) {
	NimStringDesc* result;
	nimfr("join", "strutils.nim")
	result = 0;
	nimln(719, "strutils.nim");
	{
		NI l;
		NI TMP346;
		NI TMP347;
		nimln(719, "strutils.nim");
		nimln(719, "strutils.nim");
		if (!(0 < aLen0)) goto LA3;
		nimln(720, "strutils.nim");
		nimln(720, "strutils.nim");
		nimln(720, "strutils.nim");
		nimln(720, "strutils.nim");
		nimln(720, "strutils.nim");
		TMP346 = subInt(aLen0, 1);
		TMP347 = mulInt(sep->Sup.len, (NI64)(TMP346));
		l = (NI64)(TMP347);
		{
			NI i_94597;
			NI HEX3Atmp_94622;
			NI res_94625;
			i_94597 = 0;
			HEX3Atmp_94622 = 0;
			nimln(721, "strutils.nim");
			nimln(721, "strutils.nim");
			HEX3Atmp_94622 = (aLen0-1);
			nimln(1576, "system.nim");
			res_94625 = 0;
			{
				nimln(1577, "system.nim");
				while (1) {
					nimln(1577, "system.nim");
					if (!(res_94625 <= HEX3Atmp_94622)) goto LA7;
					nimln(1576, "system.nim");
					i_94597 = res_94625;
					nimln(721, "strutils.nim");
					nimln(721, "strutils.nim");
					if ((NU)(i_94597) >= (NU)(aLen0)) raiseIndexError();
					l = addInt(l, a[i_94597]->Sup.len);
					nimln(1579, "system.nim");
					res_94625 = addInt(res_94625, 1);
				} LA7: ;
			}
		}
		nimln(722, "strutils.nim");
		nimln(722, "strutils.nim");
		result = rawNewString(l);
		nimln(723, "strutils.nim");
		if ((NU)(0) >= (NU)(aLen0)) raiseIndexError();
		result = resizeString(result, a[0]->Sup.len + 0);
appendString(result, a[0]);
		{
			NI i_94620;
			NI HEX3Atmp_94628;
			NI res_94631;
			i_94620 = 0;
			HEX3Atmp_94628 = 0;
			nimln(724, "strutils.nim");
			nimln(724, "strutils.nim");
			HEX3Atmp_94628 = (aLen0-1);
			nimln(1576, "system.nim");
			res_94631 = 1;
			{
				nimln(1577, "system.nim");
				while (1) {
					nimln(1577, "system.nim");
					if (!(res_94631 <= HEX3Atmp_94628)) goto LA10;
					nimln(1576, "system.nim");
					i_94620 = res_94631;
					nimln(725, "strutils.nim");
					result = resizeString(result, sep->Sup.len + 0);
appendString(result, sep);
					nimln(726, "strutils.nim");
					if ((NU)(i_94620) >= (NU)(aLen0)) raiseIndexError();
					result = resizeString(result, a[i_94620]->Sup.len + 0);
appendString(result, a[i_94620]);
					nimln(1579, "system.nim");
					res_94631 = addInt(res_94631, 1);
				} LA10: ;
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		nimln(728, "strutils.nim");
		result = copyString(((NimStringDesc*) &TMP348));
	}
	LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_strutilsInit)(void) {
	nimfr("strutils", "strutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_strutilsDatInit)(void) {
}

