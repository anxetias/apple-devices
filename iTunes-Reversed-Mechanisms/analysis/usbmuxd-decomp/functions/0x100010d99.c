// rea decompile_all
// name: FUN_100010d99
// address: 0x100010d99
// body: available
// range: 0x100010d99-0x100010fc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100010fc5 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100010d99(void)

{
  int iVar1;
  uid_t uVar2;
  char *pcVar3;
  long lVar4;
  void *pvVar5;
  int *piVar6;
  void *pvVar7;
  bool bVar8;
  undefined8 local_470;
  char *local_468;
  void *local_460;
  char *local_458;
  void *local_450;
  undefined8 local_448;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10001c070;
  ___bzero(local_438,0x400);
  local_470 = 0;
  iVar1 = FUN_10000c6cd(PTR___os_log_default_10001c080);
  if (iVar1 == 0) {
    bVar8 = false;
  }
  else {
    pcVar3 = _getenv("HOME");
    if (pcVar3 == (char *)0x0) {
      bVar8 = true;
      __os_log_internal(0x100000000,PTR___os_log_default_10001c080,1,
                        "$HOME not set, falling back to using getpwuid");
      uVar2 = _getuid();
      lVar4 = _getpwuid(uVar2);
      if (lVar4 == 0) {
        uVar2 = _getuid();
        __os_log_internal(0x100000000,PTR___os_log_default_10001c080,0x10,
                          "failed to get passwd entry for uid %u",uVar2);
        goto LAB_100010f9d;
      }
      pcVar3 = *(char **)(lVar4 + 0x30);
    }
    pvVar5 = (void *)_realpath_DARWIN_EXTSN(pcVar3,0);
    if (pvVar5 == (void *)0x0) {
      piVar6 = ___error();
      __os_log_internal(0x100000000,PTR___os_log_default_10001c080,0x10,
                        "failed to resolve user\'s home directory: %{public}d",*piVar6);
    }
    else {
      iVar1 = FUN_10000c72f(PTR___os_log_default_10001c080,local_438,0x400);
      if (iVar1 == 0) {
        pvVar7 = (void *)_realpath_DARWIN_EXTSN(local_438,0);
        if (pvVar7 != (void *)0x0) {
          local_468 = "HOME";
          local_458 = "TMPDIR";
          local_448 = 0;
          local_460 = pvVar5;
          local_450 = pvVar7;
          iVar1 = _sandbox_init_with_parameters
                            ("/System/Library/Sandbox/Profiles/com.apple.usbmuxd.sb",1,&local_468,
                             &local_470);
          if (iVar1 == 0) {
            __os_log_internal(0x100000000,PTR___os_log_default_10001c080,1,
                              "Sandboxing should now be active");
          }
          else {
            __os_log_internal(0x100000000,PTR___os_log_default_10001c080,0x10,
                              "Failed to enter sandbox: %{public}s",local_470);
          }
          bVar8 = iVar1 != 0;
          _free(pvVar5);
          _free(pvVar7);
          goto LAB_100010f9d;
        }
        piVar6 = ___error();
        __os_log_internal(0x100000000,PTR___os_log_default_10001c080,0x10,
                          "failed to resolve temporary directory: %{public}d",*piVar6);
      }
      _free(pvVar5);
    }
    bVar8 = true;
  }
LAB_100010f9d:
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_30) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

