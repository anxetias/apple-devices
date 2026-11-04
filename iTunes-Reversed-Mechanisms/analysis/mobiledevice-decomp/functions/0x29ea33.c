// rea decompile_all
// name: _AMAuthInstallSupportGetUInt32
// address: 0x29ea33
// body: available
// range: 0x29ea33-0x29eadb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallSupportGetUInt32(long param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_28 [3];
  undefined4 local_1c;
  
  if (param_1 == 0) {
    return 1;
  }
  pcVar2 = (char *)_CFNumberGetType();
  if (pcVar2 == "\a") {
    cVar1 = _CFNumberGetValue(param_1,4,local_28);
    if (cVar1 != '\0') {
LAB_0029ea88:
      *param_2 = local_28[0];
      return 0;
    }
    pcVar3 = "%s: failed to convert 64-bit value";
  }
  else {
    if (pcVar2 != (char *)0x3) {
      pcVar3 = "Incoming CFNumberRef is of unexpected type %d";
      goto LAB_0029eaa4;
    }
    cVar1 = _CFNumberGetValue(param_1,3,&local_1c);
    local_28[0] = local_1c;
    if (cVar1 != '\0') goto LAB_0029ea88;
    pcVar3 = "%s: failed to convert 32-bit value";
  }
  pcVar2 = "AMAuthInstallSupportGetUInt32";
LAB_0029eaa4:
  _AMAuthInstallLog(3,"AMAuthInstallSupportGetUInt32",pcVar3,pcVar2);
  return 3;
}

