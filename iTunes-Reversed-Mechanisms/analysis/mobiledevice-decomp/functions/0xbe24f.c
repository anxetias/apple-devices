// rea decompile_all
// name: _MISProfileWriteToFile
// address: 0xbe24f
// body: available
// range: 0xbe24f-0xbe41e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbe41a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MISProfileWriteToFile(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_58;
  long local_54;
  undefined2 local_4c;
  long local_4a;
  undefined2 local_42;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0xe8008004;
    goto LAB_000be392;
  }
  lVar2 = _CFRetain();
  if (lVar2 == 0) {
    uVar3 = 0xe800800a;
    goto LAB_000be392;
  }
  uVar3 = _CFGetAllocator(param_1);
  lVar4 = _CFURLCreateWithFileSystemPath(uVar3,param_2,0,0);
  if (lVar4 == 0) {
    uVar3 = 0xe800800a;
  }
  else {
    uVar3 = _CFGetAllocator(param_1);
    lVar5 = _CFWriteStreamCreateWithFile(uVar3,lVar4);
    if (lVar5 == 0) {
LAB_000be34e:
      uVar3 = _MISGetLog();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        _MISProfileWriteToFile_cold_1(lVar4,lVar5 == 0,uVar3);
      }
      uVar3 = 0xe800800b;
      if (lVar5 != 0) goto LAB_000be372;
    }
    else {
      cVar1 = _CFWriteStreamOpen(lVar5);
      if (cVar1 == '\0') goto LAB_000be34e;
      uVar3 = _CFDataGetBytePtr(*(undefined8 *)(param_1 + 0x18));
      lVar6 = _CFDataGetLength(*(undefined8 *)(param_1 + 0x18));
      lVar7 = _CFWriteStreamWrite(lVar5,uVar3,lVar6);
      uVar3 = 0;
      if (lVar7 < lVar6) {
        uVar8 = _MISGetLog();
        cVar1 = _os_log_type_enabled(uVar8,0x10);
        uVar3 = 0xe800800b;
        if (cVar1 != '\0') {
          local_58 = 0x8400302;
          local_4c = 0x800;
          local_42 = 0x800;
          local_54 = lVar4;
          local_4a = lVar6;
          local_40 = lVar7;
          __os_log_error_impl(0,uVar8,0x10,
                              "Short write when writing out profile to \'%@\'. Need: %ld, got: %ld",
                              &local_58,0x20);
        }
      }
      _CFWriteStreamClose(lVar5);
LAB_000be372:
      _CFRelease(lVar5);
    }
    _CFRelease(lVar4);
  }
  _CFRelease(lVar2);
LAB_000be392:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

