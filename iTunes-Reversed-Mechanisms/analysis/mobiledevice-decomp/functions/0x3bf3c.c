// rea decompile_all
// name: ____IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke
// address: 0x3bf3c
// body: available
// range: 0x3bf3c-0x3c2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke
               (long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_31;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  puVar3 = (undefined *)_xpc_get_type(uVar2);
  if (puVar3 == PTR___xpc_type_error_00441320) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) != '\0') goto LAB_0003c1b3;
    local_48 = uVar2;
    pvVar5 = (void *)_xpc_copy_description(uVar2);
    uVar2 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    __os_log_internal(0,uVar2,0x10,
                      "%s: Connection with the remote side was unexpectedly closed : %s",
                      "_IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke",pvVar5
                     );
    (*(code *)PTR__objc_release_004410a0)(uVar2);
    uVar2 = __CreateError("_IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke",
                          0x366,&cf_IXRemoteErrorDomain,6,0,0,
                          &cf_Connectionwiththeremotesidewasunexpectedlyclosed__s,pvVar5);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar2);
    _free(pvVar5);
    puVar3 = PTR__objc_retain_004410a8;
    local_40 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = &local_88;
    local_b0 = PTR___NSConcreteStackBlock_004412a8;
    local_a8 = 0xc2000000;
    local_a0 = ____IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke_2;
    local_98 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;
    local_88 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x30));
    plVar7 = &local_90;
    local_90 = lVar4;
    uVar2 = (*(code *)puVar3)(lVar4);
    _dispatch_async(local_40,&local_b0);
  }
  else {
    puVar3 = (undefined *)_xpc_get_type(uVar2);
    local_48 = uVar2;
    if (puVar3 == PTR___xpc_type_dictionary_00441318) {
      cVar1 = _IXRemoteRequestTypeForMessage(uVar2);
      if (cVar1 != '\x03') goto LAB_0003c06d;
      local_31 = '\0';
      local_50 = 0;
      _IXGetUninstallResponseStatus(uVar2,&local_31,&local_50);
      lVar4 = (*(code *)PTR__objc_retain_004410a8)(local_50);
      if (lVar4 == 0 && local_31 == '\0') {
        uVar2 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        __os_log_internal(0,uVar2,0x10,"%s: Uninstall failed for unknown reason",
                          "_IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke");
        (*(code *)PTR__objc_release_004410a0)(uVar2);
        uVar2 = __CreateError("_IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke"
                              ,0x375,&cf_IXRemoteErrorDomain,0,0,0,
                              &cf_Uninstallfailedforunknownreason);
        lVar4 = _objc_retainAutoreleasedReturnValue(uVar2);
      }
    }
    else {
LAB_0003c06d:
      pvVar5 = (void *)_xpc_copy_description(uVar2);
      uVar2 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      __os_log_internal(0,uVar2,0x10,"%s: Bad reply received from the remote service (%s)",
                        "_IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke",
                        pvVar5);
      (*(code *)PTR__objc_release_004410a0)(uVar2);
      uVar2 = __CreateError("_IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke",
                            0x379,&cf_IXRemoteErrorDomain,5,0,0,
                            &cf_Badreplyreceivedfromtheremoteservice__s_,pvVar5);
      lVar4 = _objc_retainAutoreleasedReturnValue(uVar2);
      _free(pvVar5);
    }
    puVar3 = PTR__objc_retain_004410a8;
    local_40 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = &local_58;
    local_80 = PTR___NSConcreteStackBlock_004412a8;
    local_78 = 0xc2000000;
    local_70 = ____IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke_3;
    local_68 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;
    local_58 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x30));
    plVar7 = &local_60;
    local_60 = lVar4;
    uVar2 = (*(code *)puVar3)(lVar4);
    _dispatch_async(local_40,&local_80);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    _xpc_remote_connection_cancel(*(undefined8 *)(param_1 + 0x28));
  }
  puVar3 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(*plVar7);
  (*(code *)puVar3)(*puVar6);
  (*(code *)puVar3)(uVar2);
  uVar2 = local_48;
LAB_0003c1b3:
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  return;
}

