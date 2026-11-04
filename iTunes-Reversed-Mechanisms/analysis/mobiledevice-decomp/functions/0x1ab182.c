// rea decompile_all
// name: _AMAuthInstallCryptoCreateEccCustomSignature
// address: 0x1ab182
// body: available
// range: 0x1ab182-0x1ab380 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ab37c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoCreateEccCustomSignature
              (undefined8 param_1,undefined8 param_2,void *param_3,CC_LONG param_4,
              undefined8 *param_5)

{
  EC_KEY *eckey;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uchar *puVar7;
  uchar *sig;
  ulong e;
  EC_KEY *local_d8;
  void *local_d0;
  undefined8 *local_c8;
  uint local_c0;
  CC_LONG local_bc;
  char local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_d8 = (EC_KEY *)0x0;
  uVar1 = __AMAuthInstallCryptoGetKeyIdType(param_2);
  if (uVar1 < 8) {
    lVar5 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateEccCustomSignature","key isn\'t private (%@)",
                      param_2);
    iVar2 = 1;
    goto LAB_001ab321;
  }
  local_d0 = param_3;
  local_bc = param_4;
  iVar2 = _AMAuthInstallCryptoCopyEcdsaKey(param_1,param_2,&local_d8);
  eckey = local_d8;
  if (iVar2 == 0) {
    local_c8 = param_5;
    uVar1 = _ECDSA_size(local_d8);
    local_c0 = uVar1;
    uVar4 = _CFGetAllocator(param_1);
    lVar5 = _CFDataCreateMutable(uVar4,uVar1);
    iVar2 = 2;
    if (lVar5 == 0) goto LAB_001ab378;
    _CFDataSetLength(lVar5,uVar1);
    uVar4 = _CFGetAllocator(param_1);
    lVar6 = _CFDataCreateMutable(uVar4,0x30);
    if (lVar6 != 0) {
      _CFDataSetLength(lVar6,0x30);
      puVar7 = (uchar *)_CFDataGetMutableBytePtr(lVar6);
      _CC_SHA384(local_d0,local_bc,puVar7);
      puVar7 = (uchar *)_CFDataGetMutableBytePtr(lVar6);
      sig = (uchar *)_CFDataGetMutableBytePtr();
      iVar2 = 0;
      iVar3 = _ECDSA_sign(0,puVar7,0x30,sig,&local_c0,eckey);
      if (iVar3 == 0) {
        e = _ERR_get_error();
        _ERR_error_string(e,local_b8);
        _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateEccCustomSignature","ECC_sign() failed: %s",
                          local_b8);
        iVar2 = 6;
      }
      else {
        uVar4 = _CFRetain(lVar5);
        *local_c8 = uVar4;
      }
    }
  }
  else {
LAB_001ab378:
    lVar5 = 0;
  }
  if (eckey != (EC_KEY *)0x0) {
    _EC_KEY_free(eckey);
  }
LAB_001ab321:
  _SafeRelease(lVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

