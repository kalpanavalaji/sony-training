
/* autogenerated from gstgaudieffectsorc.orc */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include <glib.h>

#ifndef _ORC_INTEGER_TYPEDEFS_
#define _ORC_INTEGER_TYPEDEFS_
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <stdint.h>
typedef int8_t orc_int8;
typedef int16_t orc_int16;
typedef int32_t orc_int32;
typedef int64_t orc_int64;
typedef uint8_t orc_uint8;
typedef uint16_t orc_uint16;
typedef uint32_t orc_uint32;
typedef uint64_t orc_uint64;
#define ORC_UINT64_C(x) UINT64_C(x)
#elif defined(_MSC_VER)
typedef signed __int8 orc_int8;
typedef signed __int16 orc_int16;
typedef signed __int32 orc_int32;
typedef signed __int64 orc_int64;
typedef unsigned __int8 orc_uint8;
typedef unsigned __int16 orc_uint16;
typedef unsigned __int32 orc_uint32;
typedef unsigned __int64 orc_uint64;
#define ORC_UINT64_C(x) (x##Ui64)
#define inline __inline
#else
#include <limits.h>
typedef signed char orc_int8;
typedef short orc_int16;
typedef int orc_int32;
typedef unsigned char orc_uint8;
typedef unsigned short orc_uint16;
typedef unsigned int orc_uint32;
#if INT_MAX == LONG_MAX
typedef long long orc_int64;
typedef unsigned long long orc_uint64;
#define ORC_UINT64_C(x) (x##ULL)
#else
typedef long orc_int64;
typedef unsigned long orc_uint64;
#define ORC_UINT64_C(x) (x##UL)
#endif
#endif
typedef union { orc_int16 i; orc_int8 x2[2]; } orc_union16;
typedef union { orc_int32 i; float f; orc_int16 x2[2]; orc_int8 x4[4]; } orc_union32;
typedef union { orc_int64 i; double f; orc_int32 x2[2]; float x2f[2]; orc_int16 x4[4]; } orc_union64;
#endif
#ifndef ORC_RESTRICT
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define ORC_RESTRICT restrict
#elif defined(__GNUC__) && __GNUC__ >= 4
#define ORC_RESTRICT __restrict__
#else
#define ORC_RESTRICT
#endif
#endif

#ifndef ORC_INTERNAL
#if defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#define ORC_INTERNAL __attribute__((visibility("hidden")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x550)
#define ORC_INTERNAL __hidden
#elif defined (__GNUC__)
#define ORC_INTERNAL __attribute__((visibility("hidden")))
#else
#define ORC_INTERNAL
#endif
#endif


#ifndef DISABLE_ORC
#include <orc/orc.h>
#endif
void gaudi_orc_burn (guint32 * ORC_RESTRICT d1, const guint32 * ORC_RESTRICT s1, int p1, int n);


