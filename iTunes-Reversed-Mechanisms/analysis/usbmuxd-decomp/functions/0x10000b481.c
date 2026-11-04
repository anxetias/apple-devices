// rea decompile_all
// name: FUN_10000b481
// address: 0x10000b481
// body: available
// range: 0x10000b481-0x10000b768 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000b720 to 0x100008fdb FUN_100008fdb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000b755 to 0x10000907c FUN_10000907c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000b481(long *param_1,int param_2,ulong param_3)

{
  undefined4 uVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  
  lVar8 = *param_1;
  *(int *)(lVar8 + 0x1bc) = *(int *)(lVar8 + 0x1bc) + -1;
  if ((param_2 != 0) || (iVar7 = 0, *(int *)(param_1[1] + 0x48) != (int)param_3)) {
    iVar3 = (**(code **)(**(long **)(lVar8 + 0x158) + 0xd8))
                      (*(long **)(lVar8 + 0x158),*(undefined1 *)(lVar8 + 0x179));
    if (5 < DAT_100021030) {
      uVar4 = FUN_100008d22(*param_1);
      uVar5 = FUN_100000d8c(param_2);
      uVar1 = *(undefined4 *)(param_1[1] + 0x48);
      uVar6 = FUN_100000d8c(iVar3);
      FUN_1000008d2(6,0,&cf__sUSBwriteerroron_s__s__d__d_pipestatus_s,"MuxInterfaceWriteComplete",
                    uVar4,uVar5,param_3,uVar1,uVar6);
    }
    if ((iVar3 + 0x1ffffd40U < 0x2e) &&
       ((0x200000002001U >> ((ulong)(iVar3 + 0x1ffffd40U) & 0x3f) & 1) != 0)) {
      if (4 < DAT_100021030) {
        uVar4 = FUN_100008d22(*param_1);
        FUN_1000008d2(5,0,&cf__sdevicedisconnected__s,"MuxInterfaceWriteComplete",uVar4);
      }
      lVar8 = param_1[4];
      param_2 = -0x1ffffd40;
      goto LAB_10000b709;
    }
    iVar7 = param_2;
    if ((iVar3 == -0x1fffbfb1) && (iVar3 = -0x1fffbfb1, param_2 != -0x1ffffd15)) {
      iVar3 = FUN_100008d87(*param_1,*(undefined1 *)(*param_1 + 0x179));
      if (iVar3 != 0) {
        if (4 < DAT_100021030) {
          uVar4 = FUN_100008d22(*param_1);
          uVar5 = FUN_100000d8c(iVar3);
          FUN_1000008d2(5,0,&cf__sdevicedisconnected__s__s,"MuxInterfaceWriteComplete",uVar4,uVar5);
        }
        goto LAB_10000b728;
      }
      iVar3 = 0;
    }
    if (0xf < *(uint *)(param_1 + 2)) {
      if (2 < DAT_100021030) {
        uVar4 = FUN_100000d8c(param_2);
        uVar5 = FUN_100008d22(*param_1);
        uVar6 = FUN_100000d8c(iVar3);
        FUN_1000008d2(3,0,&cf__swriteerror_son_s_pipestatus_safter_uattempts,
                      "MuxInterfaceWriteComplete",uVar4,uVar5,uVar6,(int)param_1[2]);
      }
      lVar8 = param_1[4];
LAB_10000b709:
      (*(code *)param_1[3])(lVar8,param_2,param_3 & 0xffffffff);
      FUN_100008fdb(*param_1);
      return;
    }
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,0,&cf__sretrying_u__d,"MuxInterfaceWriteComplete",*(uint *)(param_1 + 2),0x10)
      ;
    }
    if (param_2 == -0x1fffbfb0) {
      plVar2 = *(long **)(*param_1 + 0x158);
      (**(code **)(*plVar2 + 0x110))
                (plVar2,*(undefined1 *)(*param_1 + 0x179),param_1[1],0,FUN_10000ab6e,0);
    }
    iVar3 = FUN_10000abce(param_1);
    if (iVar3 == 0) goto LAB_10000b732;
  }
LAB_10000b728:
  (*(code *)param_1[3])(param_1[4],iVar7,param_3 & 0xffffffff);
LAB_10000b732:
  if ((*(int *)(*param_1 + 0x1bc) == 0) && (*(char *)(*param_1 + 0x1c0) == '\x01')) {
    FUN_10000907c();
    return;
  }
  return;
}

