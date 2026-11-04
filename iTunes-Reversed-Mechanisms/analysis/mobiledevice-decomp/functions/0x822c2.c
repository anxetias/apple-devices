// rea decompile_all
// name: __tr_stored_block
// address: 0x822c2
// body: available
// range: 0x822c2-0x823e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __tr_stored_block(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  
  iVar3 = *(int *)(param_1 + 0x1724);
  if (iVar3 < 0xe) {
    *(ushort *)(param_1 + 0x1720) =
         *(ushort *)(param_1 + 0x1720) | (ushort)(param_4 << ((byte)iVar3 & 0x1f));
    iVar3 = iVar3 + 3;
  }
  else {
    uVar5 = (ushort)(param_4 << ((byte)iVar3 & 0x1f)) | *(ushort *)(param_1 + 0x1720);
    *(ushort *)(param_1 + 0x1720) = uVar5;
    uVar2 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar2 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar2) = (char)uVar5;
    uVar2 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar2 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar2) = *(undefined1 *)(param_1 + 0x1721);
    *(short *)(param_1 + 0x1720) =
         (short)((param_4 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f));
    iVar3 = *(int *)(param_1 + 0x1724) + -0xd;
  }
  *(int *)(param_1 + 0x1724) = iVar3;
  _bi_windup(param_1);
  *(undefined4 *)(param_1 + 0x171c) = 8;
  uVar2 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar2) = (char)param_3;
  uVar2 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar2) = (char)(param_3 >> 8);
  uVar2 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar2) = (char)(param_3 ^ 0xffff);
  uVar2 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar2) = (char)((param_3 ^ 0xffff) >> 8);
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined1 *)(param_2 + lVar4);
      uVar2 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar2 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar2) = uVar1;
      lVar4 = lVar4 + 1;
    } while (param_3 != (uint)lVar4);
  }
  return;
}

