// rea decompile_all
// name: __calcDeviceRequestTimeout
// address: 0xf1740
// body: available
// range: 0xf1740-0xf17b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __calcDeviceRequestTimeout(long param_1,long param_2)

{
  uint uVar1;
  undefined8 local_20;
  
  __loadFirmwareInfo();
  uVar1 = *(uint *)(param_1 + 0x5c) & 0xfffffff0;
  if (param_2 == 0 || uVar1 != 0xf0) {
    local_20 = *(undefined8 *)(&DAT_0032ca70 + (ulong)(uVar1 == 0xf0) * 8);
  }
  else {
    local_20 = 0;
    _CFNumberGetValue(param_2,0xd,&local_20);
  }
  return local_20;
}

