// rea decompile_all
// name: _uarpPlatformAssetPayloadHeaderProcess
// address: 0x180eab
// body: available
// range: 0x180eab-0x180f89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_uarpPlatformAssetPayloadHeaderProcess(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = _uarpNtohl(*param_1);
  *param_2 = uVar3;
  param_2[1] = param_1[1];
  _uarpVersionEndianSwap(param_1 + 2,param_2 + 2);
  uVar3 = _uarpNtohl(param_1[6]);
  param_2[6] = uVar3;
  uVar3 = _uarpNtohl(param_1[7]);
  param_2[7] = uVar3;
  uVar3 = _uarpNtohl(param_1[8]);
  param_2[8] = uVar3;
  uVar4 = _uarpNtohl(param_1[9]);
  param_2[9] = uVar4;
  *(undefined1 *)(param_2 + 0xd) = 0;
  param_2[0xe] = 0;
  param_2[0x13] = 0;
  param_2[0x20] = uVar4;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  if (((uVar1 <= param_3) && (uVar2 <= param_3)) && (!CARRY4(uVar2,uVar1))) {
    if (param_3 < uVar2 + uVar1) {
      return 0x30;
    }
    uVar1 = param_2[8];
    if ((uVar1 <= param_3) && (uVar4 <= param_3)) {
      if (CARRY4(uVar4,uVar1)) {
        return 8;
      }
      if (param_3 < uVar4 + uVar1) {
        return 0x30;
      }
      return 0;
    }
  }
  return 8;
}

