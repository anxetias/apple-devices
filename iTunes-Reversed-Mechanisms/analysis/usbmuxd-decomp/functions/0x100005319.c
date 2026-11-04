// rea decompile_all
// name: FUN_100005319
// address: 0x100005319
// body: available
// range: 0x100005319-0x100005434 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100005427 to 0x100000b8b FUN_100000b8b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100005319(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ushort uVar6;
  int iVar7;
  
  if (((*(uint *)(param_1 + 0x7c) & 4) == 0) &&
     (*(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 2, *(int *)(param_1 + 0x80) == 0)) {
    iVar7 = (0x20000U - *(int *)(param_1 + 0xa0) & 0xffff00) + *(int *)(param_1 + 100);
    lVar4 = FUN_100000aa4("MuxTCPSendAck",0x3d2,1);
    if (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x28);
      uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x1a8);
      *(ulong *)(lVar4 + 0x20) = lVar3 + uVar5;
      *(undefined4 *)(lVar4 + 0x48) = 0x14;
      *(long *)(lVar4 + 0x40) = param_1;
      *(undefined4 *)(lVar3 + uVar5) = *(undefined4 *)(param_1 + 0x58);
      uVar1 = *(uint *)(param_1 + 0x5c);
      *(uint *)(lVar3 + 4 + uVar5) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar2 = *(uint *)(param_1 + 100);
      *(uint *)(lVar3 + 8 + uVar5) =
           uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      *(byte *)(lVar3 + 0xc + uVar5) = *(byte *)(lVar3 + 0xc + uVar5) & 0xf | 0x50;
      *(undefined1 *)(lVar3 + 0xd + uVar5) = 0x10;
      uVar6 = (ushort)((uint)(0x20000 - *(int *)(param_1 + 0xa0)) >> 8);
      *(ushort *)(lVar3 + 0xe + uVar5) = uVar6 << 8 | uVar6 >> 8;
      *(ulong *)(lVar4 + 0x30) = lVar3 + uVar5;
      *(uint *)(lVar4 + 0x38) = uVar1;
      if (0 < iVar7 - *(int *)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x74) = iVar7;
      }
      iVar7 = FUN_100005435(param_1,lVar4);
      if (iVar7 != 0) {
        FUN_100000b8b("MuxTCPSendAck",0x3ef,lVar4);
        return;
      }
      *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfd;
    }
  }
  return;
}

