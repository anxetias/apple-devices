// rea decompile_all
// name: ____findFastsimProbeForDevice_block_invoke
// address: 0x35e09
// body: available
// range: 0x35e09-0x35ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x35eca to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____findFastsimProbeForDevice_block_invoke(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  cVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"conformsTo:",&cf_IOUSBDevice);
  if (cVar2 != '\0') {
    *param_3 = 2;
    lVar4 = _probeDeviceForRegistryEntry(uVar3);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x28) == 4)) {
      uVar5 = _safeUSBSerialNumber(uVar3);
      lVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_release_004410a0)(lVar4);
      if (lVar4 != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
        lVar1 = *(long *)(lVar4 + 0x28);
        puVar6 = (undefined8 *)(lVar4 + 0x28);
        if (lVar1 == 0) {
          _objc_storeStrong(puVar6,param_2);
        }
        else {
          *puVar6 = 0;
          (*(code *)PTR__objc_release_004410a0)(lVar1);
          *param_3 = 1;
        }
      }
    }
  }
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  return;
}

