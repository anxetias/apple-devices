// rea decompile_all
// name: _AMAuthInstallCopyRsaKeyDataForKey
// address: 0x1aa02a
// body: available
// range: 0x1aa02a-0x1aa212 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1aa20e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallCopyRsaKeyDataForKey(undefined8 param_1,char *param_2,long *param_3)

{
  int len;
  long lVar1;
  long lVar2;
  void *buf;
  BIO *a;
  EVP_PKEY *pkey;
  FILE *pFVar3;
  rsa_st *r;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  char local_a8 [120];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar1 = _CFGetTypeID(param_2);
  lVar2 = _CFDataGetTypeID();
  if (lVar1 == lVar2) {
    buf = (void *)_CFDataGetBytePtr();
    len = _CFDataGetLength(param_2);
    a = _BIO_new_mem_buf(buf,len);
    if (a == (BIO *)0x0) {
      uVar6 = 2;
      goto LAB_001aa1ec;
    }
    pkey = (EVP_PKEY *)_PEM_read_bio_PrivateKey(a,0,0,0);
    _BIO_free(a);
LAB_001aa0f2:
    if (pkey != (EVP_PKEY *)0x0) {
      r = _EVP_PKEY_get1_RSA(pkey);
      if (r == (rsa_st *)0x0) {
        uVar4 = _ERR_get_error();
        _ERR_error_string(uVar4,local_a8);
        uVar6 = 3;
        _AMAuthInstallLog(3,"AMAuthInstallCopyRsaKeyDataForKey","failed to get rsa key: %s",local_a8
                         );
      }
      else {
        lVar1 = _CFDataCreateWithBytesNoCopy
                          (param_1,r,0x98,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
        if (lVar1 == 0) {
          _RSA_free(r);
          uVar6 = 2;
        }
        else {
          *param_3 = lVar1;
          uVar6 = 0;
        }
      }
      _EVP_PKEY_free(pkey);
      goto LAB_001aa1ec;
    }
    uVar4 = _ERR_get_error();
    param_2 = local_a8;
    _ERR_error_string(uVar4,param_2);
    pcVar5 = "failed to read private key: %s";
  }
  else {
    lVar1 = _CFGetTypeID(param_2);
    lVar2 = _CFURLGetTypeID();
    if (lVar1 == lVar2) {
      pFVar3 = (FILE *)_AMAuthInstallPlatformOpenFileStreamWithURL(param_2,"r");
      if (pFVar3 == (FILE *)0x0) {
        uVar6 = 4;
        goto LAB_001aa1ec;
      }
      pkey = (EVP_PKEY *)_PEM_read_PrivateKey(pFVar3,0,0,0);
      _fclose(pFVar3);
      goto LAB_001aa0f2;
    }
    pcVar5 = "not a data or URL type: %@";
  }
  _AMAuthInstallLog(3,"AMAuthInstallCopyRsaKeyDataForKey",pcVar5,param_2);
  uVar6 = 1;
LAB_001aa1ec:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

