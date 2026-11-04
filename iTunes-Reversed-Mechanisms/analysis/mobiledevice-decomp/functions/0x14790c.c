// rea decompile_all
// name: _remote_device_osversion_property_is_at_least
// address: 0x14790c
// body: available
// range: 0x14790c-0x147a21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _remote_device_osversion_property_is_at_least
                (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  
  lVar1 = _remote_device_copy_property(param_1,"OSVersion");
  if (lVar1 == 0) {
    pcVar5 = &cf_FailedtoreadOSVersion_;
    uVar4 = 0x23;
  }
  else {
    lVar2 = _xpc_string_get_string_ptr(lVar1);
    if (lVar2 == 0) {
      pcVar5 = &cf_Failedtogetstring_;
      uVar4 = 0x29;
    }
    else {
      lVar2 = _CFStringCreateWithCString
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar2,0x8000100);
      if (lVar2 != 0) {
        lVar3 = _CFStringCompare(lVar2,param_2,0x40);
        uVar6 = CONCAT71((int7)((ulong)param_3 >> 8),lVar3 != -1);
        _xpc_release(lVar1);
        _CFRelease(lVar2);
        lVar2 = 0;
        goto LAB_00147a0d;
      }
      pcVar5 = &cf_Failedtocreatestring_;
      uVar4 = 0x2f;
    }
  }
  lVar2 = _createAndLogError("remote_device_osversion_property_is_at_least",uVar4,0xe80000f1,1,0,
                             pcVar5);
  if (param_3 != (undefined8 *)0x0 && lVar2 != 0) {
    uVar4 = (*(code *)PTR__objc_retain_004410a8)(lVar2);
    *param_3 = uVar4;
  }
  if (lVar1 != 0) {
    _xpc_release(lVar1);
  }
  uVar6 = 0;
LAB_00147a0d:
  (*(code *)PTR__objc_release_004410a0)(lVar2);
  return uVar6 & 0xffffffff;
}

