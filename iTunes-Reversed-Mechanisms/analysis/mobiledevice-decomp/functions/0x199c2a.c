// rea decompile_all
// name: _getAHPMAddressForRID
// address: 0x199c2a
// body: available
// range: 0x199c2a-0x199e25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00199ccd) */
/* WARNING: Removing unreachable block (ram,0x00199cda) */
/* WARNING: Removing unreachable block (ram,0x00199dab) */
/* WARNING: Removing unreachable block (ram,0x00199db7) */
/* WARNING: Removing unreachable block (ram,0x00199dc3) */
/* WARNING: Removing unreachable block (ram,0x00199dfd) */
/* WARNING: Removing unreachable block (ram,0x00199d04) */
/* WARNING: Removing unreachable block (ram,0x00199de3) */
/* WARNING: Removing unreachable block (ram,0x00199e08) */
/* WARNING: Removing unreachable block (ram,0x00199def) */
/* WARNING: Removing unreachable block (ram,0x00199d1d) */
/* WARNING: Removing unreachable block (ram,0x00199d35) */
/* WARNING: Removing unreachable block (ram,0x00199e11) */
/* WARNING: Removing unreachable block (ram,0x00199e18) */
/* WARNING: Removing unreachable block (ram,0x00199d45) */
/* WARNING: Removing unreachable block (ram,0x00199df6) */
/* WARNING: Removing unreachable block (ram,0x00199dc5) */
/* WARNING: Removing unreachable block (ram,0x00199dcc) */
/* WARNING: Removing unreachable block (ram,0x00199dd1) */
/* WARNING: Removing unreachable block (ram,0x00199dd9) */

undefined8 _getAHPMAddressForRID(undefined1 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_29;
  
  local_29 = param_1;
  uVar2 = _IOServiceMatching("AppleHPMDeviceHALType3");
  uVar3 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,&local_29);
  _add_property_match(uVar2,&cf_RID,uVar3);
  uVar1 = _IOServiceGetMatchingServices(*(undefined4 *)PTR__kIOMasterPortDefault_004411d8,uVar2);
  if (uVar1 == 0) {
    if (_inRestore == '\x01') {
      _puts("Found no matching services");
    }
    else {
      _uarpLogError(3,"Found no matching services\n");
    }
  }
  else if (_inRestore == '\x01') {
    _printf("Error finding IOKit service: 0x%x\n",(ulong)uVar1);
  }
  else {
    _uarpLogError(3,"Error finding IOKit service: 0x%x\n",uVar1);
  }
  return 0xe00002f0;
}