/* begin Orc C target preamble */
#define ORC_CLAMP(x,a,b) ((x)<(a) ? (a) : ((x)>(b) ? (b) : (x)))
#define ORC_ABS(a) ((a)<0 ? -(a) : (a))
#define ORC_MIN(a,b) ((a)<(b) ? (a) : (b))
#define ORC_MAX(a,b) ((a)>(b) ? (a) : (b))
#define ORC_SB_MAX 127
#define ORC_SB_MIN (-1-ORC_SB_MAX)
#define ORC_UB_MAX (orc_uint8) 255
#define ORC_UB_MIN 0
#define ORC_SW_MAX 32767
#define ORC_SW_MIN (-1-ORC_SW_MAX)
#define ORC_UW_MAX (orc_uint16)65535
#define ORC_UW_MIN 0
#define ORC_SL_MAX 2147483647
#define ORC_SL_MIN (-1-ORC_SL_MAX)
#define ORC_UL_MAX 4294967295U
#define ORC_UL_MIN 0
#define ORC_CLAMP_SB(x) ORC_CLAMP(x,ORC_SB_MIN,ORC_SB_MAX)
#define ORC_CLAMP_UB(x) ORC_CLAMP(x,ORC_UB_MIN,ORC_UB_MAX)
#define ORC_CLAMP_SW(x) ORC_CLAMP(x,ORC_SW_MIN,ORC_SW_MAX)
#define ORC_CLAMP_UW(x) ORC_CLAMP(x,ORC_UW_MIN,ORC_UW_MAX)
#define ORC_CLAMP_SL(x) ORC_CLAMP(x,ORC_SL_MIN,ORC_SL_MAX)
#define ORC_CLAMP_UL(x) ORC_CLAMP(x,ORC_UL_MIN,ORC_UL_MAX)
#define ORC_SWAP_W(x) ((((x)&0xffU)<<8) | (((x)&0xff00U)>>8))
#define ORC_SWAP_L(x) ((((x)&0xffU)<<24) | (((x)&0xff00U)<<8) | (((x)&0xff0000U)>>8) | (((x)&0xff000000U)>>24))
#define ORC_SWAP_Q(x) ((((x)&ORC_UINT64_C(0xff))<<56) | (((x)&ORC_UINT64_C(0xff00))<<40) | (((x)&ORC_UINT64_C(0xff0000))<<24) | (((x)&ORC_UINT64_C(0xff000000))<<8) | (((x)&ORC_UINT64_C(0xff00000000))>>8) | (((x)&ORC_UINT64_C(0xff0000000000))>>24) | (((x)&ORC_UINT64_C(0xff000000000000))>>40) | (((x)&ORC_UINT64_C(0xff00000000000000))>>56))
#define ORC_PTR_OFFSET(ptr,offset) ((void *)(((unsigned char *)(ptr)) + (offset)))
#define ORC_DENORMAL(x) ((x) & ((((x)&0x7f800000) == 0) ? 0xff800000 : 0xffffffff))
#define ORC_ISNAN(x) ((((x)&0x7f800000) == 0x7f800000) && (((x)&0x007fffff) != 0))
#define ORC_DENORMAL_DOUBLE(x) ((x) & ((((x)&ORC_UINT64_C(0x7ff0000000000000)) == 0) ? ORC_UINT64_C(0xfff0000000000000) : ORC_UINT64_C(0xffffffffffffffff)))
#define ORC_ISNAN_DOUBLE(x) ((((x)&ORC_UINT64_C(0x7ff0000000000000)) == ORC_UINT64_C(0x7ff0000000000000)) && (((x)&ORC_UINT64_C(0x000fffffffffffff)) != 0))
#ifndef ORC_RESTRICT
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define ORC_RESTRICT restrict
#elif defined(__GNUC__) && __GNUC__ >= 4
#define ORC_RESTRICT __restrict__
#else
#define ORC_RESTRICT
#endif
#endif
/* end Orc C target preamble */



