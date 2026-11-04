// rea decompile_all
// name: _AMAuthInstallCryptoCreateEcdsaSignatureWithSHA384
// address: 0x1aa7d2
// body: available
// range: 0x1aa7d2-0x1aa9dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1aa9d9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoCreateEcdsaSignatureWithSHA384
              (long param_1,long param_2,uchar *param_3,undefined8 *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  uchar *sig;
  ulong e;
  size_t sVar7;
  EC_KEY *local_c0;
  char local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c0 = (EC_KEY *)0x0;
  if (param_1 == 0) {
    _AMAuthInstallCryptoCreateEcdsaSignatureWithSHA384_cold_3();
    iVar2 = 1;
    lVar5 = 0;
    goto LAB_001aa94d;
  }
  if (param_2 == 0) {
    _AMAuthInstallCryptoCreateEcdsaSignatureWithSHA384_cold_2();
LAB_001aa995:
    iVar2 = 1;
LAB_001aa9d2:
    lVar5 = 0;
  }
  else {
    if (param_4 == (undefined8 *)0x0) {
      _AMAuthInstallCryptoCreateEcdsaSignatureWithSHA384_cold_1();
      goto LAB_001aa995;
    }
    uVar1 = __AMAuthInstallCryptoGetKeyIdType(param_2);
    if (7 < uVar1) {
      iVar2 = _AMAuthInstallCryptoCopyEcdsaKey(param_1,param_2,&local_c0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 4);
        sVar7 = 0x68;
        if ((iVar2 != 0x5e) && (iVar2 != 0x68)) {
          sVar7 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateEcdsaSignatureWithSHA384",
                            "Unsupported chipID: %d");
        }
        uVar4 = _CFGetAllocator(param_1);
        lVar5 = _CFDataCreateMutable(uVar4,sVar7);
        if (lVar5 != 0) {
          _CFDataSetLength(lVar5,sVar7);
          pvVar6 = (void *)_CFDataGetMutableBytePtr(lVar5);
          _memset(pvVar6,0xff,sVar7);
          sig = (uchar *)_CFDataGetMutableBytePtr();
          iVar2 = 0;
          iVar3 = _ECDSA_sign(0,param_3,0x30,sig,param_5,local_c0);
          if ((char)iVar3 == '\0') {
            e = _ERR_get_error();
            _ERR_error_string(e,local_b8);
            _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateEcdsaSignatureWithSHA384",
                              "ECDSA_sign() failed: %s",local_b8);
            iVar2 = 6;
          }
          else {
            uVar4 = _CFRetain(lVar5);
            *param_4 = uVar4;
          }
          goto LAB_001aa93c;
        }
        iVar2 = 2;
      }
      goto LAB_001aa9d2;
    }
    lVar5 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateEcdsaSignatureWithSHA384",
                      "key isn\'t private (%@)",param_2);
    iVar2 = 1;
  }
LAB_001aa93c:
  if (local_c0 != (EC_KEY *)0x0) {
    _EC_KEY_free(local_c0);
  }
LAB_001aa94d:
  _SafeRelease(lVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

