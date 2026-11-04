// rea decompile_all
// name: AMDFUDeviceProxy::GetEffectiveFusingInfo
// address: 0x10704a
// body: available
// range: 0x10704a-0x1070ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMDFUDeviceProxy::GetEffectiveFusingInfo() */

char __thiscall AMDFUDeviceProxy::GetEffectiveFusingInfo(AMDFUDeviceProxy *this)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = _AMDFUModeDeviceGetEffectiveProductionMode(*(undefined8 *)(this + 0x20));
  cVar2 = _AMDFUModeDeviceGetEffectiveSecurityMode(*(undefined8 *)(this + 0x20));
  cVar3 = '\x02';
  if ((cVar1 == '\0' || cVar2 == '\0') && (cVar3 = '\x01', cVar1 != '\0' || cVar2 == '\0')) {
    cVar3 = (cVar2 == '\0' && cVar1 == '\0') * '\x03';
  }
  return cVar3;
}

