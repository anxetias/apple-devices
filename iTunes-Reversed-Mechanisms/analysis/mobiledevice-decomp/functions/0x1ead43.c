// rea decompile_all
// name: _lzfse_encode_buffer
// address: 0x1ead43
// body: available
// range: 0x1ead43-0x1eaf9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _lzfse_encode_buffer
                (undefined4 *param_1,ulong param_2,void *param_3,ulong param_4,undefined8 param_5,
                int param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  void *local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined4 *puStack_b0;
  undefined4 *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *local_38;
  
  uVar3 = param_4;
  if (7 < param_4) {
    if (param_4 < 0x1000) {
      if ((0x10 < param_2) &&
         (uVar2 = _lzvn_encode_buffer(param_1 + 3,param_2 - 0x10,param_3,param_4,param_5,
                                      param_6 == 0x802 | 0x900), uVar2 < param_4 && uVar2 != 0)) {
        *param_1 = 0x6e787662;
        param_1[1] = (int)param_4;
        param_1[2] = (int)uVar2;
        *(undefined4 *)((long)param_1 + uVar2 + 0xc) = 0x24787662;
        return uVar2 + 0x10;
      }
    }
    else {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (undefined4 *)0x0;
      lStack_a0 = 0;
      local_b8 = 0;
      puStack_b0 = (undefined4 *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (void *)0x0;
      uStack_d0 = 0;
      local_48 = 0;
      local_38 = param_3;
      iVar1 = _lzfseEncodeInitState(&local_d8,param_6,param_5);
      param_3 = local_38;
      if (iVar1 == 0) {
        lStack_a0 = (long)param_1 + param_2;
        local_d8 = local_38;
        uStack_c0 = 0;
        uStack_d0 = param_4;
        puStack_b0 = param_1;
        local_a8 = param_1;
        if (0x7ffffffe < param_4) {
          uStack_d0 = 0x40000;
          local_b8 = 0x3fff8;
          iVar1 = _lzfseEncodeBase();
          param_3 = local_38;
          if (iVar1 != 0) goto LAB_001eae39;
          uStack_d0 = param_4;
          do {
            uVar3 = uStack_d0;
            uStack_d0 = 0x80000;
            local_b8 = 0x7fff8;
            iVar1 = _lzfseEncodeBase(&local_d8);
            if (iVar1 != 0) {
              uVar3 = uVar3 - 0x40000;
              param_3 = local_38;
              goto LAB_001eae39;
            }
            _lzfseEncodeTranslateState(&local_d8,0x40000);
            uStack_d0 = uVar3 - 0x40000;
          } while (0x3ffff < uVar3 - 0x80000);
          uVar3 = uVar3 - 0x80000;
        }
        local_b8 = uStack_d0 - 8;
        iVar1 = _lzfseEncodeBase();
        param_3 = local_38;
        if ((iVar1 == 0) && (iVar1 = _lzfseEncodeFinish(&local_d8), param_3 = local_38, iVar1 == 0))
        {
          return (long)puStack_b0 - (long)param_1;
        }
      }
    }
  }
LAB_001eae39:
  uVar2 = param_4 + 0xc;
  if (param_4 < 0x7fffffff && uVar2 <= param_2) {
    *param_1 = 0x2d787662;
    param_1[1] = (int)uVar3;
    _memcpy(param_1 + 2,param_3,param_4);
    *(undefined4 *)((long)param_1 + param_4 + 8) = 0x24787662;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

