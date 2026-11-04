// rea decompile_all
// name: _MDRemoteServiceDeviceLoadBaseProperties
// address: 0x13c685
// body: available
// range: 0x13c685-0x13c85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MDRemoteServiceDeviceLoadBaseProperties(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  code *local_48;
  code *local_40;
  undefined8 local_38;
  uint local_2c;
  
  local_2c = 0;
  lVar1 = _MDRemoteServiceDeviceCopyProperty(param_1,"LocationID");
  if (lVar1 != 0) {
    lVar2 = _CFGetTypeID(lVar1);
    lVar3 = _CFNumberGetTypeID();
    if (lVar2 == lVar3) {
      _CFNumberGetValue(lVar1,9,&local_2c);
      *(ulong *)(param_1 + 0x30) = (ulong)local_2c;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar2 = _MDRemoteServiceDeviceCopyProperties(param_1);
  *(long *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) {
    pcVar6 = &cf_Failedtoloadremotedeviceproperties_;
    uVar4 = 0x3d9;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) {
      _CFRelease();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_58 = &local_60;
    local_60 = 0;
    local_50 = 0x3052000000;
    local_48 = ___Block_byref_object_copy__1534;
    local_40 = ___Block_byref_object_dispose__1535;
    local_38 = 0;
    uVar4 = _CFUUIDCreateString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                                *(undefined8 *)(param_1 + 0x18));
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                      (_gConnection,"synchronousRemoteObjectProxyWithErrorHandler:",
                       &___block_literal_global_215);
    (*(code *)PTR__objc_msgSend_00441098)
              (uVar5,"retrieveNameForUUID:type:withReply:",uVar4,*(undefined4 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    lVar2 = local_58[5];
    __Block_object_dispose(&local_60,8);
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      uVar4 = 0;
      goto LAB_0013c83f;
    }
    pcVar6 = &cf_Failedtoloadremotedevicename_;
    uVar4 = 0x3e0;
  }
  uVar4 = _createAndLogError("MDRemoteServiceDeviceLoadBaseProperties",uVar4,0xe80000f1,1,0,pcVar6);
LAB_0013c83f:
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  return uVar4;
}

