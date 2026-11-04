// rea decompile_all
// name: ____IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke
// address: 0x3b350
// body: available
// range: 0x3b350-0x3b91a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke
               (long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  puVar4 = (undefined *)_xpc_get_type(uVar3);
  if (puVar4 == PTR___xpc_type_error_00441320) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) != '\0') goto LAB_0003b666;
    pvVar5 = (void *)_xpc_copy_description(uVar3);
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    __os_log_internal(0,uVar6,0x10,
                      "%s: Connection with the remote side was unexpectedly closed : %s",
                      "_IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke",pvVar5);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    uVar6 = __CreateError("_IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke",0xed
                          ,&cf_IXRemoteErrorDomain,6,0,0,
                          &cf_Connectionwiththeremotesidewasunexpectedlyclosed__s,pvVar5);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    _free(pvVar5);
    puVar4 = PTR__objc_retain_004410a8;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    local_78 = PTR___NSConcreteStackBlock_004412a8;
    local_70 = 0xc2000000;
    local_68 = ____IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke_2;
    local_60 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;
    local_50 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x30));
    local_58 = uVar7;
    local_38 = (*(code *)puVar4)(uVar7);
    _dispatch_async(uVar6,&local_78);
    (*(code *)PTR__objc_release_004410a0)(local_58);
    uVar6 = local_50;
  }
  else {
    pvVar5 = (void *)_xpc_copy_description(uVar3);
    puVar4 = (undefined *)_xpc_get_type(uVar3);
    if ((puVar4 == PTR___xpc_type_dictionary_00441318) &&
       (cVar1 = _IXRemoteRequestTypeForMessage(uVar3), cVar1 == '\x01')) {
      cVar1 = _IXRemoteInstallMessageTypeForMessage(uVar3);
      if (cVar1 == '\x04') {
        uVar6 = _IXCreateErrorFromInstallErrorMessage(uVar3);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar7 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        local_38 = 0;
        __os_log_internal(0,uVar7,0x10,"%s: kIXRemoteInstallMessageTypeError : %@",
                          "_IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke",
                          uVar6);
        (*(code *)PTR__objc_release_004410a0)(uVar7);
        goto LAB_0003b581;
      }
      local_40 = pvVar5;
      if (cVar1 == '\x03') {
        uVar6 = _IXCreateInstallResultFromInstallCompleteMessage(uVar3);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar7 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        local_38 = uVar6;
        __os_log_internal(0,uVar7,0,"%s: kIXRemoteInstallMessageTypeComplete : %@",
                          "_IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke",
                          uVar6);
        (*(code *)PTR__objc_release_004410a0)(uVar7);
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
      }
      else {
        if (cVar1 != '\x02') {
          uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          pvVar5 = local_40;
          local_38 = 0;
          __os_log_internal(0,uVar6,0x10,
                            "%s: Bad reply received with type %d from the remote service (%s)",
                            "_IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke",
                            cVar1,local_40);
          (*(code *)PTR__objc_release_004410a0)(uVar6);
          uVar6 = __CreateError("_IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke"
                                ,0x116,&cf_IXRemoteErrorDomain,5,0,0,
                                &cf_Badreplyreceivedwithtype_dfromtheremoteservice__s_,cVar1,pvVar5)
          ;
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          goto LAB_0003b581;
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar2 = _IXRemoteInstallProgressGetInstallPhase(uVar3);
          local_38 = _IXRemoteInstallProgressGetPhaseProgress(uVar3);
          local_48 = _IXRemoteInstallProgressGetOverallProgress(uVar3);
          uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          __os_log_internal(local_38,local_48,0,uVar6,2,
                            "%s: kIXRemoteInstallMessageTypeProgress: Phase: %d, PhaseProgress : %f, OverallProgress : %f"
                            ,"_IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke",
                            uVar2);
          (*(code *)PTR__objc_release_004410a0)(uVar6);
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          local_f0 = PTR___NSConcreteStackBlock_004412a8;
          local_e8 = 0xc2000000;
          local_e0 = ____IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke_3;
          local_d8 = &___block_descriptor_57_e8_32bs_e5_v8__0l;
          local_d0 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x38));
          local_c8 = local_38;
          local_c0 = local_48;
          local_b8 = uVar2;
          _dispatch_async(uVar6,&local_f0);
          (*(code *)PTR__objc_release_004410a0)(local_d0);
        }
        local_38 = 0;
      }
      uVar6 = 0;
      pvVar5 = local_40;
    }
    else {
      uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_38 = 0;
      __os_log_internal(0,uVar6,0x10,"%s: Bad reply received from the remote service (%s)",
                        "_IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke",pvVar5
                       );
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      uVar6 = __CreateError("_IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke",
                            0x11b,&cf_IXRemoteErrorDomain,5,0,0,
                            &cf_Badreplyreceivedfromtheremoteservice__s_,pvVar5);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
LAB_0003b581:
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
    }
    puVar4 = PTR__objc_retain_004410a8;
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) != '\0') {
      local_48 = *(undefined8 *)(param_1 + 0x20);
      local_b0 = PTR___NSConcreteStackBlock_004412a8;
      local_a8 = 0xc2000000;
      local_a0 = ____IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke_2_182;
      local_98 = &___block_descriptor_56_e8_32s40s48bs_e5_v8__0l;
      local_40 = pvVar5;
      local_90 = (*(code *)PTR__objc_retain_004410a8)(local_38);
      local_80 = (*(code *)puVar4)(*(undefined8 *)(param_1 + 0x30));
      local_88 = (*(code *)puVar4)(uVar6);
      pvVar5 = local_40;
      _dispatch_async(local_48,&local_b0);
      _xpc_remote_connection_cancel(*(undefined8 *)(param_1 + 0x28));
      puVar4 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(local_88);
      (*(code *)puVar4)(local_80);
      (*(code *)puVar4)(local_90);
    }
    _free(pvVar5);
  }
  puVar4 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar4)(local_38);
LAB_0003b666:
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  return;
}

