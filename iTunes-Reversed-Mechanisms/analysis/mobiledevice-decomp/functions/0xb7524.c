// rea decompile_all
// name: _AFCErrnoToAFCDomainError
// address: 0xb7524
// body: available
// range: 0xb7524-0xb75d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AFCErrnoToAFCDomainError(int param_1,int param_2)

{
  if (param_1 < 0) goto switchD_000b7548_caseD_6;
  if (0x3b < param_1) {
    if (param_1 < 0x50) {
      if (param_1 == 0x3c) {
        return -0x17ffbff4;
      }
      if (param_1 == 0x3f) goto switchD_000b7548_caseD_16;
      if (param_1 == 0x4d) goto switchD_000b7548_caseD_7;
    }
    else if (param_1 - 0x50U < 2) goto switchD_000b7548_caseD_1;
    goto switchD_000b7548_caseD_6;
  }
  switch(param_1) {
  case 0:
    break;
  case 1:
  case 0xd:
switchD_000b7548_caseD_1:
    param_1 = -0x17ffbff6;
    break;
  case 2:
  case 3:
    param_1 = -0x17ffbff8;
    break;
  case 4:
    param_1 = -0x17ffbfeb;
    break;
  case 5:
    param_1 = -0x17ffbfec;
    break;
  case 7:
  case 0xc:
  case 0x17:
  case 0x18:
  case 0x1b:
  case 0x1f:
switchD_000b7548_caseD_7:
    param_1 = -0x17ffbffd;
    break;
  case 9:
switchD_000b7548_caseD_9:
    param_1 = -0x17ffbff5;
    break;
  case 0x10:
    param_1 = -0x17ffbfef;
    break;
  case 0x11:
    param_1 = -0x17ffbff0;
    break;
  case 0x15:
    param_1 = -0x17ffbff7;
    break;
  case 0x16:
switchD_000b7548_caseD_16:
    param_1 = -0x17ffbff9;
    break;
  case 0x1c:
    param_1 = -0x17ffbfee;
    break;
  case 0x23:
    param_1 = -0x17ffbfed;
    break;
  case 0x24:
    param_1 = -0x17ffbfea;
    break;
  case 0x2d:
    param_1 = -0x17ffbff1;
    break;
  default:
    if (param_1 == 0x39) goto switchD_000b7548_caseD_9;
  case 6:
  case 8:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x19:
  case 0x1a:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
switchD_000b7548_caseD_6:
    param_1 = param_2;
  }
  return param_1;
}

