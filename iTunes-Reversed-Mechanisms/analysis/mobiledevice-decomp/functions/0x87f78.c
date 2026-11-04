// rea decompile_all
// name: _CopyUncompressedBlockToOutput
// address: 0x87f78
// body: available
// range: 0x87f78-0x880f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _CopyUncompressedBlockToOutput
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  bool bVar9;
  
  iVar2 = _BrotliEnsureRingBuffer(param_4);
  if (iVar2 == 0) {
    return 0xffffffe6;
  }
  iVar2 = *(int *)(param_4 + 0x28c);
LAB_00087fac:
  if (iVar2 != 1) goto code_r0x00087fb5;
  goto LAB_00088097;
code_r0x00087fb5:
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_4 + 0x10);
    iVar3 = (0x40U - iVar2 >> 3) + (int)*(ulong *)(param_4 + 0x20);
    if (0x40000000 < *(ulong *)(param_4 + 0x20)) {
      iVar3 = 0x40000000;
    }
    if (*(int *)(param_4 + 0x108) < iVar3) {
      iVar3 = *(int *)(param_4 + 0x108);
    }
    iVar1 = *(int *)(param_4 + 0x4c);
    iVar8 = *(int *)(param_4 + 0x58) - iVar1;
    if (iVar1 + iVar3 <= *(int *)(param_4 + 0x58)) {
      iVar8 = iVar3;
    }
    puVar7 = (undefined1 *)((long)iVar1 + *(long *)(param_4 + 0x78));
    sVar4 = (size_t)iVar8;
    if ((iVar2 - 0x41U < 0xfffffff8) && (sVar5 = sVar4, iVar8 != 0)) {
      do {
        *puVar7 = (char)(*(ulong *)(param_4 + 8) >> ((byte)iVar2 & 0x3f));
        iVar3 = *(int *)(param_4 + 0x10);
        iVar2 = iVar3 + 8;
        *(int *)(param_4 + 0x10) = iVar2;
        puVar7 = puVar7 + 1;
        sVar4 = sVar5 - 1;
        if (0xfffffff7 < iVar3 - 0x39U) break;
        bVar9 = sVar5 != 1;
        sVar5 = sVar4;
      } while (bVar9);
    }
    _memcpy(puVar7,*(void **)(param_4 + 0x18),sVar4);
    *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) - sVar4;
    *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + sVar4;
    iVar3 = *(int *)(param_4 + 0x4c) + iVar8;
    *(int *)(param_4 + 0x4c) = iVar3;
    iVar2 = *(int *)(param_4 + 0x108);
    *(int *)(param_4 + 0x108) = iVar2 - iVar8;
    if (iVar3 < 1 << (*(byte *)(param_4 + 0x29c) & 0x1f)) {
      return (ulong)((iVar2 != iVar8) + 1);
    }
    *(undefined4 *)(param_4 + 0x28c) = 1;
LAB_00088097:
    uVar6 = _WriteRingBuffer(param_4,param_1,param_2,param_3,0);
    if ((int)uVar6 != 1) {
      return uVar6;
    }
    if (*(int *)(param_4 + 0x58) == 1 << (*(byte *)(param_4 + 0x29c) & 0x1f)) {
      *(undefined4 *)(param_4 + 0x54) = *(undefined4 *)(param_4 + 0x50);
    }
    *(undefined4 *)(param_4 + 0x28c) = 0;
    iVar2 = 0;
  }
  goto LAB_00087fac;
}

