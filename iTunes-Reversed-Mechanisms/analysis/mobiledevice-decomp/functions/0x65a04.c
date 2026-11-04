// rea decompile_all
// name: _lz4_decode_buffer
// address: 0x65a04
// body: available
// range: 0x65a04-0x65bb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _lz4_decode_buffer(void *param_1,ulong param_2,int *param_3,ulong param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  void *local_40;
  int *local_38;
  
  pvVar2 = param_1;
  do {
    if (param_2 == 0) {
      return (long)pvVar2 - (long)param_1;
    }
    if (param_4 < 4) {
      return 0;
    }
    iVar3 = *param_3;
    local_40 = pvVar2;
    if (iVar3 == 0x2d347662) {
      if (param_4 < 8) {
        return 0;
      }
      uVar4 = (ulong)(uint)param_3[1];
      local_38 = param_3 + 2;
      uVar5 = param_4 - 8;
      param_4 = uVar5 - uVar4;
      if (uVar5 < uVar4) {
        return 0;
      }
      if (param_2 <= uVar4) {
        _memcpy(pvVar2,local_38,param_2);
        return (long)local_40 + (param_2 - (long)param_1);
      }
      _memcpy(pvVar2,local_38,uVar4);
      local_40 = (void *)((long)local_40 + uVar4);
      local_38 = (int *)((long)local_38 + uVar4);
    }
    else {
      if (iVar3 != 0x31347662) {
        if (iVar3 == 0x24347662) {
          return (long)pvVar2 - (long)param_1;
        }
        return 0;
      }
      if (param_4 < 0xc) {
        return 0;
      }
      uVar1 = param_3[1];
      uVar5 = (ulong)(uint)param_3[2];
      piVar6 = param_3 + 3;
      uVar4 = param_4 - 0xc;
      param_4 = uVar4 - uVar5;
      if (((uVar4 < uVar5) ||
          (((local_38 = piVar6, 0x80 < param_2 && (0x80 < (uint)param_3[2])) &&
           (iVar3 = _lz4_decode_asm(&local_40,param_1,(long)pvVar2 + (param_2 - 0x80),&local_38,
                                    (long)param_3 + (uVar5 - 0x74)), iVar3 != 0)))) ||
         (iVar3 = _lz4_decode(&local_40,param_1,(long)pvVar2 + param_2,&local_38,
                              uVar5 + (long)piVar6), iVar3 != 0)) {
        return 0;
      }
      uVar4 = (long)local_40 - (long)pvVar2;
      if (uVar4 == param_2) {
        return (long)local_40 - (long)param_1;
      }
      if (uVar4 != uVar1) {
        return 0;
      }
      if ((long)local_38 - (long)piVar6 != uVar5) {
        return 0;
      }
    }
    param_2 = param_2 - uVar4;
    pvVar2 = local_40;
    param_3 = local_38;
  } while( true );
}

