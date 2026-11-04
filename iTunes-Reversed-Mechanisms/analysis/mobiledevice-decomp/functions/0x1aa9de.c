// rea decompile_all
// name: _AMAuthInstallCryptoCreateRsaSignature_SHA256
// address: 0x1aa9de
// body: available
// range: 0x1aa9de-0x1aab9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1aab9a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoCreateRsaSignature_SHA256
              (undefined8 param_1,undefined8 param_2,uchar *param_3,ulong param_4,
              undefined8 *param_5)

{
  RSA *rsa;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uchar *sigret;
  ulong e;
  RSA *local_f8;
  uchar *local_f0;
  undefined8 *local_e8;
  uint local_dc;
  char local_d8 [128];
  uchar local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_f8 = (RSA *)0x0;
  uVar1 = __AMAuthInstallCryptoGetKeyIdType(param_2);
  if (uVar1 < 8) {
    lVar4 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateRsaSignature_SHA256","key isn\'t private (%@)",
                      param_2);
    iVar2 = 1;
    goto LAB_001aab37;
  }
  local_f0 = param_3;
  local_e8 = param_5;
  iVar2 = _AMAuthInstallCryptoCopyRsaKey(param_1,param_2,&local_f8);
  rsa = local_f8;
  if (iVar2 == 0) {
    uVar1 = _RSA_size(local_f8);
    local_dc = uVar1;
    uVar3 = _CFGetAllocator(param_1);
    lVar4 = _CFDataCreateMutable(uVar3,uVar1);
    if (lVar4 == 0) {
      iVar2 = 2;
      goto LAB_001aab96;
    }
    _CFDataSetLength(lVar4,uVar1);
    _SHA256(local_f0,param_4 & 0xffffffff,local_58);
    sigret = (uchar *)_CFDataGetMutableBytePtr(lVar4);
    iVar2 = _RSA_sign(0x2a0,local_58,0x20,sigret,&local_dc,rsa);
    if ((char)iVar2 == '\0') {
      e = _ERR_get_error();
      _ERR_error_string(e,local_d8);
      _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateRsaSignature_SHA256","RSA_sign() failed: %s",
                        local_d8);
      iVar2 = 6;
    }
    else {
      uVar3 = _CFRetain(lVar4);
      *local_e8 = uVar3;
      iVar2 = 0;
    }
  }
  else {
LAB_001aab96:
    lVar4 = 0;
  }
  if (rsa != (RSA *)0x0) {
    _RSA_free(rsa);
  }
LAB_001aab37:
  _SafeRelease(lVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

