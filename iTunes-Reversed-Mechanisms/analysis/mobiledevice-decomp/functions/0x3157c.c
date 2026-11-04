// rea decompile_all
// name: _dfuDevicesAreEqual
// address: 0x3157c
// body: available
// range: 0x3157c-0x3163a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _dfuDevicesAreEqual(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar1 = "YES";
  pcVar2 = "YES";
  if (param_1 == 0) {
    pcVar2 = "NO";
  }
  if (param_2 == 0) {
    pcVar1 = "NO";
  }
  bVar3 = false;
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s first %s second %s","dfuDevicesAreEqual",
                    pcVar2,pcVar1);
  if (((param_1 != 0) && (bVar3 = false, param_2 != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
    if (*(long *)(param_2 + 0x28) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x20) ==
              *(long *)(*(long *)(param_2 + 0x28) + 0x20);
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s interfaceIDMatches %d",
                        "dfuDevicesAreEqual",bVar3,pcVar1);
    }
  }
  return bVar3;
}

