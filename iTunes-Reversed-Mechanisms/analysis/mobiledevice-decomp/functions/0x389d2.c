// rea decompile_all
// name: ___IXRemotePerformInstallationAsync_block_invoke
// address: 0x389d2
// body: available
// range: 0x389d2-0x38f62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___IXRemotePerformInstallationAsync_block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  dispatch_semaphore_t pdVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  dispatch_semaphore_t pdVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 **ppuVar14;
  undefined *local_138;
  undefined8 local_130;
  code *local_128;
  undefined *local_120;
  dispatch_semaphore_t local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  dispatch_semaphore_t local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  dispatch_semaphore_t local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_78 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  lVar4 = (*(code *)puVar1)(param_3);
  lVar5 = (*(code *)puVar1)(param_4);
  uVar6 = (*(code *)puVar1)(param_5);
  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  if (*(char *)(lVar9 + 0x18) != '\0') goto LAB_00038f38;
  *(undefined1 *)(lVar9 + 0x18) = 1;
  local_98 = lVar5;
  local_70 = uVar6;
  local_68 = lVar4;
  if (lVar5 == 0 && (lVar4 != 0 && local_78 != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    local_90 = param_1;
    local_50 = (*(code *)puVar1)();
    local_48 = (*(code *)puVar1)(local_68);
    uVar6 = (*(code *)puVar1)(uVar6);
    puVar1 = PTR__objc_msgSend_00441098;
    (*(code *)PTR__objc_msgSend_00441098)(uVar6,"remoteInstallTargetURL");
    local_58 = _objc_retainAutoreleasedReturnValue();
    local_40 = _dispatch_semaphore_create(0);
    uVar7 = (*(code *)puVar1)(uVar6,"bundleID");
    local_38 = _objc_retainAutoreleasedReturnValue(uVar7);
    local_100 = 0;
    local_f0 = 0x3032000000;
    local_e8 = ___Block_byref_object_copy_;
    local_e0 = ___Block_byref_object_dispose_;
    local_d8 = 0;
    local_d0 = 0;
    local_c0 = 0x3032000000;
    local_b8 = ___Block_byref_object_copy_;
    local_b0 = ___Block_byref_object_dispose_;
    local_a8 = 0;
    local_f8 = &local_100;
    local_c8 = &local_d0;
    local_88 = uVar6;
    uVar6 = (*(code *)puVar1)(uVar6,"remoteInstallTargetBundleName");
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_138 = PTR___NSConcreteStackBlock_004412a8;
    local_130 = 0xc2000000;
    local_128 = ____CleanUpStashedCopy_block_invoke;
    local_120 = &
                ___block_descriptor_56_e8_32s40r48r_e43_v24__0__IXRemoteInstallResult_8__NSError_16l
    ;
    local_110 = &local_100;
    local_108 = &local_d0;
    pdVar8 = (dispatch_semaphore_t)(*(code *)PTR__objc_retain_004410a8)(local_40);
    local_118 = pdVar8;
    __IXQueryInstalledInfoForDevice(local_50,local_38,local_58,uVar6,&local_138);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    local_80 = pdVar8;
    _dispatch_semaphore_wait(pdVar8,0xffffffffffffffff);
    ppuVar14 = &local_f8;
    pcVar13 = "%s: Remote installed info prior to cleanup for %@ : %@";
    if (local_f8[5] == 0) {
      pcVar13 = "%s: Failed to receive remote app info for %@ : %@";
      ppuVar14 = &local_c8;
    }
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    pdVar8 = (dispatch_semaphore_t)(*ppuVar14)[5];
    __os_log_internal(0,uVar6,0,pcVar13,"_CleanUpStashedCopy",local_38,pdVar8);
    (*(code *)puVar1)(uVar6);
    local_a0 = 0;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_48,"stashedAppMetadata:");
    local_40 = (dispatch_semaphore_t)_objc_retainAutoreleasedReturnValue(uVar6);
    local_60 = (*(code *)PTR__objc_retain_004410a8)(local_a0);
    uVar6 = local_38;
    pdVar2 = local_40;
    if (local_40 == (dispatch_semaphore_t)0x0) {
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_60,"domain");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar3 = (*(code *)PTR__objc_msgSend_00441098)
                        (uVar6,"isEqualToString:",*(undefined8 *)PTR__NSCocoaErrorDomain_00441050);
      if (cVar3 == '\0') {
        (*(code *)PTR__objc_release_004410a0)(uVar6);
      }
      else {
        lVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_60,"code");
        (*(code *)PTR__objc_release_004410a0)(uVar6);
        if (lVar9 == 0x104) {
          uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
          pcVar13 = "%s: No local stashed app info prior to cleanup for %@";
          uVar6 = local_38;
          goto LAB_00038d9b;
        }
      }
      uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
      pcVar13 = "%s: Failed to query local stashed bundle metadata for %@ : %@";
      uVar6 = local_38;
      pdVar8 = (dispatch_semaphore_t)local_60;
    }
    else {
      uVar7 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      pcVar13 = "%s: Local stashed app info prior to cleanup for %@ : %@";
      pdVar8 = pdVar2;
    }
LAB_00038d9b:
    __os_log_internal(0,uVar7,0,pcVar13,"_CleanUpStashedCopy",uVar6,pdVar8);
    (*(code *)PTR__objc_release_004410a0)(uVar7);
    (*(code *)PTR__objc_msgSend_00441098)(local_48,"removeStashedCopy");
    (*(code *)puVar1)(local_40);
    (*(code *)puVar1)(local_118);
    __Block_object_dispose(&local_d0,8);
    (*(code *)puVar1)(local_a8);
    __Block_object_dispose(&local_100,8);
    (*(code *)puVar1)(local_d8);
    (*(code *)puVar1)(local_38);
    (*(code *)puVar1)(local_80);
    (*(code *)puVar1)(local_58);
    (*(code *)puVar1)(local_60);
    (*(code *)puVar1)(local_88);
    (*(code *)puVar1)(local_48);
    (*(code *)puVar1)(local_50);
    param_1 = local_90;
  }
  uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
  local_48 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_38 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x28),"path");
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_40 = *(dispatch_semaphore_t *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  local_58 = uVar10;
  uVar11 = _objc_retainBlock(*(undefined8 *)(param_1 + 0x38));
  local_50 = uVar11;
  uVar12 = _objc_retainBlock(*(undefined8 *)(param_1 + 0x40));
  uVar7 = local_48;
  lVar5 = local_98;
  __os_log_internal(0,local_48,0,
                    "%s: <= end for device:%p installable:%@ config:%@ queue:%p progress:%p completion:%p with result:%@ error:%@"
                    ,"IXRemotePerformInstallationAsync_block_invoke",local_38,uVar10,local_40,uVar6,
                    uVar11,uVar12,local_98,local_70);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar12);
  (*(code *)puVar1)(local_50);
  (*(code *)puVar1)(local_58);
  (*(code *)puVar1)(uVar7);
  uVar6 = local_70;
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),lVar5,local_70);
  lVar4 = local_68;
LAB_00038f38:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar1)(lVar5);
  (*(code *)puVar1)(lVar4);
  (*(code *)puVar1)(local_78);
  return;
}

