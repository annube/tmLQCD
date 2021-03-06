#ifndef OVERLAPTESTS_INCLUDE_GUARD
#define OVERLAPTESTS_INCLUDE_GUARD

void ov_check_operator(int t, int x, int y, int z);
void ov_check_locality();
void ov_check_ginsparg_wilson_relation(void);
void ov_check_ginsparg_wilson_relation_strong(void);
void ov_compare_4x4(const char * pFileName);
void ov_compare_12x12(const char * pFileName);
void ov_save_12x12(const char * pFileName);

typedef complex matrix4x4[4][4];
typedef complex matrix12x12[12][12];

#define _spinor_norm_l1(d,s) \
   d = 0.; \
   d = _complex_norm((s).s0.c0) + _complex_norm((s).s0.c1) + \
       _complex_norm((s).s0.c2) + _complex_norm((s).s1.c0) + \
       _complex_norm((s).s1.c1) + _complex_norm((s).s1.c2) + \
       _complex_norm((s).s2.c0) + _complex_norm((s).s2.c1) + \
       _complex_norm((s).s2.c2) + _complex_norm((s).s3.c0) + \
       _complex_norm((s).s3.c1) + _complex_norm((s).s3.c2)


#endif
