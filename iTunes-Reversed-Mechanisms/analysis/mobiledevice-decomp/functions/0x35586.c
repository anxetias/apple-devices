// rea decompile_all
// name: ____findAstrisHubForDevice_block_invoke
// address: 0x35586
// body: available
// range: 0x35586-0x35718 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x356e3 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____findAstrisHubForDevice_block_invoke(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar6 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  cVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"conformsTo:",&cf_AppleUSBHostPort);
  if (cVar2 != '\0') {
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"objectForKeyedSubscript:",&cf_port_status);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = _ensureNumber(uVar7);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar7);
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"unsignedIntegerValue");
    (*(code *)puVar1)(uVar8);
    if (0xfffffffffffffffd < (ulong)(uVar4 & 0xf) - 3) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    }
  }
  cVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"conformsTo:",&cf_IOUSBDevice);
  if (cVar2 == '\0') goto LAB_000356d2;
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  cVar2 = *(char *)(lVar9 + 0x18);
  *(undefined1 *)(lVar9 + 0x18) = 0;
  uVar4 = _safeUSBVendorID(uVar6);
  uVar5 = _safeUSBProductID(uVar6);
  uVar3 = _safeUSBDeviceReleaseNumber(uVar6);
  lVar9 = _probeHubForVIDPID(uVar4 & 0xffff,uVar5 & 0xffff,uVar3);
  if (lVar9 == 0) {
    if (cVar2 != '\0') goto LAB_000356d2;
    uVar7 = 2;
    if ((1 < (uVar5 & 0xffff) + uVar4 * 0x10000 + 0xfa536ec8) &&
       (1 < (uVar4 * 0x10000 | uVar5 & 0xffff) + 0xfa53efe3)) goto LAB_000356d2;
  }
  else {
    _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,param_2);
    uVar7 = 1;
  }
  *param_3 = uVar7;
LAB_000356d2:
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  return;
}

