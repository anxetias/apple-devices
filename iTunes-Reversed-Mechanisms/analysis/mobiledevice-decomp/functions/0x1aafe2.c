// rea decompile_all
// name: _AMAuthInstallCryptoCreateRsaCustomSignature
// address: 0x1aafe2
// body: available
// range: 0x1aafe2-0x1ab181 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ab17d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoCreateRsaCustomSignature
              (undefined8 param_1,undefined8 param_2,uchar *param_3,int param_4,undefined8 *param_5)

{
  RSA *rsa;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uchar *to;
  ulong e;
  RSA *local_d0;
  undefined8 *local_c8;
  int local_bc;
  char local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_d0 = (RSA *)0x0;
  uVar1 = __AMAuthInstallCryptoGetKeyIdType(param_2);
  if (uVar1 < 8) {
    lVar4 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateRsaCustomSignature","key isn\'t private (%@)",
                      param_2);
    iVar2 = 1;
    goto LAB_001ab11a;
  }
  local_c8 = param_5;
  local_bc = param_4;
  iVar2 = _AMAuthInstallCryptoCopyRsaKey(param_1,param_2,&local_d0);
  rsa = local_d0;
  if (iVar2 == 0) {
    iVar2 = _RSA_size(local_d0);
    uVar3 = _CFGetAllocator(param_1);
    lVar4 = _CFDataCreateMutable(uVar3,iVar2);
    if (lVar4 == 0) {
      iVar2 = 2;
      goto LAB_001ab179;
    }
    _CFDataSetLength(lVar4,iVar2);
    to = (uchar *)_CFDataGetMutableBytePtr(lVar4);
    iVar2 = _RSA_private_encrypt(local_bc,param_3,to,rsa,3);
    if (iVar2 < 0) {
      e = _ERR_get_error();
      _ERR_error_string(e,local_b8);
      _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateRsaCustomSignature",
                        "RSA_private_encrypt() failed: %s",local_b8);
      iVar2 = 6;
    }
    else {
      uVar3 = _CFRetain(lVar4);
      *local_c8 = uVar3;
      iVar2 = 0;
    }
  }
  else {
LAB_001ab179:
    lVar4 = 0;
  }
  if (rsa != (RSA *)0x0) {
    _RSA_free(rsa);
  }
LAB_001ab11a:
  _SafeRelease(lVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

