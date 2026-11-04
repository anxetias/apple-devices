// rea decompile_all
// name: _AMAuthInstallCryptoDecryptSessionKey
// address: 0x28fac7
// body: available
// range: 0x28fac7-0x28fc5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x28fc59 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoDecryptSessionKey
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uchar *from;
  long lVar4;
  ulong e;
  RSA *r;
  RSA *local_2c0;
  char local_2b8 [128];
  uchar local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_2c0 = (RSA *)0x0;
  uVar2 = _CFGetAllocator();
  lVar4 = 0;
  lVar3 = _CFStringCreateWithFormat(uVar2,0,&cf____private,param_2);
  if (lVar3 == 0) {
    iVar1 = 2;
    goto LAB_0028fc0b;
  }
  iVar1 = _AMAuthInstallCryptoCopyRsaKey(param_1,lVar3,&local_2c0);
  if (iVar1 == 0) {
    iVar1 = _CFDataGetLength(param_3);
    from = (uchar *)_CFDataGetBytePtr(param_3);
    r = local_2c0;
    iVar1 = _RSA_private_decrypt(iVar1,from,local_238,local_2c0,1);
    if (iVar1 < 0) {
      e = _ERR_get_error();
      _ERR_error_string(e,local_2b8);
      _AMAuthInstallLog(3,"AMAuthInstallCryptoDecryptSessionKey","RSA_private_decrypt() failed: %s",
                        local_2b8);
      iVar1 = 6;
    }
    else {
      uVar2 = _CFGetAllocator(param_1);
      lVar4 = _CFDataCreate(uVar2,local_238,iVar1);
      if (lVar4 != 0) {
        uVar2 = _CFRetain(lVar4);
        *param_4 = uVar2;
        iVar1 = 0;
        goto LAB_0028fbfe;
      }
      iVar1 = 2;
    }
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    r = local_2c0;
  }
LAB_0028fbfe:
  if (r != (RSA *)0x0) {
    _RSA_free(r);
  }
LAB_0028fc0b:
  _SafeRelease(lVar3);
  _SafeRelease(lVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

