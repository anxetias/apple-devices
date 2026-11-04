// rea decompile_all
// name: _probeDeviceForRegistryEntry
// address: 0x3449a
// body: available
// range: 0x3449a-0x3453e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * _probeDeviceForRegistryEntry(void)

{
  short *psVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar6 = (*(code *)PTR__objc_retain_004410a8)();
  uVar3 = _safeUSBVendorID(uVar6);
  uVar4 = _safeUSBProductID(uVar6);
  uVar5 = _safeUSBDeviceReleaseNumber(uVar6);
  puVar7 = &_g_astrisProbeTable;
  do {
    cVar2 = _probeDeviceMatchesVIDPID(uVar3,uVar4,uVar5,puVar7);
    if (cVar2 != '\0') goto LAB_00034524;
    psVar1 = (short *)(puVar7 + 0x30);
    puVar7 = puVar7 + 0x30;
  } while (*psVar1 != 0);
  cVar2 = _probeDeviceMatchesVIDPID(uVar3,uVar4,uVar5);
  puVar7 = (undefined *)0x0;
  if (cVar2 != '\0') {
    puVar7 = &_g_astrisATDeviceProbeTable;
  }
LAB_00034524:
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  return puVar7;
}

