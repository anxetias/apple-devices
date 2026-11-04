// rea decompile_all
// name: _cfstring_to_c_string
// address: 0x265f1d
// body: available
// range: 0x265f1d-0x2660be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _cfstring_to_c_string(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  
  pcVar8 = "YES";
  pcVar6 = "YES";
  if (param_1 == 0) {
    pcVar6 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s stringToConvert %s","cfstring_to_c_string"
                    ,pcVar6);
  if (param_1 != 0) {
    uVar3 = _CFStringGetLength(param_1);
    lVar4 = _CFStringGetMaximumSizeForEncoding(uVar3,0x8000100);
    if (lVar4 != -2) {
      sVar7 = lVar4 + 2;
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s tmpBufferSize %ld",
                        "cfstring_to_c_string",sVar7);
      pvVar5 = _malloc(sVar7);
      if (pvVar5 == (void *)0x0) {
        pcVar8 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s tmpBuffer %s","cfstring_to_c_string",
                        pcVar8);
      if (pvVar5 != (void *)0x0) {
        cVar2 = _CFStringGetCString(param_1,pvVar5,sVar7,0x8000100);
        puVar1 = PTR___os_log_default_004412f0;
        if (cVar2 != '\0') {
          __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s convertedString %s",
                            "cfstring_to_c_string","YES");
          __os_log_internal(0,puVar1,0,"%s convertedString: %s","cfstring_to_c_string",pvVar5);
          return pvVar5;
        }
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s freeing tmpBuffer %s",
                          "cfstring_to_c_string","YES");
        _free(pvVar5);
      }
    }
  }
  return (void *)0x0;
}

