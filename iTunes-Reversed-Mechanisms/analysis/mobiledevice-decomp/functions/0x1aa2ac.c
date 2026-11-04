// rea decompile_all
// name: __AMAuthInstallCryptoRegisterKeyHash
// address: 0x1aa2ac
// body: available
// range: 0x1aa2ac-0x1aa3e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallCryptoRegisterKeyHash(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long local_28;
  
  local_28 = 0;
  iVar2 = _AMAuthInstallCryptoCreateDigestForKey();
  lVar1 = local_28;
  if (iVar2 == 0) {
    if (local_28 == 0) {
      __AMAuthInstallCryptoRegisterKeyHash_cold_2();
    }
    else {
      _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x180),local_28,param_2);
      _SafeRelease(lVar1);
      local_28 = 0;
      iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 4);
      if (iVar2 < 0x1440e1) {
        if (iVar2 < 0x7f0e1) {
          if ((iVar2 != 0x5e) && (iVar2 != 0x68)) goto LAB_001aa3a8;
        }
        else if ((iVar2 != 0x7f0e1) && (iVar2 != 0xe50e1)) goto LAB_001aa3a8;
LAB_001aa360:
        iVar2 = _AMAuthInstallCryptoCreateDigestForKey_SHA384(param_1,param_2,&local_28);
      }
      else {
        if (iVar2 < 0x19f0e1) {
          if ((iVar2 != 0x1440e1) && (iVar2 != 0x1720e1)) goto LAB_001aa3a8;
          goto LAB_001aa360;
        }
        if ((iVar2 == 0x19f0e1) || ((iVar2 == 0x2af0e1 || (iVar2 == 0x1fe0e1)))) goto LAB_001aa360;
LAB_001aa3a8:
        iVar2 = _AMAuthInstallCryptoCreateDigestForKey_SHA256(param_1,param_2,&local_28);
      }
      if (iVar2 != 0) goto LAB_001aa3bc;
      if (local_28 == 0) {
        __AMAuthInstallCryptoRegisterKeyHash_cold_1();
      }
      else {
        _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x180),local_28,param_2);
      }
    }
    iVar2 = 0;
  }
  else {
LAB_001aa3bc:
    _AMAuthInstallLog(3,"_AMAuthInstallCryptoRegisterKeyHash",
                      "AMAuthInstallCryptoCreateDigestForKey(%@) failed",param_2);
  }
  _SafeRelease(local_28);
  return iVar2;
}

