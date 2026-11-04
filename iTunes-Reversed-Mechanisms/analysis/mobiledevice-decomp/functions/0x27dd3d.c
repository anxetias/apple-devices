// rea decompile_all
// name: _AMAuthInstallBasebandSupportsLocalSigning
// address: 0x27dd3d
// body: available
// range: 0x27dd3d-0x27de7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandSupportsLocalSigning(long param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == (undefined1 *)0x0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
    if ((iVar1 - 0x5eU < 0xb) && ((0x685U >> (iVar1 - 0x5eU & 0x1f) & 1) != 0)) {
      uVar2 = _AMAuthInstallBasebandJ2SupportsServerSigning();
    }
    else {
      if ((iVar1 != 0x3b0e1) && (iVar1 != 0x7f0e1)) {
        if (((((iVar1 == 0xe50e1) || (iVar1 == 0x1440e1)) || (iVar1 == 0x1720e1)) ||
            ((iVar1 == 0x19f0e1 || (iVar1 == 0x1fe0e1)))) || (iVar1 == 0x2af0e1)) {
          uVar2 = _AMAuthInstallBasebandMAV10SupportsLocalSigning();
          goto LAB_0027de6b;
        }
        if (iVar1 == 0x4600e1) {
          uVar2 = _AMAuthInstallBasebandMAV10SupportsLocalSigning();
          goto LAB_0027de6b;
        }
        if (iVar1 != 0x9540e1) {
          if (iVar1 == 0x5a00e1) {
            uVar2 = _AMAuthInstallBasebandMAV10SupportsLocalSigning();
            goto LAB_0027de6b;
          }
          if ((iVar1 == 0x6f10e1) || (iVar1 == 0x6f20e1)) {
            uVar2 = _AMAuthInstallBasebandN41SupportsLocalSigning();
            goto LAB_0027de6b;
          }
          if ((iVar1 != 0x7f50e1) && (iVar1 != 0x9210e1)) {
            if (iVar1 == 0x5000e1) {
              uVar2 = _AMAuthInstallBasebandMAV10SupportsLocalSigning();
            }
            else {
              uVar2 = 0;
              _AMAuthInstallLog(3,"AMAuthInstallBasebandSupportsLocalSigning",
                                "chipID: 0x%x is not supported for local signing");
            }
            goto LAB_0027de6b;
          }
        }
      }
      uVar2 = _AMAuthInstallBasebandMAV10SupportsLocalSigning();
    }
  }
LAB_0027de6b:
  *param_2 = uVar2;
  return 0;
}

