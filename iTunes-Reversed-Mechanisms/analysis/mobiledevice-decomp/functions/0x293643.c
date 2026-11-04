// rea decompile_all
// name: _AMAuthInstallMonetLocalCreateDigestForKey
// address: 0x293643
// body: available
// range: 0x293643-0x2936ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2936bf to 0x28f2c9 _AMAuthInstallCryptoCreateDigestForKey (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2936d1 to 0x28f3e3 _AMAuthInstallCryptoCreateDigestForKey_SHA256 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2936e3 to 0x28f508 _AMAuthInstallCryptoCreateDigestForKey_SHA384 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallMonetLocalCreateDigestForKey(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return 1;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  uVar1 = iVar2 - 0x5e;
  if (uVar1 < 0xb) {
    if ((0x284U >> (uVar1 & 0x1f) & 1) != 0) goto LAB_002936d0;
    if ((0x401U >> (uVar1 & 0x1f) & 1) != 0) goto LAB_002936e2;
  }
  if (iVar2 != 0x3b0e1) {
    if (((((iVar2 == 0x7f0e1) || (iVar2 == 0xe50e1)) ||
         ((iVar2 == 0x1440e1 || ((iVar2 == 0x1720e1 || (iVar2 == 0x19f0e1)))))) ||
        (iVar2 == 0x1fe0e1)) || (iVar2 == 0x2af0e1)) {
LAB_002936e2:
      uVar3 = _AMAuthInstallCryptoCreateDigestForKey_SHA384();
      return uVar3;
    }
    if (((iVar2 != 0x7f50e1) && (iVar2 != 0x9540e1)) && (iVar2 != 0x9210e1)) {
      uVar3 = _AMAuthInstallCryptoCreateDigestForKey();
      return uVar3;
    }
  }
LAB_002936d0:
  uVar3 = _AMAuthInstallCryptoCreateDigestForKey_SHA256();
  return uVar3;
}

