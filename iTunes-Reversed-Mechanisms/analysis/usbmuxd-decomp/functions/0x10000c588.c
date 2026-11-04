// rea decompile_all
// name: FUN_10000c588
// address: 0x10000c588
// body: available
// range: 0x10000c588-0x10000c6cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000c5ee to 0x10000c242 FUN_10000c242 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000c6c8 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000c588(undefined8 *param_1,int param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  sockaddr local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10001c070;
  if (param_2 == 0) {
    if (((0x2a < (param_3 & 0xffffffff)) && (lVar1 = param_1[4], *(short *)(lVar1 + 0xc) == 8)) &&
       (*(char *)(lVar1 + 0x17) == '\x11')) {
      local_38.sa_len = '\x10';
      local_38.sa_family = '\x02';
      local_38.sa_data._0_2_ = *(undefined2 *)(lVar1 + 0x24);
      local_38.sa_data._2_4_ = *(undefined4 *)(lVar1 + 0x1e);
      local_38.sa_data[6] = '\0';
      local_38.sa_data[7] = '\0';
      local_38.sa_data[8] = '\0';
      local_38.sa_data[9] = '\0';
      local_38.sa_data[10] = '\0';
      local_38.sa_data[0xb] = '\0';
      local_38.sa_data[0xc] = '\0';
      local_38.sa_data[0xd] = '\0';
      iVar2 = _CFSocketGetNative(*param_1);
      sVar3 = _sendto(iVar2,(void *)(param_1[4] + 0x2a),(param_3 & 0xffffffff) - 0x2a,0,&local_38,
                      0x10);
      if ((sVar3 == -1) && (3 < DAT_100021030)) {
        piVar4 = ___error();
        iVar2 = *piVar4;
        piVar4 = ___error();
        pcVar5 = _strerror(*piVar4);
        FUN_1000008d2(4,0,&cf_kdpsendtofailed__d__s,iVar2,pcVar5);
      }
    }
    FUN_10000c378(param_1);
    if (*(long *)PTR____stack_chk_guard_10001c070 == local_28) {
      return;
    }
  }
  else {
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf_USBreadfailed_0x_x__closing,param_2);
    }
    if (*(long *)PTR____stack_chk_guard_10001c070 == local_28) {
      FUN_10000c242(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

