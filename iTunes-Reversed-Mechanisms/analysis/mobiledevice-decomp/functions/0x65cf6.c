// rea decompile_all
// name: _lzbitmap_encode
// address: 0x65cf6
// body: available
// range: 0x65cf6-0x65e29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _lzbitmap_encode(uint *param_1,uint param_2,undefined8 param_3,uint param_4,undefined8 *param_5,
                    undefined4 param_6)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  uint *local_38;
  
  iVar3 = _lzbitmap_init_encode_state(param_5,param_6);
  iVar5 = 0;
  if (iVar3 != 0) {
    param_5[5] = param_3;
    *(uint *)(param_5 + 7) = param_4;
    param_5[6] = (long)param_1 + ((ulong)param_2 - 0x1f);
    iVar5 = 0;
    if (param_1 != (uint *)0x0 && 0x22 < param_2) {
      *param_1 = *(int *)(param_5 + 10) << 0x18 | 0x4d425a;
      pvVar1 = (void *)*param_5;
      uVar4 = *(uint *)((long)param_5 + 0x5c);
      local_48 = 0x8000800080008;
      uStack_40 = 0x8000800080008;
      local_38 = param_1;
      if ((ulong)uVar4 < 0x10) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)(uVar4 & 0xfffffff0);
        _memset_pattern16(pvVar1,&DAT_0032b1a0,uVar8);
      }
      puVar6 = local_38 + 1;
      _memcpy((void *)((long)pvVar1 + uVar8),&local_48,uVar4 - uVar8);
      if (param_4 != 0) {
        uVar4 = *(uint *)(param_5 + 0xc);
        uVar7 = 0;
        do {
          uVar2 = param_4 - uVar7;
          if (uVar4 <= param_4 - uVar7) {
            uVar2 = uVar4;
          }
          puVar6 = (uint *)_lzbitmap_process_block(param_5,puVar6,uVar7,uVar2);
          if (puVar6 == (uint *)0x0) {
            return 0;
          }
          uVar4 = *(uint *)(param_5 + 0xc);
          uVar7 = uVar7 + uVar4;
        } while (uVar7 < param_4);
      }
      iVar5 = 0;
      if ((long)puVar6 + 6U <= (ulong)param_5[6]) {
        *puVar6 = 6;
        *(undefined2 *)(puVar6 + 1) = 0;
        iVar5 = (int)((long)puVar6 + 6U) - (int)local_38;
      }
    }
  }
  return iVar5;
}

