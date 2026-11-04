// rea decompile_all
// name: FUN_100004c4c
// address: 0x100004c4c
// body: available
// range: 0x100004c4c-0x100004fd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100004d6e to 0x100005de6 FUN_100005de6 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100004d86 to 0x1000055c0 FUN_1000055c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100004f45 to 0x10000624f FUN_10000624f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100004f5f to 0x1000132b1 _CFSocketEnableCallBacks (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100004f9f to 0x100003084 FUN_100003084 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100004c4c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined1 local_2c [4];
  
  if (param_2 == 8) {
    if (*(int *)(param_5 + 0x54) != 2) {
      return;
    }
    FUN_100005de6(param_5);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  iVar1 = *(int *)(param_5 + 0x54);
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      *(byte *)(param_5 + 0x7c) = *(byte *)(param_5 + 0x7c) | 1;
      FUN_1000055c0(param_5);
      return;
    }
    if (iVar1 != 0) {
      lVar3 = FUN_10000dffa(*(undefined4 *)(param_5 + 0x4c),local_2c,4,0,0);
      if ((lVar3 != 0) && (2 < DAT_100021030)) {
        uVar5 = FUN_10000302f(param_5);
        FUN_1000008d2(3,0,&cf__sclient_ssentdatawhileinthewrongstate__d_,"HandleClientData",uVar5,
                      *(undefined4 *)(param_5 + 0x54));
      }
      FUN_100003084(param_5);
      return;
    }
  }
  lVar3 = *(long *)(param_5 + 0x88);
  if (lVar3 == 0) {
    lVar3 = FUN_100000aa4("ReadUSBMuxCommand",0x128a,1);
    *(long *)(param_5 + 0x88) = lVar3;
    if (lVar3 == 0) {
      if (2 < DAT_100021030) {
        uVar5 = FUN_10000302f(param_5);
        pcVar8 = &cf__soutofbuffersfor_s_disconnecting;
        uVar12 = 3;
LAB_100004f1c:
        FUN_1000008d2(uVar12,0,pcVar8,"ReadUSBMuxCommand",uVar5);
      }
      goto LAB_100004f90;
    }
  }
  uVar11 = (ulong)*(uint *)(lVar3 + 0x48);
  if (uVar11 < 0x10) {
    lVar4 = FUN_10000dffa(*(undefined4 *)(param_5 + 0x4c),uVar11 + *(long *)(lVar3 + 0x20),
                          0x10 - uVar11,0,0);
    if (lVar4 < 1) {
      if (lVar4 == 0) {
        if (5 < DAT_100021030) {
          uVar5 = FUN_10000302f(param_5);
          FUN_1000008d2(6,0,&cf_clientdisconnected__s,uVar5);
        }
      }
      else {
LAB_100004e86:
        piVar6 = ___error();
        if (*piVar6 == 0x23) goto LAB_100004f4a;
        if (2 < DAT_100021030) {
          uVar5 = FUN_10000302f(param_5);
          piVar6 = ___error();
          iVar1 = *piVar6;
          piVar6 = ___error();
          pcVar7 = _strerror(*piVar6);
          FUN_1000008d2(3,0,&cf__sUSBMuxRecvWithTimeoutforclient_sreturned_ld__d__s_,
                        "ReadUSBMuxCommand",uVar5,lVar4,iVar1,pcVar7);
        }
      }
      goto LAB_100004f90;
    }
    uVar9 = *(int *)(lVar3 + 0x48) + (int)lVar4;
    uVar11 = (ulong)uVar9;
    *(uint *)(lVar3 + 0x48) = uVar9;
    if (uVar9 < 0x10) goto LAB_100004f4a;
  }
  puVar2 = *(uint **)(lVar3 + 0x20);
  uVar9 = *puVar2;
  if (uVar9 < 0x10) {
    if (DAT_100021030 < 3) goto LAB_100004f90;
    uVar5 = FUN_10000302f(param_5);
    uVar9 = *puVar2;
    pcVar8 = &cf__sclient_shdr_>length__u_<sizeof(structUSBMuxHeader)(_lu);
    uVar13 = 0x10;
  }
  else {
    if (uVar9 <= *(uint *)(lVar3 + 0x4c)) {
      while (uVar10 = (uint)uVar11, uVar10 < uVar9) {
        lVar4 = FUN_10000dffa(*(undefined4 *)(param_5 + 0x4c),uVar11 + *(long *)(lVar3 + 0x20),
                              uVar9 - uVar10,0,0);
        if (lVar4 < 1) {
          if (lVar4 != 0) goto LAB_100004e86;
          if (DAT_100021030 < 7) goto LAB_100004f90;
          uVar5 = FUN_10000302f(param_5);
          pcVar8 = &cf__sclientdisconnected__s;
          uVar12 = 7;
          goto LAB_100004f1c;
        }
        uVar10 = *(int *)(lVar3 + 0x48) + (int)lVar4;
        *(uint *)(lVar3 + 0x48) = uVar10;
        uVar9 = *puVar2;
        uVar11 = (ulong)uVar10;
      }
      if (uVar10 == uVar9) {
        *(undefined4 *)(lVar3 + 0x48) = 0;
        FUN_10000624f(param_5);
        return;
      }
LAB_100004f4a:
      _CFSocketEnableCallBacks(*(undefined8 *)(param_5 + 0x20),1);
      return;
    }
    if (DAT_100021030 < 3) goto LAB_100004f90;
    uVar5 = FUN_10000302f(param_5);
    uVar9 = *puVar2;
    uVar13 = *(undefined4 *)(lVar3 + 0x4c);
    pcVar8 = &cf__sclient_shdr_>length__d_>max__d_;
  }
  FUN_1000008d2(3,0,pcVar8,"ReadUSBMuxCommand",uVar5,uVar9,uVar13);
LAB_100004f90:
  FUN_100003084(param_5);
  return;
}