/* gaudi_orc_burn */
#ifdef DISABLE_ORC
void
gaudi_orc_burn (guint32 * ORC_RESTRICT d1, const guint32 * ORC_RESTRICT s1, int p1, int n){
  int i;
  orc_union32 * ORC_RESTRICT ptr0;
  const orc_union32 * ORC_RESTRICT ptr4;
  orc_union32 var35;
  orc_union64 var36;
#if defined(__APPLE__) && __GNUC__ == 4 && __GNUC_MINOR__ == 2 && defined (__i386__) 
  volatile orc_union32 var37;
#else
  orc_union32 var37;
#endif
#if defined(__APPLE__) && __GNUC__ == 4 && __GNUC_MINOR__ == 2 && defined (__i386__) 
  volatile orc_union64 var38;
#else
  orc_union64 var38;
#endif
  orc_union32 var39;
  orc_union64 var40;
  orc_union64 var41;
  orc_union64 var42;
  orc_union32 var43;
  orc_union64 var44;
  orc_union64 var45;
  orc_union64 var46;
  orc_union64 var47;
  orc_union32 var48;

  ptr0 = (orc_union32 *)d1;
  ptr4 = (orc_union32 *)s1;

    /* 3: loadpw */
    var36.x4[0] = p1;
    var36.x4[1] = p1;
    var36.x4[2] = p1;
    var36.x4[3] = p1;
    /* 6: loadpb */
    var37.x4[0] = 0x000000ff; /* 255 or 1.25987e-321f */
    var37.x4[1] = 0x000000ff; /* 255 or 1.25987e-321f */
    var37.x4[2] = 0x000000ff; /* 255 or 1.25987e-321f */
    var37.x4[3] = 0x000000ff; /* 255 or 1.25987e-321f */
    /* 11: loadpw */
    var38.x4[0] = 0x000000ff; /* 255 or 1.25987e-321f */
    var38.x4[1] = 0x000000ff; /* 255 or 1.25987e-321f */
    var38.x4[2] = 0x000000ff; /* 255 or 1.25987e-321f */
    var38.x4[3] = 0x000000ff; /* 255 or 1.25987e-321f */

  for (i = 0; i < n; i++) {
    /* 0: loadl */
    var35 = ptr4[i];
    /* 1: copyb */
    var39.x4[0] = var35.x4[0];
    var39.x4[1] = var35.x4[1];
    var39.x4[2] = var35.x4[2];
    var39.x4[3] = var35.x4[3];
    /* 2: convubw */
    var40.x4[0] = (orc_uint8)var39.x4[0];
    var40.x4[1] = (orc_uint8)var39.x4[1];
    var40.x4[2] = (orc_uint8)var39.x4[2];
    var40.x4[3] = (orc_uint8)var39.x4[3];
    /* 4: addw */
    var41.x4[0] = var40.x4[0] + var36.x4[0];
    var41.x4[1] = var40.x4[1] + var36.x4[1];
    var41.x4[2] = var40.x4[2] + var36.x4[2];
    var41.x4[3] = var40.x4[3] + var36.x4[3];
    /* 5: shruw */
    var42.x4[0] = ((orc_uint16)var41.x4[0]) >> 1;
    var42.x4[1] = ((orc_uint16)var41.x4[1]) >> 1;
    var42.x4[2] = ((orc_uint16)var41.x4[2]) >> 1;
    var42.x4[3] = ((orc_uint16)var41.x4[3]) >> 1;
    /* 7: subb */
    var43.x4[0] = var37.x4[0] - var39.x4[0];
    var43.x4[1] = var37.x4[1] - var39.x4[1];
    var43.x4[2] = var37.x4[2] - var39.x4[2];
    var43.x4[3] = var37.x4[3] - var39.x4[3];
    /* 8: convubw */
    var44.x4[0] = (orc_uint8)var43.x4[0];
    var44.x4[1] = (orc_uint8)var43.x4[1];
    var44.x4[2] = (orc_uint8)var43.x4[2];
    var44.x4[3] = (orc_uint8)var43.x4[3];
    /* 9: shlw */
    var45.x4[0] = ((orc_uint16)var44.x4[0]) << 7;
    var45.x4[1] = ((orc_uint16)var44.x4[1]) << 7;
    var45.x4[2] = ((orc_uint16)var44.x4[2]) << 7;
    var45.x4[3] = ((orc_uint16)var44.x4[3]) << 7;
    /* 10: divluw */
    var46.x4[0] = ((var42.x4[0]&0xff) == 0) ? 255 : ORC_CLAMP_UB(((orc_uint16)var45.x4[0])/((orc_uint16)var42.x4[0]&0xff));
    var46.x4[1] = ((var42.x4[1]&0xff) == 0) ? 255 : ORC_CLAMP_UB(((orc_uint16)var45.x4[1])/((orc_uint16)var42.x4[1]&0xff));
    var46.x4[2] = ((var42.x4[2]&0xff) == 0) ? 255 : ORC_CLAMP_UB(((orc_uint16)var45.x4[2])/((orc_uint16)var42.x4[2]&0xff));
    var46.x4[3] = ((var42.x4[3]&0xff) == 0) ? 255 : ORC_CLAMP_UB(((orc_uint16)var45.x4[3])/((orc_uint16)var42.x4[3]&0xff));
    /* 12: subw */
    var47.x4[0] = var38.x4[0] - var46.x4[0];
    var47.x4[1] = var38.x4[1] - var46.x4[1];
    var47.x4[2] = var38.x4[2] - var46.x4[2];
    var47.x4[3] = var38.x4[3] - var46.x4[3];
    /* 13: convwb */
    var48.x4[0] = var47.x4[0];
    var48.x4[1] = var47.x4[1];
    var48.x4[2] = var47.x4[2];
    var48.x4[3] = var47.x4[3];
    /* 14: storel */
    ptr0[i] = var48;
  }

}

