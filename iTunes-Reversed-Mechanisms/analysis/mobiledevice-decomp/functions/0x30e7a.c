// rea decompile_all
// name: _taDFU_KISDaemon_release
// address: 0x30e7a
// body: available
// range: 0x30e7a-0x30fb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _taDFU_KISDaemon_release(long param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = "YES";
  pcVar2 = "YES";
  if (param_1 == 0) {
    pcVar2 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device %s","taDFU_KISDaemon_release",
                    pcVar2);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    pcVar2 = "YES";
    if (*(long *)(param_1 + 0x28) == 0) {
      pcVar2 = "NO";
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device->_deviceData %s",
                      "taDFU_KISDaemon_release",pcVar2);
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      pcVar2 = "YES";
      if (*(long *)(lVar1 + 0x10) == 0) {
        pcVar2 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s deviceData->nonceString %s",
                        "taDFU_KISDaemon_release",pcVar2);
      if (*(void **)(lVar1 + 0x10) != (void *)0x0) {
        _free(*(void **)(lVar1 + 0x10));
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      if (*(long *)(lVar1 + 0x18) == 0) {
        pcVar3 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s deviceData->epochString %s",
                        "taDFU_KISDaemon_release",pcVar3);
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        _free(*(void **)(lVar1 + 0x18));
        *(undefined8 *)(lVar1 + 0x18) = 0;
      }
      _free(*(void **)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}

