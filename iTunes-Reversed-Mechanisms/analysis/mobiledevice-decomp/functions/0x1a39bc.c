// rea decompile_all
// name: __AMAuthInstallBasebandCheckSnum
// address: 0x1a39bc
// body: available
// range: 0x1a39bc-0x1a3b3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMAuthInstallBasebandCheckSnum(int param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_1 < 0x19f0e1) {
    if (param_1 < 0x3b0e1) {
      uVar2 = param_1 - 0x50;
      if (0x18 < uVar2) goto LAB_001a3afd;
      if ((0x1a14000U >> (uVar2 & 0x1f) & 1) == 0) {
        if (uVar2 != 0) goto LAB_001a3afd;
        cVar1 = _AMAuthInstallBasebandRembrandtIsSnumValid(param_2);
      }
      else {
        cVar1 = _AMAuthInstallBasebandRembrandtIsSnumValid(param_2);
      }
      goto LAB_001a3ace;
    }
    if (param_1 < 0xe50e1) {
      if ((param_1 != 0x3b0e1) && (param_1 != 0x7f0e1)) goto LAB_001a3afd;
    }
    else if ((param_1 != 0xe50e1) && ((param_1 != 0x1440e1 && (param_1 != 0x1720e1)))) {
LAB_001a3afd:
      _AMAuthInstallLog(3,"_AMAuthInstallBasebandCheckSnum","unrecognized chipid: 0x%08X");
      return 1;
    }
  }
  else if (param_1 < 0x5a00e1) {
    if (param_1 < 0x2af0e1) {
      if ((param_1 != 0x19f0e1) && (param_1 != 0x1fe0e1)) goto LAB_001a3afd;
    }
    else if (param_1 != 0x2af0e1) {
      if (param_1 == 0x4600e1) {
        cVar1 = _AMAuthInstallBasebandMAV10IsSnumValid(param_2);
      }
      else {
        if (param_1 != 0x5000e1) goto LAB_001a3afd;
        cVar1 = _AMAuthInstallBasebandMAV10IsSnumValid(param_2);
      }
      goto LAB_001a3ace;
    }
  }
  else {
    if (param_1 < 0x7f50e1) {
      if (param_1 == 0x5a00e1) {
        cVar1 = _AMAuthInstallBasebandMAV10IsSnumValid(param_2);
      }
      else {
        if ((param_1 != 0x6f10e1) && (param_1 != 0x6f20e1)) goto LAB_001a3afd;
        cVar1 = _AMAuthInstallBasebandMAV10IsSnumValid(param_2);
      }
      goto LAB_001a3ace;
    }
    if (((param_1 != 0x7f50e1) && (param_1 != 0x9210e1)) && (param_1 != 0x9540e1))
    goto LAB_001a3afd;
  }
  cVar1 = _AMAuthInstallBasebandMAV10IsSnumValid(param_2);
LAB_001a3ace:
  if (cVar1 == '\0') {
    _AMAuthInstallLog(3,"_AMAuthInstallBasebandCheckSnum","bad snum: %@",param_2);
    return 1;
  }
  return 0;
}

