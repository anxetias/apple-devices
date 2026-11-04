// rea decompile_all
// name: _DecodeVarLenUint8
// address: 0x87392
// body: available
// range: 0x87392-0x8754c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DecodeVarLenUint8(long param_1,ulong *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  iVar2 = *(int *)(param_1 + 0x290);
  if (iVar2 == 0) {
    uVar3 = (ulong)(uint)param_2[1];
    if ((uint)param_2[1] == 0x40) {
      if (param_2[3] == 0) {
        return 2;
      }
      uVar3 = *param_2;
      *param_2 = uVar3 >> 8;
      uVar5 = (ulong)*(byte *)param_2[2] << 0x38 | uVar3 >> 8;
      *param_2 = uVar5;
      param_2[3] = param_2[3] - 1;
      param_2[2] = (ulong)((byte *)param_2[2] + 1);
      uVar3 = 0x38;
    }
    else {
      uVar5 = *param_2;
    }
    iVar2 = (int)uVar3 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if ((uVar5 >> (uVar3 & 0x3f) & 1) == 0) {
      *param_3 = 0;
      return 1;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return 0xffffffe1;
      }
      uVar1 = *param_3;
      goto LAB_0008747a;
    }
    iVar2 = (int)param_2[1];
  }
  if (iVar2 - 0x3eU < 3) {
    if (param_2[3] == 0) {
      *(undefined4 *)(param_1 + 0x290) = 1;
      return 2;
    }
    uVar3 = *param_2;
    *param_2 = uVar3 >> 8;
    uVar3 = (ulong)*(byte *)param_2[2] << 0x38 | uVar3 >> 8;
    *param_2 = uVar3;
    iVar2 = iVar2 + -8;
    param_2[3] = param_2[3] - 1;
    param_2[2] = (ulong)((byte *)param_2[2] + 1);
  }
  else {
    uVar3 = *param_2;
  }
  uVar3 = uVar3 >> ((byte)iVar2 & 0x3f);
  *(int *)(param_2 + 1) = iVar2 + 3;
  uVar1 = (uint)uVar3 & 7;
  if ((uVar3 & 7) == 0) {
    *param_3 = 1;
    *(undefined4 *)(param_1 + 0x290) = 0;
    return 1;
  }
  *param_3 = uVar1;
LAB_0008747a:
  iVar2 = (int)param_2[1];
  uVar4 = 0x40 - iVar2;
  if (uVar4 < uVar1) {
    uVar5 = param_2[3];
    do {
      uVar5 = uVar5 - 1;
      if (uVar5 == 0xffffffffffffffff) {
        *(undefined4 *)(param_1 + 0x290) = 2;
        return 2;
      }
      uVar3 = *param_2;
      *param_2 = uVar3 >> 8;
      uVar3 = (ulong)*(byte *)param_2[2] << 0x38 | uVar3 >> 8;
      *param_2 = uVar3;
      iVar2 = iVar2 + -8;
      *(int *)(param_2 + 1) = iVar2;
      param_2[3] = uVar5;
      param_2[2] = (ulong)((byte *)param_2[2] + 1);
      uVar4 = uVar4 + 8;
    } while (uVar4 < uVar1);
  }
  else {
    uVar3 = *param_2;
  }
  uVar4 = *(uint *)(&_kBrotliBitMask + (ulong)uVar1 * 4);
  *(uint *)(param_2 + 1) = iVar2 + uVar1;
  *param_3 = (1 << ((byte)*param_3 & 0x1f)) + ((uint)(uVar3 >> ((byte)iVar2 & 0x3f)) & uVar4);
  *(undefined4 *)(param_1 + 0x290) = 0;
  return 1;
}

