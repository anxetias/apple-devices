// rea decompile_all
// name: ____IXQueryInstalledInfoForDevice_block_invoke
// address: 0x3ad5b
// body: available
// range: 0x3ad5b-0x3b03f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____IXQueryInstalledInfoForDevice_block_invoke(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  cVar2 = *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  puVar4 = (undefined *)_xpc_get_type(uVar3);
  if (cVar2 != '\0') {
    if (puVar4 != PTR___xpc_type_error_00441320) {
      pvVar5 = (void *)_xpc_copy_description(uVar3);
      uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      __os_log_internal(0,uVar6,0x11,
                        "%s: Unexpectedly got a response after query was completed : %s",
                        "_IXQueryInstalledInfoForDevice_block_invoke",pvVar5);
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      _free(pvVar5);
    }
    goto LAB_0003b028;
  }
  if (puVar4 == PTR___xpc_type_dictionary_00441318) {
    cVar2 = _IXRemoteRequestTypeForMessage(uVar3);
    if (cVar2 != '\x04') goto LAB_0003af4a;
    local_48 = 0;
    local_40 = 0;
    _IXGetQueryResponseStatus(uVar3,&local_48,&local_40);
    puVar4 = PTR__objc_retain_004410a8;
    lVar7 = (*(code *)PTR__objc_retain_004410a8)(local_48);
    lVar8 = (*(code *)puVar4)(local_40);
    if (lVar8 == 0 && lVar7 == 0) {
      uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      __os_log_internal(0,uVar6,0x10,"%s: Query failed for unknown reason",
                        "_IXQueryInstalledInfoForDevice_block_invoke");
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      uVar6 = __CreateError("_IXQueryInstalledInfoForDevice_block_invoke",0x15a,
                            &cf_IXRemoteErrorDomain,0,0,0,&cf_Queryfailedforunknownreason);
      lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    *(long *)(lVar1 + 0x28) = lVar7;
    local_38 = (*(code *)PTR__objc_retain_004410a8)(lVar7);
    puVar4 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(long *)(lVar7 + 0x28) = lVar8;
    uVar9 = (*(code *)PTR__objc_retain_004410a8)(lVar8);
    (*(code *)puVar4)(uVar6);
    (*(code *)puVar4)(local_38);
    (*(code *)puVar4)(uVar9);
  }
  else {
LAB_0003af4a:
    pvVar5 = (void *)_xpc_copy_description(uVar3);
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    __os_log_internal(0,uVar6,0x10,"%s: Bad reply received from the remote service (%s)",
                      "_IXQueryInstalledInfoForDevice_block_invoke",pvVar5);
    puVar4 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    uVar6 = __CreateError("_IXQueryInstalledInfoForDevice_block_invoke",0x161,
                          &cf_IXRemoteErrorDomain,5,0,0,&cf_Badreplyreceivedfromtheremoteservice__s_
                          ,pvVar5);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = uVar9;
    (*(code *)puVar4)(uVar6);
    _free(pvVar5);
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
LAB_0003b028:
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  return;
}

