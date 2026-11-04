// rea decompile_all
// name: FUN_10000c3e1
// address: 0x10000c3e1
// body: available
// range: 0x10000c3e1-0x10000c533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000c52f to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000c3e1(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  ushort uVar6;
  socklen_t local_44;
  sockaddr local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10001c070;
  if (param_2 == 1) {
    lVar1 = *(long *)(param_5 + 0x28);
    local_44 = 0x10;
    iVar2 = _CFSocketGetNative();
    sVar3 = _recvfrom(iVar2,(void *)(*(long *)(param_5 + 0x28) + 0x2a),0x7d6,0,&local_40,&local_44);
    if (sVar3 == -1) {
      piVar4 = ___error();
      if (*piVar4 == 0x23) {
        _CFSocketEnableCallBacks(param_1,1);
        goto LAB_10000c512;
      }
      if (2 < DAT_100021030) {
        piVar4 = ___error();
        iVar2 = *piVar4;
        piVar4 = ___error();
        pcVar5 = _strerror(*piVar4);
        FUN_1000008d2(3,0,&cf_kdprecvfromfailed__d__s,iVar2,pcVar5);
      }
    }
    else {
      *(undefined4 *)(lVar1 + 0x1a) = local_40.sa_data._2_4_;
      *(undefined2 *)(lVar1 + 0x22) = local_40.sa_data._0_2_;
      uVar6 = (short)sVar3 + 8;
      *(ushort *)(lVar1 + 0x18) = uVar6 * 0x100 | uVar6 >> 8;
      iVar2 = (**(code **)(**(long **)(param_5 + 8) + 0x110))
                        (*(long **)(param_5 + 8),*(undefined1 *)(param_5 + 0x34),
                         *(undefined8 *)(param_5 + 0x28),(int)sVar3 + 0x2a,FUN_10000c534,param_5);
      if (iVar2 == 0) goto LAB_10000c512;
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf_kdpWritePipeAsyncfailed_0x_x,iVar2);
      }
    }
    FUN_10000c242(param_5);
  }
LAB_10000c512:
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

