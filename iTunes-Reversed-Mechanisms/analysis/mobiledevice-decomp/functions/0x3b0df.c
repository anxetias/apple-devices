// rea decompile_all
// name: __IsEmbeddedRemoteDevice
// address: 0x3b0df
// body: available
// range: 0x3b0df-0x3b1d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __IsEmbeddedRemoteDevice(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  bool bVar9;
  
  uVar4 = (*(code *)PTR__objc_retain_004410a8)();
  bVar9 = false;
  iVar3 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  if (iVar3 == 0) goto LAB_0003b1b5;
  lVar5 = _remote_device_copy_property(uVar4,"DeviceSupportsLockdown");
  uVar6 = _remote_device_copy_property(uVar4,"ProductType");
  uVar7 = _xpc_string_get_string_ptr(uVar6);
  IVar8 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:",uVar7)
  ;
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar8);
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  if (lVar5 == 0) {
LAB_0003b185:
    cVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"containsString:",&cf_Watch);
    bVar9 = cVar2 != '\0';
  }
  else {
    cVar2 = _xpc_bool_get_value(lVar5);
    bVar9 = true;
    if (cVar2 == '\0') goto LAB_0003b185;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  (*(code *)puVar1)(lVar5);
LAB_0003b1b5:
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  return bVar9;
}

