// rea decompile_all
// name: _BbfwWriterErrorFromZipStat
// address: 0x1b7be1
// body: available
// range: 0x1b7be1-0x1b7c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _BbfwWriterErrorFromZipStat(int param_1,int param_2)

{
  int *piVar1;
  
  if (-7 < param_1) {
    switch(param_1) {
    case 0:
      return param_1;
    case -6:
      return 0x1392;
    case -5:
      return 0x1391;
    case -4:
      return 0x1390;
    case -3:
      return 0x138f;
    case -2:
      return 0x138e;
    case -1:
      goto switchD_001b7bfe_caseD_ffffffff;
    default:
      return param_2;
    }
  }
  if (param_1 == -0x68) {
    return 0x138d;
  }
  if (param_1 == -0x67) {
    return 0x138c;
  }
  if (param_1 == -0x66) {
    return 0x138b;
  }
  return param_2;
switchD_001b7bfe_caseD_ffffffff:
  piVar1 = ___error();
  if (*piVar1 - 199U < 0xffffff3a) {
    return 0x138b;
  }
  return *piVar1 + 0x13ec;
}

