// rea decompile_all
// name: __tr_align
// address: 0x823e9
// body: available
// range: 0x823e9-0x82596 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __tr_align(long param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x1724);
  uVar3 = (ushort)(2 << ((byte)iVar2 & 0x1f)) | *(ushort *)(param_1 + 0x1720);
  uVar4 = (uint)uVar3;
  *(ushort *)(param_1 + 0x1720) = uVar3;
  if (iVar2 < 0xe) {
    iVar2 = iVar2 + 3;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar4 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) = (char)uVar3;
    uVar4 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar4 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) = *(undefined1 *)(param_1 + 0x1721);
    uVar4 = 2 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f);
    *(short *)(param_1 + 0x1720) = (short)uVar4;
    iVar2 = *(int *)(param_1 + 0x1724) + -0xd;
  }
  *(int *)(param_1 + 0x1724) = iVar2;
  if (iVar2 < 10) {
    iVar2 = iVar2 + 7;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)uVar4;
    uVar4 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar4 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
    iVar2 = *(int *)(param_1 + 0x1724) + -9;
  }
  *(int *)(param_1 + 0x1724) = iVar2;
  _bi_flush(param_1);
  iVar2 = *(int *)(param_1 + 0x1724);
  if ((*(int *)(param_1 + 0x171c) - iVar2) + 0xb < 9) {
    uVar3 = (ushort)(2 << ((byte)iVar2 & 0x1f)) | *(ushort *)(param_1 + 0x1720);
    uVar4 = (uint)uVar3;
    *(ushort *)(param_1 + 0x1720) = uVar3;
    if (iVar2 < 0xe) {
      iVar2 = iVar2 + 3;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar4 + 1;
      *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) = (char)uVar3;
      uVar4 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar4 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) = *(undefined1 *)(param_1 + 0x1721);
      uVar4 = 2 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f);
      *(short *)(param_1 + 0x1720) = (short)uVar4;
      iVar2 = *(int *)(param_1 + 0x1724) + -0xd;
    }
    *(int *)(param_1 + 0x1724) = iVar2;
    if (iVar2 < 10) {
      iVar2 = iVar2 + 7;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar1 + 1;
      *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)uVar4;
      uVar4 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar4 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) = *(undefined1 *)(param_1 + 0x1721);
      *(undefined2 *)(param_1 + 0x1720) = 0;
      iVar2 = *(int *)(param_1 + 0x1724) + -9;
    }
    *(int *)(param_1 + 0x1724) = iVar2;
    _bi_flush(param_1);
  }
  *(undefined4 *)(param_1 + 0x171c) = 7;
  return;
}

