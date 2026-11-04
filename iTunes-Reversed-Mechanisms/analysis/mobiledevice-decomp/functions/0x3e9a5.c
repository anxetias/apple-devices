// rea decompile_all
// name: _IXItemExistsAtURL
// address: 0x3e9a5
// body: available
// range: 0x3e9a5-0x3eb6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 _IXItemExistsAtURL(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar2 = _objc_retainAutorelease(uVar2);
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"fileSystemRepresentation");
  iVar1 = _lstat_INODE64(uVar3,&local_c8);
  if (iVar1 == 0) {
    uVar6 = 1;
    if (param_2 != (undefined1 *)0x0) {
      if ((local_c8._4_2_ & 0xf000) == 0x4000) {
        *param_2 = 1;
      }
      else {
        *param_2 = 0;
      }
    }
  }
  else {
    piVar4 = ___error();
    iVar1 = *piVar4;
    if ((long)iVar1 != 2) {
      uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      pcVar5 = _strerror(iVar1);
      __os_log_internal(0,uVar3,0,"%s: Failed to determine if %@ exists: %s","IXItemExistsAtURL",
                        uVar2,pcVar5);
      (*(code *)PTR__objc_release_004410a0)(uVar3);
    }
    if (param_3 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      local_38 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
      uVar3 = _objc_retainAutorelease(uVar2);
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"fileSystemRepresentation");
      pcVar5 = _strerror(iVar1);
      uVar6 = 0;
      uVar3 = __CreateError("IXItemExistsAtURL",0x9b,local_38,(long)iVar1,0,0,&cf_lstatof_sfailed__s
                            ,uVar3,pcVar5);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar3 = _objc_autorelease(uVar3);
      *param_3 = uVar3;
    }
  }
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  return uVar6;
}

