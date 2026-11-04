// rea decompile_all
// name: FUN_10000a173
// address: 0x10000a173
// body: available
// range: 0x10000a173-0x10000a2ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10000a173(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  
  if ((*(int *)(param_1 + 0x1ac) == 2) || (*(int *)(param_1 + 0x1ac) == 4)) {
    if (1 < *(uint *)(param_1 + 0x1b0)) {
      lVar3 = FUN_100000aa4("MuxInterfaceLogLevelSend",0x69f,1);
      if (lVar3 != 0) {
        lVar1 = *(long *)(lVar3 + 0x28);
        uVar4 = (ulong)*(uint *)(param_1 + 0x1a8);
        *(ulong *)(lVar3 + 0x20) = lVar1 + uVar4;
        *(undefined4 *)(lVar3 + 0x48) = 1;
        *(long *)(lVar3 + 0x40) = param_1;
        *(undefined1 *)(lVar1 + uVar4) = 0;
        *(undefined1 *)(lVar1 + uVar4) = (undefined1)DAT_100021030;
        *(undefined8 *)(lVar3 + 0x60) = 0;
        *(undefined8 *)(lVar3 + 0x68) = 0;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined8 *)(lVar3 + 0x58) = 0;
        *(undefined8 *)(lVar3 + 0x70) = 0;
        iVar2 = FUN_10000932f(param_1,lVar3,2,FUN_10000b769,lVar3);
        if (iVar2 == 0) {
          return 0;
        }
        FUN_100000b8b("MuxInterfaceLogLevelSend",0x6b9,lVar3);
        return iVar2;
      }
      iVar2 = -0x1ffffd43;
      if (DAT_100021030 < 2) {
        return -0x1ffffd43;
      }
      pcVar5 = &cf__sFailed_outofmemory;
      uVar6 = 2;
      goto LAB_10000a272;
    }
    if (DAT_100021030 < 7) {
      return 0;
    }
    pcVar5 = &cf__scalledfromunsupportedversion;
  }
  else {
    if (DAT_100021030 < 7) {
      return 0;
    }
    pcVar5 = &cf__scalledfornon_runningdevice;
  }
  iVar2 = 0;
  uVar6 = 7;
LAB_10000a272:
  FUN_1000008d2(uVar6,0,pcVar5,"MuxInterfaceLogLevelSend");
  return iVar2;
}

