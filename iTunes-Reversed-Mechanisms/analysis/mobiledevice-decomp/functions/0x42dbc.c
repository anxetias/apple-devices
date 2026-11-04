// rea decompile_all
// name: _IXCreateInstallResultFromInstallCompleteMessage
// address: 0x42dbc
// body: available
// range: 0x42dbc-0x4308c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43088 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXCreateInstallResultFromInstallCompleteMessage(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar2 = PTR__objc_retain_004410a8;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)();
  uVar6 = _xpc_dictionary_get_value(uVar4,"DBUUID");
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar6 = __CFXPCCreateCFObjectFromXPCObject(uVar5);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar8 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSString,"class");
  uVar6 = (*(code *)puVar2)(uVar6);
  cVar3 = (*(code *)puVar1)(uVar6,"isKindOfClass:",uVar8);
  if (cVar3 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar5);
  uVar6 = _objc_alloc(&_OBJC_CLASS___NSUUID);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"initWithUUIDString:",uVar8);
  uVar5 = _xpc_dictionary_get_value(uVar4,"DBSequence");
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = __CFXPCCreateCFObjectFromXPCObject(uVar7);
  uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
  cVar3 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar9);
  if (cVar3 == '\0') {
    local_48 = 0;
  }
  else {
    local_48 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar7);
  uVar5 = _xpc_dictionary_get_value(uVar4,"InstallPath");
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = __CFXPCCreateCFObjectFromXPCObject(uVar7);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar9 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSURL,"class");
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
  cVar3 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar9);
  if (cVar3 == '\0') {
    local_40 = 0;
  }
  else {
    local_40 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar7);
  uVar5 = _xpc_dictionary_get_value(uVar4,"PersistentIdentifier");
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = __CFXPCCreateCFObjectFromXPCObject(uVar7);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar9 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSData,"class");
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
  cVar3 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar9);
  if (cVar3 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar7);
  uVar5 = _objc_alloc(&objc::class_t::IXRemoteInstallResult);
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar5,"initWithDBUUID:dbSequenceNumber:URLOfInstalledApp:persistentIdentifier:"
                     ,uVar6,local_48,local_40,uVar9);
  (*(code *)puVar1)(uVar9);
  (*(code *)puVar1)(local_40);
  (*(code *)puVar1)(local_48);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar8);
  (*(code *)puVar1)(uVar4);
  _objc_autoreleaseReturnValue(uVar5);
  return;
}

