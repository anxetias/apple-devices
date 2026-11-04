// rea decompile_all
// name: _Img4DecodeGetPropertyData
// address: 0x2224a2
// body: available
// range: 0x2224a2-0x222546 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Img4DecodeGetPropertyData
          (undefined8 *param_1,ulong param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulong local_28;
  long lStack_20;
  
  local_28 = 0;
  lStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (param_4 == (undefined4 *)0x0 || param_3 == (undefined8 *)0x0) {
    return 6;
  }
  local_58 = *param_1;
  uStack_50 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = _DERImg4DecodeProperty(&local_58,param_2 | 0xe000000000000000,&local_48);
  if ((int)uVar1 == 0) {
    if (lStack_20 == 4) {
      if (local_28 >> 0x20 == 0) {
        *param_3 = uStack_30;
        uVar1 = 0;
        goto LAB_00222525;
      }
      uVar1 = 7;
    }
    else {
      uVar1 = 2;
    }
  }
  *param_3 = 0;
  local_28 = 0;
LAB_00222525:
  *param_4 = (int)local_28;
  return uVar1;
}

