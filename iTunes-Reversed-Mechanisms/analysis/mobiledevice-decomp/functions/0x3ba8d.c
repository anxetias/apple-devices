// rea decompile_all
// name: ____IXHandleConnectionForRevertStashMessage_block_invoke
// address: 0x3ba8d
// body: available
// range: 0x3ba8d-0x3be7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____IXHandleConnectionForRevertStashMessage_block_invoke(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  char local_31;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  puVar4 = (undefined *)_xpc_get_type(uVar3);
  if (puVar4 == PTR___xpc_type_error_00441320) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) != '\0') goto LAB_0003bd4b;
    local_50 = uVar3;
    pvVar6 = (void *)_xpc_copy_description(uVar3);
    uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    __os_log_internal(0,uVar3,0x10,
                      "%s: Connection with the remote side was unexpectedly closed : %s",
                      "_IXHandleConnectionForRevertStashMessage_block_invoke",pvVar6);
    puVar4 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar3);
    uVar3 = __CreateError("_IXHandleConnectionForRevertStashMessage_block_invoke",0x307,
                          &cf_IXRemoteErrorDomain,6,0,0,
                          &cf_Connectionwiththeremotesidewasunexpectedlyclosed__s,pvVar6);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar3);
    _free(pvVar6);
    puVar1 = PTR__objc_retain_004410a8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    local_90 = PTR___NSConcreteStackBlock_004412a8;
    local_88 = 0xc2000000;
    local_80 = ____IXHandleConnectionForRevertStashMessage_block_invoke_2;
    local_78 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;
    local_68 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x30));
    local_70 = uVar7;
    uVar7 = (*(code *)puVar1)(uVar7);
    _dispatch_async(uVar3,&local_90);
    (*(code *)puVar4)(local_70);
    uVar3 = local_68;
  }
  else {
    puVar4 = (undefined *)_xpc_get_type(uVar3);
    local_50 = uVar3;
    if ((puVar4 == PTR___xpc_type_dictionary_00441318) &&
       (cVar2 = _IXRemoteRequestTypeForMessage(uVar3), cVar2 == '\x02')) {
      local_31 = '\0';
      local_60 = 0;
      local_58 = 0;
      local_40 = param_1;
      _IXGetRevertStashResponseStatus(uVar3,&local_31,&local_60,&local_58);
      puVar4 = PTR__objc_retain_004410a8;
      lVar5 = (*(code *)PTR__objc_retain_004410a8)(local_60);
      local_48 = (*(code *)puVar4)(local_58);
      param_1 = local_40;
      if (lVar5 == 0 && local_31 == '\0') {
        uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        __os_log_internal(0,uVar3,0x10,"%s: Uninstall failed for unknown reason",
                          "_IXHandleConnectionForRevertStashMessage_block_invoke");
        (*(code *)PTR__objc_release_004410a0)(uVar3);
        uVar3 = __CreateError("_IXHandleConnectionForRevertStashMessage_block_invoke",0x318,
                              &cf_IXRemoteErrorDomain,0,0,0,&cf_Uninstallfailedforunknownreason);
        lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
        param_1 = local_40;
      }
    }
    else {
      pvVar6 = (void *)_xpc_copy_description(uVar3);
      uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      local_48 = 0;
      __os_log_internal(0,uVar3,0x10,"%s: Bad reply received from the remote service (%s)",
                        "_IXHandleConnectionForRevertStashMessage_block_invoke",pvVar6);
      (*(code *)PTR__objc_release_004410a0)(uVar3);
      uVar3 = __CreateError("_IXHandleConnectionForRevertStashMessage_block_invoke",0x31c,
                            &cf_IXRemoteErrorDomain,5,0,0,
                            &cf_Badreplyreceivedfromtheremoteservice__s_,pvVar6);
      lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
      _free(pvVar6);
    }
    puVar4 = PTR__objc_retain_004410a8;
    local_40 = *(undefined8 *)(param_1 + 0x20);
    local_c8 = PTR___NSConcreteStackBlock_004412a8;
    local_c0 = 0xc2000000;
    local_b8 = ____IXHandleConnectionForRevertStashMessage_block_invoke_3;
    local_b0 = &___block_descriptor_56_e8_32s40s48bs_e5_v8__0l;
    local_98 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x30));
    uVar3 = local_48;
    local_a8 = local_48;
    local_a0 = lVar5;
    uVar7 = (*(code *)puVar4)(lVar5);
    uVar3 = (*(code *)puVar4)(uVar3);
    _dispatch_async(local_40,&local_c8);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    _xpc_remote_connection_cancel(*(undefined8 *)(param_1 + 0x28));
    puVar4 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(local_a0);
    (*(code *)puVar4)(local_a8);
    (*(code *)puVar4)(local_98);
  }
  puVar4 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar4)(uVar7);
  uVar3 = local_50;
LAB_0003bd4b:
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  return;
}

