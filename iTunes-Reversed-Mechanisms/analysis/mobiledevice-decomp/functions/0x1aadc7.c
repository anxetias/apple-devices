// rea decompile_all
// name: _AMAuthInstallCryptoCreateRsaSignature_SHA384
// address: 0x1aadc7
// body: available
// range: 0x1aadc7-0x1aafe1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1aafdd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoCreateRsaSignature_SHA384
              (long param_1,long param_2,uchar *param_3,uint param_4,undefined8 *param_5)

{
  RSA *rsa;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uchar *sigret;
  ulong e;
  RSA *local_108;
  uchar *local_100;
  undefined8 *local_f8;
  uint local_ec;
  char local_e8 [128];
  uchar local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_108 = (RSA *)0x0;
  if (param_1 == 0) {
    _AMAuthInstallCryptoCreateRsaSignature_SHA384_cold_5();
  }
  else if (param_2 == 0) {
    _AMAuthInstallCryptoCreateRsaSignature_SHA384_cold_4();
  }
  else if (param_3 == (uchar *)0x0) {
    _AMAuthInstallCryptoCreateRsaSignature_SHA384_cold_3();
  }
  else if (param_4 == 0) {
    _AMAuthInstallCryptoCreateRsaSignature_SHA384_cold_2();
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
      uVar1 = __AMAuthInstallCryptoGetKeyIdType(param_2);
      if (uVar1 < 8) {
        lVar4 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateRsaSignature_SHA384","key isn\'t private (%@)"
                          ,param_2);
        iVar2 = 1;
        goto LAB_001aaf4c;
      }
      local_100 = param_3;
      local_f8 = param_5;
      iVar2 = _AMAuthInstallCryptoCopyRsaKey(param_1,param_2,&local_108);
      rsa = local_108;
      if (iVar2 == 0) {
        uVar1 = _RSA_size(local_108);
        local_ec = uVar1;
        uVar3 = _CFGetAllocator(param_1);
        lVar4 = _CFDataCreateMutable(uVar3,uVar1);
        if (lVar4 == 0) {
          iVar2 = 2;
          goto LAB_001aafd6;
        }
        _CFDataSetLength(lVar4,uVar1);
        _SHA384(local_100,(ulong)param_4,local_68);
        sigret = (uchar *)_CFDataGetMutableBytePtr(lVar4);
        iVar2 = _RSA_sign(0x2a1,local_68,0x30,sigret,&local_ec,rsa);
        if ((char)iVar2 == '\0') {
          e = _ERR_get_error();
          _ERR_error_string(e,local_e8);
          _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateRsaSignature_SHA384","RSA_sign() failed: %s"
                            ,local_e8);
          iVar2 = 6;
        }
        else {
          uVar3 = _CFRetain(lVar4);
          *local_f8 = uVar3;
          iVar2 = 0;
        }
      }
      else {
LAB_001aafd6:
        lVar4 = 0;
      }
      if (rsa != (RSA *)0x0) {
        _RSA_free(rsa);
      }
      goto LAB_001aaf4c;
    }
    _AMAuthInstallCryptoCreateRsaSignature_SHA384_cold_1();
  }
  iVar2 = 1;
  lVar4 = 0;
LAB_001aaf4c:
  _SafeRelease(lVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

