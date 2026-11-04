// rea decompile_all
// name: FUN_1000041b4
// address: 0x1000041b4
// body: available
// range: 0x1000041b4-0x100004397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100004278 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000042b7 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100004393 to 0x100000b8b FUN_100000b8b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000041b4(long param_1,undefined2 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    if (1 < DAT_100021030) {
      FUN_1000008d2(2,0,&cf__smieisNULL,"MuxTCPSendRST");
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != 1) {
      return;
    }
    lVar2 = FUN_100000aa4("MuxTCPSendRST",0x41b,1);
    if (lVar2 == 0) {
      if (DAT_100021030 < 2) {
        return;
      }
      uVar6 = FUN_100008d22(param_1);
      FUN_1000008d2(2,0,&cf__sError_Mallocfailed_didn_tsendRSTto_s,"MuxTCPSendRST",uVar6);
      return;
    }
    puVar3 = (undefined4 *)((ulong)*(uint *)(param_1 + 0x1a8) + *(long *)(lVar2 + 0x28));
    *(undefined4 **)(lVar2 + 0x20) = puVar3;
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
    *(undefined4 *)(lVar2 + 0x48) = 0x14;
    *(long *)(lVar2 + 0x40) = param_1;
    if (param_2 == (undefined2 *)0x0) {
      if (param_3 == 0) {
        if (1 < DAT_100021030) {
          FUN_1000008d2(2,0,&cf__sprogrammaticerror_th__NULL__sce__NULL,"MuxTCPSendRST");
        }
        uVar6 = 0x43d;
        goto LAB_100004388;
      }
      *puVar3 = *(undefined4 *)(param_3 + 0x58);
      uVar5 = *(uint *)(param_3 + 0x5c);
      uVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      puVar3[1] = uVar4;
      uVar5 = *(uint *)(param_3 + 100);
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    }
    else {
      *(undefined2 *)puVar3 = param_2[1];
      *(undefined2 *)((long)puVar3 + 2) = *param_2;
      puVar3[1] = 0;
      uVar5 = *(uint *)(param_2 + 2);
      uVar4 = 0;
    }
    puVar3[2] = uVar5;
    *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) & 0xf | 0x50;
    *(undefined1 *)((long)puVar3 + 0xd) = 4;
    *(undefined2 *)((long)puVar3 + 0xe) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(uint *)(lVar2 + 0x38) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if ((6 < DAT_100021030) && (DAT_10002128c < 0)) {
      FUN_100004010(param_3,*(undefined8 *)(lVar2 + 0x30),*(undefined4 *)(lVar2 + 0x48),"OUT");
    }
    iVar1 = FUN_1000052d9(param_1,lVar2);
    if (iVar1 != 0) {
      uVar6 = 0x451;
LAB_100004388:
      FUN_100000b8b("MuxTCPSendRST",uVar6,lVar2);
      return;
    }
  }
  return;
}

