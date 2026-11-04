// rea decompile_all
// name: _BrotliEncoderSetParameter
// address: 0x1c97dc
// body: available
// range: 0x1c97dc-0x1c9851 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _BrotliEncoderSetParameter(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1[0x86f] == 0) {
    switch(param_2) {
    case 0:
      *param_1 = param_3;
      break;
    case 1:
      param_1[1] = param_3;
      break;
    case 2:
      param_1[2] = param_3;
      break;
    case 3:
      param_1[3] = param_3;
      break;
    case 4:
      if (1 < param_3) {
        return 0;
      }
      param_1[8] = param_3;
      break;
    case 5:
      *(ulong *)(param_1 + 6) = (ulong)param_3;
      break;
    case 6:
      param_1[9] = (uint)(param_3 != 0);
      break;
    case 7:
      param_1[0x10] = param_3;
      break;
    case 8:
      param_1[0x11] = param_3;
      break;
    case 9:
      if (0x40000000 < param_3) {
        return 0;
      }
      *(ulong *)(param_1 + 4) = (ulong)param_3;
      break;
    default:
      goto switchD_001c9800_default;
    }
    uVar1 = 1;
  }
switchD_001c9800_default:
  return uVar1;
}

