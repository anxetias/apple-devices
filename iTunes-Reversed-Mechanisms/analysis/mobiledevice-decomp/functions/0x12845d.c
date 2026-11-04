// rea decompile_all
// name: _convertLibAuthInstallErrorToAMDError
// address: 0x12845d
// body: available
// range: 0x12845d-0x1284f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _convertLibAuthInstallErrorToAMDError(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0xc61) {
    if (param_1 - 0x14U < 3) {
      return 0xe8000106;
    }
    if (param_1 == 0xb) {
      return 0xe800010e;
    }
    if (param_1 == 0xc) {
      return 0xe800010c;
    }
    goto switchD_001284a0_caseD_dae;
  }
  switch(param_1) {
  case 0xdac:
    uVar1 = 0xe800010d;
    break;
  case 0xdad:
    uVar1 = 0xe8000108;
    break;
  case 0xdaf:
    uVar1 = 0xe8000109;
    break;
  case 0xdb0:
    uVar1 = 0xe800010a;
    break;
  case 0xdb3:
    uVar1 = 0xe800010b;
    break;
  default:
    if (param_1 == 0xc61) {
      return 0xe8000125;
    }
    if (param_1 == 0xc7a) {
      return 0xe8000105;
    }
  case 0xdae:
  case 0xdb1:
  case 0xdb2:
switchD_001284a0_caseD_dae:
    uVar1 = 0xe8000126;
  }
  return uVar1;
}

