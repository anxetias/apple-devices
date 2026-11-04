// rea decompile_all
// name: ___IXRemotePerformInstallationAsync_block_invoke.39
// address: 0x39549
// body: available
// range: 0x39549-0x397ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___IXRemotePerformInstallationAsync_block_invoke_39(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  char *pcVar8;
  undefined *local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = PTR__objc_retain_004410a8;
  local_60 = 0;
  local_50 = 0x2020000000;
  local_48 = 0;
  local_40 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  local_38 = 0;
  local_a0 = PTR___NSConcreteStackBlock_004412a8;
  local_98 = 0xc2000000;
  local_90 = ___IXRemotePerformInstallationAsync_block_invoke_2_40;
  local_88 = &___block_descriptor_60_e8_32s40s48r_e21_v24__0Q8__NSString_16l;
  local_58 = &local_60;
  local_80 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x28));
  local_68 = *(undefined4 *)(param_1 + 0x5c);
  local_78 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x30));
  local_70 = &local_60;
  cVar3 = _IXRemoteStreamContentsOfInstallable(local_40,uVar1,&local_38,0,&local_a0);
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(local_38);
  if (cVar3 == '\0') {
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    __os_log_internal(0,uVar6,0x10,"%s: Failed to install the app to remote device %@",
                      "IXRemotePerformInstallationAsync_block_invoke",uVar5);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    puVar2 = PTR__objc_retain_004410a8;
    if (*(char *)(local_58 + 3) == '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      local_e0 = PTR___NSConcreteStackBlock_004412a8;
      local_d8 = 0xc2000000;
      local_d0 = ___IXRemotePerformInstallationAsync_block_invoke_2_45;
      local_c8 = &___block_descriptor_64_e8_32s40s48s56bs_e5_v8__0l;
      local_a8 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x50));
      local_c0 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x40));
      local_b8 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x48));
      local_b0 = (*(code *)puVar2)(uVar5);
      _dispatch_async(uVar6,&local_e0);
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(local_b0);
      (*(code *)puVar2)(local_b8);
      (*(code *)puVar2)(local_c0);
      (*(code *)puVar2)(local_a8);
    }
  }
  iVar4 = _close(*(int *)(param_1 + 0x58));
  if (iVar4 != 0) {
    piVar7 = ___error();
    iVar4 = *piVar7;
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    pcVar8 = _strerror(iVar4);
    __os_log_internal(0,uVar6,0x10,
                      "%s: Failed to close write end of the pipe() used for streaming the asset : %s (%d)"
                      ,"IXRemotePerformInstallationAsync_block_invoke",pcVar8,iVar4);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
  }
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_78);
  (*(code *)puVar2)(local_80);
  __Block_object_dispose(&local_60,8);
  (*(code *)puVar2)(uVar5);
  return;
}

