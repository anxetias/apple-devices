// rea decompile_all
// name: _WriteRingBuffer
// address: 0x86c90
// body: available
// range: 0x86c90-0x86dc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _WriteRingBuffer(long param_1,ulong *param_2,long *param_3,long *param_4,int param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  iVar3 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar3 <= *(int *)(param_1 + 0x4c)) {
    iVar2 = iVar3;
  }
  uVar9 = ((long)iVar2 - *(ulong *)(param_1 + 0x178)) + (long)iVar3 * *(long *)(param_1 + 0x170);
  uVar1 = *param_2;
  uVar7 = uVar9;
  if (uVar1 < uVar9) {
    uVar7 = uVar1;
  }
  if (*(int *)(param_1 + 0x108) < 0) {
    iVar3 = -9;
  }
  else {
    uVar4 = uVar1;
    if (param_3 != (long *)0x0) {
      pvVar6 = (void *)((*(ulong *)(param_1 + 0x178) & (long)*(int *)(param_1 + 0x5c)) +
                       *(long *)(param_1 + 0x78));
      if ((void *)*param_3 == (void *)0x0) {
        *param_3 = (long)pvVar6;
      }
      else {
        _memcpy((void *)*param_3,pvVar6,uVar7);
        *param_3 = *param_3 + uVar7;
        uVar4 = *param_2;
      }
    }
    *param_2 = uVar4 - uVar7;
    lVar8 = uVar7 + *(long *)(param_1 + 0x178);
    *(long *)(param_1 + 0x178) = lVar8;
    if (param_4 != (long *)0x0) {
      *param_4 = lVar8;
    }
    iVar5 = 1 << (*(byte *)(param_1 + 0x29c) & 0x1f);
    iVar3 = 1;
    iVar2 = *(int *)(param_1 + 0x58);
    if (uVar1 < uVar9) {
      iVar3 = 3;
      if (param_5 == 0) {
        iVar3 = (iVar2 == iVar5) + 1 + (uint)(iVar2 == iVar5);
      }
    }
    else if (iVar2 == iVar5) {
      iVar5 = *(int *)(param_1 + 0x4c) - iVar2;
      if (iVar2 <= *(int *)(param_1 + 0x4c)) {
        *(int *)(param_1 + 0x4c) = iVar5;
        *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x170) + 1;
        *(ushort *)(param_1 + 0x298) =
             ((ushort)*(undefined4 *)(param_1 + 0x298) & 0xfff7) + (ushort)(iVar5 != 0) * 8;
      }
    }
  }
  return iVar3;
}

