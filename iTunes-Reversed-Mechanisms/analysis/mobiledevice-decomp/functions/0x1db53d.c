// rea decompile_all
// name: _lz4_encode_buffer
// address: 0x1db53d
// body: available
// range: 0x1db53d-0x1db6e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _lz4_encode_buffer(undefined4 *param_1,ulong param_2,long param_3,ulong param_4,void *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *local_48;
  undefined4 *local_40;
  long local_38;
  
  local_38 = param_3;
  _memset_pattern8(param_5,&DAT_0032aea0,0x8000);
  lVar4 = param_3;
  local_40 = param_1;
  for (; param_4 != 0; param_4 = param_4 - uVar6) {
    if (param_2 < 0xc) goto LAB_001db6c3;
    uVar6 = 0x10000;
    if (param_4 < 0x10000) {
      uVar6 = param_4;
    }
    puVar1 = local_40 + 3;
    local_48 = puVar1;
    _lz4_encode_2gb(&local_48,param_2 - 0xc,&local_38,param_3,uVar6,param_5,0);
    if ((ulong)(local_38 - lVar4) < uVar6) {
      local_38 = lVar4 + uVar6;
LAB_001db626:
      lVar4 = local_38;
      *local_40 = 0x2d347662;
      local_40[1] = (int)uVar6;
      uVar7 = param_2 - 8;
      param_2 = uVar7 - uVar6;
      if (uVar7 < uVar6) goto LAB_001db6c3;
      _memcpy(local_40 + 2,(void *)(local_38 - uVar6),uVar6);
      local_48 = (undefined4 *)((long)local_40 + uVar6 + 8);
    }
    else {
      if (local_48 == puVar1) goto LAB_001db626;
      uVar7 = ((long)local_48 - (long)puVar1) + 0xc;
      if (uVar6 + 8 <= uVar7) goto LAB_001db626;
      *local_40 = 0x31347662;
      local_40[1] = (int)uVar6;
      local_40[2] = (int)((long)local_48 - (long)puVar1);
      param_2 = param_2 - uVar7;
      lVar4 = local_38;
    }
    if (0x5fffffff < lVar4 - param_3) {
      lVar3 = 0;
      do {
        uVar2 = *(uint *)((long)param_5 + lVar3 * 8);
        if (!SBORROW4(0,uVar2)) {
          iVar5 = uVar2 + 0xc0000000;
          if (uVar2 < 0x40000000) {
            iVar5 = -0x80000000;
          }
          *(int *)((long)param_5 + lVar3 * 8) = iVar5;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x1000);
      param_3 = param_3 + 0x40000000;
    }
    local_40 = local_48;
  }
  if (param_2 < 4) {
LAB_001db6c3:
    lVar4 = 0;
  }
  else {
    *local_40 = 0x24347662;
    lVar4 = (long)local_40 + (4 - (long)param_1);
  }
  return lVar4;
}

