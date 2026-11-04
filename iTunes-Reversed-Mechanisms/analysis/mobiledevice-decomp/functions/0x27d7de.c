// rea decompile_all
// name: _AMAuthInstallBasebandCopyNextComponentName
// address: 0x27d7de
// body: available
// range: 0x27d7de-0x27d90a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x27d902 to 0x27ffc1 _AMAuthInstallBasebandICE3CopyNextComponentName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandCopyNextComponentName(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
      uVar2 = iVar1 - 0x50;
      if (uVar2 < 0x19) {
        if ((0x1a14000U >> (uVar2 & 0x1f) & 1) != 0) {
          uVar3 = _AMAuthInstallRembrandtCopyNextComponentName();
          return uVar3;
        }
        if (uVar2 == 0) {
          uVar3 = _AMAuthInstallBasebandICE3CopyNextComponentName();
          return uVar3;
        }
      }
      if (((((iVar1 != 0x3b0e1) && (iVar1 != 0x7f0e1)) && (iVar1 != 0xe50e1)) &&
          (((iVar1 != 0x1440e1 && (iVar1 != 0x1720e1)) &&
           ((iVar1 != 0x19f0e1 && ((iVar1 != 0x1fe0e1 && (iVar1 != 0x2af0e1)))))))) &&
         ((iVar1 != 0x4600e1 &&
          (((((iVar1 != 0x5000e1 && (iVar1 != 0x5a00e1)) && (iVar1 != 0x6f10e1)) &&
            ((iVar1 != 0x6f20e1 && (iVar1 != 0x7f50e1)))) &&
           ((iVar1 != 0x9210e1 && (iVar1 != 0x9540e1)))))))) {
        _AMAuthInstallLog(3,"AMAuthInstallBasebandCopyNextComponentName",
                          "chipID: 0x%x is not supported");
        return 99;
      }
      uVar3 = _AMAuthInstallMonetCopyNextComponentName();
      return uVar3;
    }
    *param_2 = 0;
    uVar3 = 99;
  }
  return uVar3;
}

