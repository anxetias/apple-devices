// name: FUN_10069a8d4
// address: 10069a8d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10069a8d4(void)

{
  int iVar1;
  
  iVar1 = ___cxa_guard_acquire(&DAT_100890790);
  if (iVar1 != 0) {
    _DAT_100890770 = *(undefined8 *)PTR__kCFStreamSSLAllowsExpiredCertificates_10082d680;
    _DAT_100890778 = *(undefined8 *)PTR__kCFStreamSSLAllowsExpiredRoots_10082d688;
    _DAT_100890780 = *(undefined8 *)PTR__kCFStreamSSLAllowsAnyRoot_10082d678;
    _DAT_100890788 = *(undefined8 *)PTR__kCFStreamSSLValidatesCertificateChain_10082d690;
    ___cxa_guard_release(&DAT_100890790);
  }
  return;
}

