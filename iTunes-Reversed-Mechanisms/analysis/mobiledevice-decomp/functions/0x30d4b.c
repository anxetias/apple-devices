// rea decompile_all
// name: _taDFU_KISDaemon_epoch
// address: 0x30d4b
// body: available
// range: 0x30d4b-0x30e79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _taDFU_KISDaemon_epoch(long param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = "YES";
  pcVar3 = "YES";
  if (param_1 == 0) {
    pcVar3 = "NO";
  }
  pcVar2 = "YES";
  if (param_2 == (long *)0x0) {
    pcVar2 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device %s epoch %s",
                    "taDFU_KISDaemon_epoch",pcVar3,pcVar2);
  uVar5 = 0xfffffff7;
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    pcVar3 = "YES";
    if (*(long *)(param_1 + 0x28) == 0) {
      pcVar3 = "NO";
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device->_deviceData %s",
                      "taDFU_KISDaemon_epoch",pcVar3,pcVar2);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
      *param_2 = lVar1;
      if (lVar1 == 0) {
        pcVar4 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s *epoch %s","taDFU_KISDaemon_epoch",
                        pcVar4,pcVar2);
      uVar5 = 0;
      if (*param_2 != 0) {
        uVar5 = 0;
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s *epoch %s","taDFU_KISDaemon_epoch",
                          *param_2,pcVar2);
      }
    }
  }
  return uVar5;
}

