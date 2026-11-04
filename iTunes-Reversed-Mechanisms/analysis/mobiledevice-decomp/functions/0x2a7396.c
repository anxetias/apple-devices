// rea decompile_all
// name: _Img4DecodeEvaluateDictionaryProperties
// address: 0x2a7396
// body: available
// range: 0x2a7396-0x2a74b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _Img4DecodeEvaluateDictionaryProperties
                (undefined8 param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  ulong local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (param_3 == (code *)0x0) {
    uStack_b0 = 6;
  }
  else {
    uStack_b0 = _DERDecodeSeqContentInit(param_1,&local_78);
    if ((int)uStack_b0 == 0) {
      do {
        uVar1 = _DERDecodeSeqNext(&local_78,&local_48);
        if (uVar1 == 1) {
          return 0;
        }
        if (uVar1 != 0) {
          return (ulong)uVar1;
        }
        uVar2 = _DERImg4DecodeProperty(&uStack_40,local_48,&local_a8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if ((((0x16 < uStack_80) || ((0x400016UL >> (uStack_80 & 0x3f) & 1) == 0)) ||
            (local_48 >> 0x3e == 0)) || ((local_48 & 0x2000000000000000) == 0)) {
          return 2;
        }
        if (local_38 >> 0x20 != 0) {
          return 7;
        }
        local_68 = uStack_40;
        uStack_60 = CONCAT44(uStack_60._4_4_,(int)local_38);
        local_58 = uStack_80;
        uStack_b0 = (*param_3)(local_48,&local_68,param_2,param_4);
      } while ((int)uStack_b0 == 0);
    }
  }
  return uStack_b0;
}

