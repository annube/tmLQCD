/***********************************************************************
 * Copyright (C) 2006 Thomas Chiarappa
 *
 * This file is part of tmLQCD.
 *
 * tmLQCD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * tmLQCD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with tmLQCD.  If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************/
/*******************************************************************************
 *
 *   void diff(spinor * const Q,spinor * const R,spinor * const S)
 *     Makes the difference (*Q) = (*R) - (*S)
 * 
 * Author: Thomas Chiarappa
 *         Thomas.Chiarappa@mib.infn.it
 * 
 *******************************************************************************/

#ifdef HAVE_CONFIG_H
# include<config.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "su3.h"
#include "diff_bi.h"

void diff_bi(bispinor * const Q, bispinor * const R, bispinor * const S, const int N){

   int ix;
   spinor *q,*r,*s;


/* Change due to even-odd preconditioning : VOLUME   to VOLUME/2 */   
   for (ix = 0; ix < N; ix++) {

     q=(spinor *) &Q[ix].sp_up;
     r=(spinor *) &R[ix].sp_up;
     s=(spinor *) &S[ix].sp_up;
     
     (*q).s0.c0.re=(*r).s0.c0.re-(*s).s0.c0.re;
     (*q).s0.c0.im=(*r).s0.c0.im-(*s).s0.c0.im;
     (*q).s0.c1.re=(*r).s0.c1.re-(*s).s0.c1.re;
     (*q).s0.c1.im=(*r).s0.c1.im-(*s).s0.c1.im;
     (*q).s0.c2.re=(*r).s0.c2.re-(*s).s0.c2.re;
     (*q).s0.c2.im=(*r).s0.c2.im-(*s).s0.c2.im;
     
     (*q).s1.c0.re=(*r).s1.c0.re-(*s).s1.c0.re;
     (*q).s1.c0.im=(*r).s1.c0.im-(*s).s1.c0.im;
     (*q).s1.c1.re=(*r).s1.c1.re-(*s).s1.c1.re;
     (*q).s1.c1.im=(*r).s1.c1.im-(*s).s1.c1.im;
     (*q).s1.c2.re=(*r).s1.c2.re-(*s).s1.c2.re;
     (*q).s1.c2.im=(*r).s1.c2.im-(*s).s1.c2.im;         
     
     (*q).s2.c0.re=(*r).s2.c0.re-(*s).s2.c0.re;
     (*q).s2.c0.im=(*r).s2.c0.im-(*s).s2.c0.im;
     (*q).s2.c1.re=(*r).s2.c1.re-(*s).s2.c1.re;
     (*q).s2.c1.im=(*r).s2.c1.im-(*s).s2.c1.im;
     (*q).s2.c2.re=(*r).s2.c2.re-(*s).s2.c2.re;
     (*q).s2.c2.im=(*r).s2.c2.im-(*s).s2.c2.im;         
     
     (*q).s3.c0.re=(*r).s3.c0.re-(*s).s3.c0.re;
     (*q).s3.c0.im=(*r).s3.c0.im-(*s).s3.c0.im;
     (*q).s3.c1.re=(*r).s3.c1.re-(*s).s3.c1.re;
     (*q).s3.c1.im=(*r).s3.c1.im-(*s).s3.c1.im;
     (*q).s3.c2.re=(*r).s3.c2.re-(*s).s3.c2.re;
     (*q).s3.c2.im=(*r).s3.c2.im-(*s).s3.c2.im;


     q=(spinor *) &Q[ix].sp_dn;
     r=(spinor *) &R[ix].sp_dn;
     s=(spinor *) &S[ix].sp_dn;
     
     (*q).s0.c0.re=(*r).s0.c0.re-(*s).s0.c0.re;
     (*q).s0.c0.im=(*r).s0.c0.im-(*s).s0.c0.im;
     (*q).s0.c1.re=(*r).s0.c1.re-(*s).s0.c1.re;
     (*q).s0.c1.im=(*r).s0.c1.im-(*s).s0.c1.im;
     (*q).s0.c2.re=(*r).s0.c2.re-(*s).s0.c2.re;
     (*q).s0.c2.im=(*r).s0.c2.im-(*s).s0.c2.im;
     
     (*q).s1.c0.re=(*r).s1.c0.re-(*s).s1.c0.re;
     (*q).s1.c0.im=(*r).s1.c0.im-(*s).s1.c0.im;
     (*q).s1.c1.re=(*r).s1.c1.re-(*s).s1.c1.re;
     (*q).s1.c1.im=(*r).s1.c1.im-(*s).s1.c1.im;
     (*q).s1.c2.re=(*r).s1.c2.re-(*s).s1.c2.re;
     (*q).s1.c2.im=(*r).s1.c2.im-(*s).s1.c2.im;         
     
     (*q).s2.c0.re=(*r).s2.c0.re-(*s).s2.c0.re;
     (*q).s2.c0.im=(*r).s2.c0.im-(*s).s2.c0.im;
     (*q).s2.c1.re=(*r).s2.c1.re-(*s).s2.c1.re;
     (*q).s2.c1.im=(*r).s2.c1.im-(*s).s2.c1.im;
     (*q).s2.c2.re=(*r).s2.c2.re-(*s).s2.c2.re;
     (*q).s2.c2.im=(*r).s2.c2.im-(*s).s2.c2.im;         
     
     (*q).s3.c0.re=(*r).s3.c0.re-(*s).s3.c0.re;
     (*q).s3.c0.im=(*r).s3.c0.im-(*s).s3.c0.im;
     (*q).s3.c1.re=(*r).s3.c1.re-(*s).s3.c1.re;
     (*q).s3.c1.im=(*r).s3.c1.im-(*s).s3.c1.im;
     (*q).s3.c2.re=(*r).s3.c2.re-(*s).s3.c2.re;
     (*q).s3.c2.im=(*r).s3.c2.im-(*s).s3.c2.im;



   }
}

