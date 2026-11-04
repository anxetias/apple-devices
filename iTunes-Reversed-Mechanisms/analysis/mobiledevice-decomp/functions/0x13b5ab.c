// rea decompile_all
// name: NSXPCMatchingProjectVersionConnection::synchronousRemoteObjectProxyWithErrorHandler:
// address: 0x13b5ab
// body: available
// range: 0x13b5ab-0x13b72c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID NSXPCMatchingProjectVersionConnection::synchronousRemoteObjectProxyWithErrorHandler_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  undefined8 uVar2;
  objc_super local_88;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  code *local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  local_40 = &local_48;
  local_48 = 0;
  local_38 = 0x2020000000;
  local_30 = 0;
  local_70 = &local_78;
  local_78 = 0;
  local_68 = 0x3052000000;
  local_60 = ___Block_byref_object_copy__1534;
  local_58 = ___Block_byref_object_dispose__1535;
  local_50 = 0;
  local_88.super_class = &objc::class_t::NSXPCMatchingProjectVersionConnection;
  local_88.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_88,"synchronousRemoteObjectProxyWithErrorHandler:");
  (*(code *)PTR__objc_msgSend_00441098)
            (IVar1,"validateProjectVersion:crashInvalidService:withReply:",&cf_1784_140_4,0);
  if (*(char *)(local_40 + 3) == '\0') {
    uVar2 = _createAndLogError("-[NSXPCMatchingProjectVersionConnection synchronousRemoteObjectProxyWithErrorHandler:]"
                               ,0x3c,
                               "stem/Library/Frameworks/DiskArbitration.framework/Versions/A/DiskArbitration"
                               ,1,0,&cf_XPCserviceversion____isincompatiblewithframeworkversion____,
                               local_70[5],&cf_1784_140_4);
    (**(code **)(param_3 + 0x10))(param_3,uVar2);
    IVar1 = 0;
  }
  else {
    uVar2 = 0;
  }
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  (*(code *)PTR__objc_release_004410a0)(local_70[5]);
  __Block_object_dispose(&local_78,8);
  __Block_object_dispose(&local_48,8);
  return IVar1;
}

