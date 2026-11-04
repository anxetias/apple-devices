// rea decompile_all
// name: _AMAuthInstallCryptoCreateEcdsaSignature_SHA384
// address: 0x1aab9f
// body: available
// range: 0x1aab9f-0x1aadc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1aadc2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoCreateEcdsaSignature_SHA384
              (long param_1,long param_2,void *param_3,CC_LONG param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uchar *sig;
  EC_KEY *local_78;
  uint local_6c;
  uchar local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_6c = 0;
  local_78 = (EC_KEY *)0x0;
  if (param_1 == 0) {
    _AMAuthInstallCryptoCreateEcdsaSignature_SHA384_cold_5();
    iVar2 = 1;
    lVar4 = 0;
    goto LAB_001aad2e;
  }
  if (param_2 == 0) {
    _AMAuthInstallCryptoCreateEcdsaSignature_SHA384_cold_4();
LAB_001aad81:
    iVar2 = 1;
LAB_001aad87:
    lVar4 = 0;
  }
  else {
    if (param_3 == (void *)0x0) {
      _AMAuthInstallCryptoCreateEcdsaSignature_SHA384_cold_3();
      goto LAB_001aad81;
    }
    if (param_4 == 0) {
      _AMAuthInstallCryptoCreateEcdsaSignature_SHA384_cold_2();
      goto LAB_001aad81;
    }
    if (param_5 == (undefined8 *)0x0) {
      _AMAuthInstallCryptoCreateEcdsaSignature_SHA384_cold_1();
      goto LAB_001aad81;
    }
    uVar1 = __AMAuthInstallCryptoGetKeyIdType(param_2);
    if (7 < uVar1) {
      iVar2 = _AMAuthInstallCryptoCopyEcdsaKey(param_1,param_2,&local_78);
      if (iVar2 == 0) {
        local_6c = 0x68;
        uVar3 = _CFGetAllocator(param_1);
        lVar4 = _CFDataCreateMutable(uVar3,0x68);
        if (lVar4 != 0) {
          _CFDataSetLength(lVar4,0x68);
          _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateEcdsaSignature_SHA384","length: %d",param_4)
          ;
          _CC_SHA384(param_3,param_4,local_68);
          _AMAuthInstallLogDumpMemory
                    (7,"AMAuthInstallCryptoCreateEcdsaSignature_SHA384",
                     "bbticket hash minus the cert",local_68,0x30);
          sig = (uchar *)_CFDataGetMutableBytePtr(lVar4);
          iVar2 = _ECDSA_sign(0x2a1,local_68,0x30,sig,&local_6c,local_78);
          if ((char)iVar2 == '\0') {
            _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateEcdsaSignature_SHA384",
                              "something went wrong... need a more detailed errorcode --> TODO!");
            iVar2 = 6;
          }
          else {
            _CFDataSetLength(lVar4,local_6c);
            uVar3 = _CFRetain(lVar4);
            *param_5 = uVar3;
            iVar2 = 0;
          }
          goto LAB_001aad20;
        }
        iVar2 = 2;
      }
      goto LAB_001aad87;
    }
    lVar4 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateEcdsaSignature_SHA384","key isn\'t private (%@)",
                      param_2);
    iVar2 = 1;
  }
LAB_001aad20:
  if (local_78 != (EC_KEY *)0x0) {
    _EC_KEY_free(local_78);
  }
LAB_001aad2e:
  _SafeRelease(lVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