#else
static void
_backup_gaudi_orc_burn (OrcExecutor * ORC_RESTRICT ex)
{
  int i;
  int n = ex->n;
  orc_union32 * ORC_RESTRICT ptr0;
  const orc_union32 * ORC_RESTRICT ptr4;
  orc_union32 var35;
  orc_union64 var36;
#if defined(__APPLE__) && __GNUC__ == 4 && __GNUC_MINOR__ == 2 && defined (__i386__) 
  volatile orc_union32 var37;
#else
  orc_union32 var37;
#endif
#if defined(__APPLE__) && __GNUC__ == 4 && __GNUC_MINOR__ == 2 && defined (__i386__) 
  volatile orc_union64 var38;
#else
  orc_union64 var38;
#endif
  orc_union32 var39;
  orc_union64 var40;
  orc_union64 var41;
  orc_union64 var42;
  orc_union32 var43;
  orc_union64 var44;
  orc_union64 var45;
  orc_union64 var46;
  orc_union64 var47;
  orc_union32 var48;

  ptr0 = (orc_union32 *)ex->arrays[0];
  ptr4 = (orc_union32 *)ex->arrays[4];

    /* 3: loadpw */
    var36.x4[0] = ex->params[24];
    var36.x4[1] = ex->params[24];
    var36.x4[2] = ex->params[24];
    var36.x4[3] = ex->params[24];
    /* 6: loadpb */
    var37.x4[0] = 0x000000ff; /* 255 or 1.25987e-321f */
    var37.x4[1] = 0x000000ff; /* 255 or 1.25987e-321f */
    var37.x4[2] = 0x000000ff; /* 255 or 1.25987e-321f */
    var37.x4[3] = 0x000000ff; /* 255 or 1.25987e-321f */
    /* 11: loadpw */
    var38.x4[0] = 0x000000ff; /* 255 or 1.25987e-321f */
    var38.x4[1] = 0x000000ff; /* 255 or 1.25987e-321f */
    var38.x4[2] = 0x000000ff; /* 255 or 1.25987e-321f */
    var38.x4[3] = 0x000000ff; /* 255 or 1.25987e-321f */

  for (i = 0; i < n; i++) {
    /* 0: loadl */
    var35 = ptr4[i];
    /* 1: copyb */
    var39.x4[0] = var35.x4[0];
    var39.x4[1] = var35.x4[1];
    var39.x4[2] = var35.x4[2];
    var39.x4[3] = var35.x4[3];
    /* 2: convubw */
    var40.x4[0] = (orc_uint8)var39.x4[0];
    var40.x4[1] = (orc_uint8)var39.x4[1];
    var40.x4[2] = (orc_uint8)var39.x4[2];
    var40.x4[3] = (orc_uint8)var39.x4[3];
    /* 4: addw */
    var41.x4[0] = var40.x4[0] + var36.x4[0];
    var41.x4[1] = var40.x4[1] + var36.x4[1];
    var41.x4[2] = var40.x4[2] + var36.x4[2];
    var41.x4[3] = var40.x4[3] + var36.x4[3];
    /* 5: shruw */
    var42.x4[0] = ((orc_uint16)var41.x4[0]) >> 1;
    var42.x4[1] = ((orc_uint16)var41.x4[1]) >> 1;
    var42.x4[2] = ((orc_uint16)var41.x4[2]) >> 1;
    var42.x4[3] = ((orc_uint16)var41.x4[3]) >> 1;
    /* 7: subb */
    var43.x4[0] = var37.x4[0] - var39.x4[0];
    var43.x4[1] = var37.x4[1] - var39.x4[1];
    var43.x4[2] = var37.x4[2] - var39.x4[2];
    var43.x4[3] = var37.x4[3] - var39.x4[3];
    /* 8: convubw */
    var44.x4[0] = (orc_uint8)var43.x4[0];
    var44.x4[1] = (orc_uint8)var43.x4[1];
    var44.x4[2] = (orc_uint8)var43.x4[2];
    var44.x4[3] = (orc_uint8)var43.x4[3];
    /* 9: shlw */
    var45.x4[0] = ((orc_uint16)var44.x4[0]) << 7;
    var45.x4[1] = ((orc_uint16)var44.x4[1]) << 7;
    var45.x4[2] = ((orc_uint16)var44.x4[2]) << 7;
    var45.x4[3] = ((orc_uint16)var44.x4[3]) << 7;
    /* 10: divluw */
    var46.x4[0] = ((var42.x4[0]&0xff) == 0) ? 255 : ORC_CLAMP_UB(((orc_uint16)var45.x4[0])/((orc_uint16)var42.x4[0]&0xff));
    var46.x4[1] = ((var42.x4[1]&0xff) == 0) ? 255 : ORC_CLAMP_UB(((orc_uint16)var45.x4[1])/((orc_uint16)var42.x4[1]&0xff));
    var46.x4[2] = ((var42.x4[2]&0xff) == 0) ? 255 : ORC_CLAMP_UB(((orc_uint16)var45.x4[2])/((orc_uint16)var42.x4[2]&0xff));
    var46.x4[3] = ((var42.x4[3]&0xff) == 0) ? 255 : ORC_CLAMP_UB(((orc_uint16)var45.x4[3])/((orc_uint16)var42.x4[3]&0xff));
    /* 12: subw */
    var47.x4[0] = var38.x4[0] - var46.x4[0];
    var47.x4[1] = var38.x4[1] - var46.x4[1];
    var47.x4[2] = var38.x4[2] - var46.x4[2];
    var47.x4[3] = var38.x4[3] - var46.x4[3];
    /* 13: convwb */
    var48.x4[0] = var47.x4[0];
    var48.x4[1] = var47.x4[1];
    var48.x4[2] = var47.x4[2];
    var48.x4[3] = var47.x4[3];
    /* 14: storel */
    ptr0[i] = var48;
  }

}

