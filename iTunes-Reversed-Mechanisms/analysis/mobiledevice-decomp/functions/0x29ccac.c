// rea decompile_all
// name: _AMAuthInstallRembrandtLocalCreateDigestForKey
// address: 0x29ccac
// body: available
// range: 0x29ccac-0x29cd09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallRembrandtLocalCreateDigestForKey(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    uVar2 = *(int *)(*(long *)(param_1 + 0x30) + 4) - 0x5e;
    if (uVar2 < 0xb) {
      if ((0x284U >> (uVar2 & 0x1f) & 1) != 0) {
        uStack_28 = 0;
        uVar3 = 0;
        iVar1 = 1;
        if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
          iVar1 = _AMAuthInstallCryptoGetKeyData(param_1,param_2,&uStack_30);
          if (iVar1 == 0) {
            uVar3 = _CFGetAllocator(param_1);
            iVar1 = _AMAuthInstallCryptoCreateDigestForData_SHA256(uVar3,uStack_30,&uStack_28);
            uVar3 = uStack_28;
            if (iVar1 == 0) {
              uVar3 = _CFRetain(uStack_28);
              *param_3 = uVar3;
              iVar1 = 0;
              uVar3 = uStack_28;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        _SafeRelease(uVar3);
        return iVar1;
      }
      if ((0x401U >> (uVar2 & 0x1f) & 1) != 0) {
        uStack_28 = 0;
        uVar3 = 0;
        iVar1 = 1;
        if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
          iVar1 = _AMAuthInstallCryptoGetKeyData(param_1,param_2,&uStack_30);
          if (iVar1 == 0) {
            uVar3 = _CFGetAllocator(param_1);
            iVar1 = _AMAuthInstallCryptoCreateDigestForDataOnlyKeySha384(uVar3,uStack_30,&uStack_28)
            ;
            uVar3 = uStack_28;
            if (iVar1 == 0) {
              uVar3 = _CFRetain(uStack_28);
              *param_3 = uVar3;
              iVar1 = 0;
              uVar3 = uStack_28;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        _SafeRelease(uVar3);
        return iVar1;
      }
    }
    _AMAuthInstallLog(3,"AMAuthInstallRembrandtLocalCreateDigestForKey","Unknown chipid");
    iVar1 = 99;
  }
  return iVar1;
}

