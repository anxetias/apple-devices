// rea decompile_all
// name: _Img4DecodeGetObjectProperty
// address: 0x222153
// body: available
// range: 0x222153-0x222204 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Img4DecodeGetObjectProperty
          (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar1 = 6;
  if (param_5 != (undefined8 *)0x0 && param_1 != 0) {
    uVar1 = _DERImg4DecodeParseManifestProperties(param_1,&local_38,0);
    if ((((int)uVar1 == 0) &&
        (uVar1 = _DERImg4DecodeFindProperty
                           (&local_38,param_2 | 0xe000000000000000,0x2000000000000011,&local_68),
        (int)uVar1 == 0)) &&
       (uVar1 = _DERImg4DecodeFindProperty(&uStack_50,param_3,param_4,param_5), (int)uVar1 == 0)) {
      return 0;
    }
    param_5[4] = 0;
    param_5[5] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    *param_5 = 0;
    param_5[1] = 0;
  }
  return uVar1;
}

