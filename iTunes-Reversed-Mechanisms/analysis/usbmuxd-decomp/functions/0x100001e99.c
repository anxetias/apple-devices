// rea decompile_all
// name: FUN_100001e99
// address: 0x100001e99
// body: available
// range: 0x100001e99-0x100001fa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100001f99 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100001f9e to 0x1000104ca FUN_1000104ca (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100001e99(void)

{
  mode_t mVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_8a [18];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10001c070;
  iVar2 = _unlink("/var/run/usbmuxd");
  if (iVar2 == -1) {
    piVar4 = ___error();
    if (*piVar4 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1000104ca();
    }
  }
  iVar2 = _socket(1,1,0);
  if (iVar2 == -1) {
    FUN_10001055e();
LAB_100001f8f:
    FUN_100010500();
  }
  else {
    mVar1 = _umask(0);
    local_8a[2] = '\0';
    local_8a[3] = '\0';
    local_8a[4] = '\0';
    local_8a[5] = '\0';
    local_8a[6] = '\0';
    local_8a[7] = '\0';
    local_8a[8] = '\0';
    local_8a[9] = '\0';
    local_8a._10_8_ = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_8a[0] = 'j';
    local_8a[1] = '\x01';
    ___strlcpy_chk(local_8a + 2,"/var/run/usbmuxd",0x68,0x68);
    iVar3 = _bind(iVar2,(sockaddr *)local_8a,0x6a);
    if (iVar3 != 0) goto LAB_100001f8f;
    _umask(mVar1);
    iVar3 = _listen(iVar2,5);
    if (iVar3 == 0) {
      if (*(long *)PTR____stack_chk_guard_10001c070 == local_20) {
        return iVar2;
      }
      goto LAB_100001f99;
    }
  }
  FUN_10001052f();
LAB_100001f99:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