void
gaudi_orc_burn (guint32 * ORC_RESTRICT d1, const guint32 * ORC_RESTRICT s1, int p1, int n)
{
  OrcExecutor _ex, *ex = &_ex;
  static volatile int p_inited = 0;
  static OrcCode *c = 0;
  void (*func) (OrcExecutor *);

  if (!p_inited) {
    orc_once_mutex_lock ();
    if (!p_inited) {
      OrcProgram *p;

#if 1
      static const orc_uint8 bc[] = {
        1, 9, 14, 103, 97, 117, 100, 105, 95, 111, 114, 99, 95, 98, 117, 114, 
        110, 11, 4, 4, 12, 4, 4, 14, 1, 255, 0, 0, 0, 14, 1, 7, 
        0, 0, 0, 14, 1, 1, 0, 0, 0, 16, 4, 20, 4, 20, 8, 20, 
        8, 21, 2, 42, 32, 4, 21, 2, 150, 33, 32, 21, 2, 70, 34, 33, 
        24, 21, 2, 95, 34, 34, 18, 21, 2, 65, 32, 16, 32, 21, 2, 150, 
        33, 32, 21, 2, 93, 33, 33, 17, 21, 2, 81, 33, 33, 34, 21, 2, 
        98, 33, 16, 33, 21, 2, 157, 32, 33, 128, 0, 32, 2, 0, 
      };
      p = orc_program_new_from_static_bytecode (bc);
      orc_program_set_backup_function (p, _backup_gaudi_orc_burn);
#else
      p = orc_program_new ();
      orc_program_set_name (p, "gaudi_orc_burn");
      orc_program_set_backup_function (p, _backup_gaudi_orc_burn);
      orc_program_add_destination (p, 4, "d1");
      orc_program_add_source (p, 4, "s1");
      orc_program_add_constant (p, 1, 0x000000ff, "c1");
      orc_program_add_constant (p, 1, 0x00000007, "c2");
      orc_program_add_constant (p, 1, 0x00000001, "c3");
      orc_program_add_parameter (p, 4, "p1");
      orc_program_add_temporary (p, 4, "t1");
      orc_program_add_temporary (p, 8, "t2");
      orc_program_add_temporary (p, 8, "t3");

      orc_program_append_2 (p, "copyb", 2, ORC_VAR_T1, ORC_VAR_S1, ORC_VAR_D1, ORC_VAR_D1);
      orc_program_append_2 (p, "convubw", 2, ORC_VAR_T2, ORC_VAR_T1, ORC_VAR_D1, ORC_VAR_D1);
      orc_program_append_2 (p, "addw", 2, ORC_VAR_T3, ORC_VAR_T2, ORC_VAR_P1, ORC_VAR_D1);
      orc_program_append_2 (p, "shruw", 2, ORC_VAR_T3, ORC_VAR_T3, ORC_VAR_C3, ORC_VAR_D1);
      orc_program_append_2 (p, "subb", 2, ORC_VAR_T1, ORC_VAR_C1, ORC_VAR_T1, ORC_VAR_D1);
      orc_program_append_2 (p, "convubw", 2, ORC_VAR_T2, ORC_VAR_T1, ORC_VAR_D1, ORC_VAR_D1);
      orc_program_append_2 (p, "shlw", 2, ORC_VAR_T2, ORC_VAR_T2, ORC_VAR_C2, ORC_VAR_D1);
      orc_program_append_2 (p, "divluw", 2, ORC_VAR_T2, ORC_VAR_T2, ORC_VAR_T3, ORC_VAR_D1);
      orc_program_append_2 (p, "subw", 2, ORC_VAR_T2, ORC_VAR_C1, ORC_VAR_T2, ORC_VAR_D1);
      orc_program_append_2 (p, "convwb", 2, ORC_VAR_T1, ORC_VAR_T2, ORC_VAR_D1, ORC_VAR_D1);
      orc_program_append_2 (p, "storel", 0, ORC_VAR_D1, ORC_VAR_T1, ORC_VAR_D1, ORC_VAR_D1);
#endif

      orc_program_compile (p);
      c = orc_program_take_code (p);
      orc_program_free (p);
    }
    p_inited = TRUE;
    orc_once_mutex_unlock ();
  }
  ex->arrays[ORC_VAR_A2] = c;
  ex->program = 0;

  ex->n = n;
  ex->arrays[ORC_VAR_D1] = d1;
  ex->arrays[ORC_VAR_S1] = (void *)s1;
  ex->params[ORC_VAR_P1] = p1;

  func = c->exec;
  func (ex);
}
#endif


