// rea decompile_all
// name: _image3InstantiateFromBuffer
// address: 0x1b902a
// body: available
// range: 0x1b902a-0x1b9167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _image3InstantiateFromBuffer(undefined8 *param_1,int *param_2,ulong param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (param_3 < 0x14) {
    return 0x16;
  }
  if (*param_2 != 0x496d6733) {
    return 0x16;
  }
  uVar1 = param_2[2];
  if (param_3 - 0x14 < (ulong)uVar1) {
    return 0x16;
  }
  if (uVar1 < (uint)param_2[3]) {
    return 0x16;
  }
  if ((ulong)(uint)param_2[1] < (ulong)uVar1 + 0x14) {
    return 0x16;
  }
  puVar4 = (undefined8 *)_image3Malloc(0x28);
  if (puVar4 == (undefined8 *)0x0) {
LAB_001b9143:
    uVar8 = 0xc;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[4] = 0;
    if (param_2[3] == 0) {
      *(int *)(puVar4 + 3) = param_2[2];
      *(undefined4 *)((long)puVar4 + 0x1c) = 0xffffffff;
      uVar1 = param_2[2];
      if (uVar1 != 0) {
        uVar7 = 0;
        do {
          uVar2 = *(uint *)((long)param_2 + uVar7 + 0x18);
          iVar3 = (int)uVar7;
          uVar6 = uVar2 + iVar3;
          uVar7 = (ulong)uVar6;
          if ((uVar1 < uVar6) || (uVar2 < 0xc)) {
            _image3Free(puVar4,0x28);
            return 0x16;
          }
        } while (uVar6 != uVar1);
        *(int *)((long)puVar4 + 0x1c) = iVar3;
      }
LAB_001b90fd:
      puVar4[2] = (ulong)(uint)param_2[2] + 0x14;
      pvVar5 = (void *)_image3Malloc();
      *puVar4 = pvVar5;
      if (pvVar5 == (void *)0x0) {
        _image3Free(puVar4,0x28);
        goto LAB_001b9143;
      }
      _memcpy(pvVar5,param_2,puVar4[2]);
      *(byte *)((long)puVar4 + 10) = *(byte *)((long)puVar4 + 10) | 4;
    }
    else {
      *(undefined4 *)(puVar4 + 1) = 0x20001;
      if (param_4 != '\0') goto LAB_001b90fd;
      *puVar4 = param_2;
      puVar4[2] = param_3;
    }
    *param_1 = puVar4;
    uVar8 = 0;
  }
  return uVar8;
}

