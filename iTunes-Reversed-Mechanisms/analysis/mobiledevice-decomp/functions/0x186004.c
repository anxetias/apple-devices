// rea decompile_all
// name: _uarpApplePlatformMessageCheckExpectedResponse
// address: 0x186004
// body: available
// range: 0x186004-0x1860a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool _uarpApplePlatformMessageCheckExpectedResponse
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               ushort param_6)

{
  short sVar1;
  
  if ((10 < param_6) &&
     (*(char *)(param_5 + 8) == *(char *)(param_3 + 8) &&
      *(short *)(param_5 + 6) == *(short *)(param_3 + 6))) {
    __uarpOuiAppleGenericFeatures_myOui = 0x9bc;
    DAT_004a4d52 = 99;
    if ((*(char *)(param_5 + 8) == 'c' && *(short *)(param_5 + 6) == 0x9bc) &&
       (sVar1 = _uarpNtohs(*(undefined2 *)(param_5 + 9)), sVar1 == 0x21)) {
      sVar1 = _uarpNtohs(*(undefined2 *)(param_3 + 9));
      if (param_6 < 0x17) {
        return false;
      }
      if (sVar1 != 0x20) {
        return false;
      }
      return *(int *)(param_5 + 0xf) == *(int *)(param_3 + 0xb);
    }
  }
  return false;
}

