/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALC_H_RPCGEN
#define _CALC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numsOperan {
	int a;
	int b;
};
typedef struct numsOperan numsOperan;

#define SUMA_PROG 0x23451112
#define SUMA_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SUMA 1
extern  double * suma_1(numsOperan *, CLIENT *);
extern  double * suma_1_svc(numsOperan *, struct svc_req *);
#define RESTA 1
extern  double * resta_1(numsOperan *, CLIENT *);
extern  double * resta_1_svc(numsOperan *, struct svc_req *);
#define MULTI 1
extern  double * multi_1(numsOperan *, CLIENT *);
extern  double * multi_1_svc(numsOperan *, struct svc_req *);
#define DIVI 1
extern  double * divi_1(numsOperan *, CLIENT *);
extern  double * divi_1_svc(numsOperan *, struct svc_req *);
extern int suma_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SUMA 1
extern  double * suma_1();
extern  double * suma_1_svc();
#define RESTA 1
extern  double * resta_1();
extern  double * resta_1_svc();
#define MULTI 1
extern  double * multi_1();
extern  double * multi_1_svc();
#define DIVI 1
extern  double * divi_1();
extern  double * divi_1_svc();
extern int suma_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numsOperan (XDR *, numsOperan*);

#else /* K&R C */
extern bool_t xdr_numsOperan ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALC_H_RPCGEN */
