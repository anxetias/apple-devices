// rea decompile_all
// name: _IXRemoveItemAtURL
// address: 0x3e3ca
// body: available
// range: 0x3e3ca-0x3e677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 _IXRemoveItemAtURL(undefined8 param_1,char param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  removefile_state_t state;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  int local_34;
  
  lVar3 = (*(code *)PTR__objc_retain_004410a8)();
  state = _removefile_state_alloc();
  local_34 = 0;
  if (lVar3 == 0) {
    uVar4 = __CreateError("IXRemoveItemAtURL",0x36,*(undefined8 *)PTR__NSPOSIXErrorDomain_00441070,
                          0xe,0,0,&cf_nilurlpassedto_removeItemAtURL_error_);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  }
  else {
    iVar2 = _removefile_state_set(state,3,__removefile_error_callback);
    if (iVar2 != 0) {
      uVar4 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      __os_log_internal(0,uVar4,0,
                        "%s: removefile_state_set REMOVEFILE_STATE_ERROR_CALLBACK failed: %s",
                        "IXRemoveItemAtURL",pcVar6);
      (*(code *)PTR__objc_release_004410a0)(uVar4);
    }
    iVar2 = _removefile_state_set(state,4,&local_34);
    if (iVar2 != 0) {
      uVar4 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      __os_log_internal(0,uVar4,0,
                        "%s: removefile_state_set REMOVEFILE_STATE_ERROR_CONTEXT failed: %s",
                        "IXRemoveItemAtURL",pcVar6);
      (*(code *)PTR__objc_release_004410a0)(uVar4);
    }
    uVar4 = _objc_retainAutorelease(lVar3);
    pcVar6 = (char *)(*(code *)PTR__objc_msgSend_00441098)(uVar4,"fileSystemRepresentation");
    iVar2 = _removefile(pcVar6,state,(uint)(param_2 != '\0') * 2 + 1);
    if (iVar2 == 0) {
LAB_0003e520:
      uVar9 = (ulong)local_34;
      if ((uVar9 & 0xfffffffd) == 0) {
        _removefile_state_free(state);
        uVar10 = 1;
        uVar4 = 0;
        goto LAB_0003e642;
      }
      uVar7 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
      pcVar6 = _strerror(local_34);
      uVar8 = 0x51;
    }
    else {
      piVar5 = ___error();
      if (*piVar5 == 2) goto LAB_0003e520;
      uVar7 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
      piVar5 = ___error();
      uVar9 = (ulong)*piVar5;
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      uVar8 = 0x4b;
    }
    uVar4 = __CreateError("IXRemoveItemAtURL",uVar8,uVar7,uVar9,0,0,&cf_removefileof__failed__s,
                          uVar4,pcVar6);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  }
  _removefile_state_free(state);
  if (param_3 != (undefined8 *)0x0) {
    uVar4 = _objc_retainAutorelease(uVar4);
    *param_3 = uVar4;
  }
  uVar10 = 0;
LAB_0003e642:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(lVar3);
  return uVar10;
}

