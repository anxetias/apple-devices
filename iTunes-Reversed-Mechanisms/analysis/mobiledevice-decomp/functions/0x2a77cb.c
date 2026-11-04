// rea decompile_all
// name: _Img4DecodeEvaluateTrustWithCallbacks
// address: 0x2a77cb
// body: available
// range: 0x2a77cb-0x2a7965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Img4DecodeEvaluateTrustWithCallbacks
          (uint param_1,undefined1 *param_2,long param_3,code *param_4,code *param_5,code *param_6,
          undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_40;
  code *local_38;
  
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uVar1 = 6;
  if (((param_2 != (undefined1 *)0x0) && (param_3 != 0)) && (*(long *)(param_2 + 0x18) != 0)) {
    local_40 = param_5;
    local_38 = param_6;
    (*param_6)(*(undefined8 *)(param_2 + 0x108),*(undefined8 *)(param_2 + 0x110),param_2 + 0x178);
    uVar1 = (*param_4)(*(undefined8 *)(param_2 + 0x128),*(undefined4 *)(param_2 + 0x130),
                       *(undefined8 *)(param_2 + 0x118),*(undefined4 *)(param_2 + 0x120),
                       param_2 + 0x178,0x14,param_2 + 0x138,param_2 + 0x140,param_7);
    if ((int)uVar1 == 0) {
      uVar1 = _DERImg4DecodeParseManifestProperties(param_2,param_2 + 0x28,param_2 + 0x38);
      if ((int)uVar1 == 0) {
        uVar1 = _DERImg4DecodeFindProperty
                          (param_2 + 0x28,(ulong)param_1 | 0xe000000000000000,0x2000000000000011,
                           &local_78);
        if ((int)uVar1 == 0) {
          *(undefined4 *)(param_2 + 0x48) = (undefined4)uStack_60;
          *(undefined4 *)(param_2 + 0x4c) = uStack_60._4_4_;
          *(undefined4 *)(param_2 + 0x50) = (undefined4)local_58;
          *(undefined4 *)(param_2 + 0x54) = local_58._4_4_;
          uVar1 = (*local_40)(param_2,param_7);
          if ((int)uVar1 == 0) {
            if ((*(long *)(param_2 + 0x88) != 0) && (*(long *)(param_2 + 0x90) != 0)) {
              (*local_38)(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                          param_2 + 0xb8);
              *param_2 = 1;
            }
            uVar1 = _Img4DecodeEvaluateDictionaryProperties(param_2 + 0x38,0,param_3,param_7);
            if ((int)uVar1 == 0) {
              uVar1 = _Img4DecodeEvaluateDictionaryProperties(param_2 + 0x48,1,param_3,param_7);
              if ((int)uVar1 == 0) {
                (*local_38)(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                            param_2 + 0x148);
                param_2[1] = 1;
                uVar1 = 0;
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

