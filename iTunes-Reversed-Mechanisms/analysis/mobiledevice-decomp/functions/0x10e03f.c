// rea decompile_all
// name: __AMDServiceConnectionFinalize
// address: 0x10e03f
// body: available
// range: 0x10e03f-0x10e11e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDServiceConnectionFinalize(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(int *)(param_1 + 0x10) != -1) {
      iVar3 = _close(*(int *)(param_1 + 0x10));
      if (iVar3 == -1) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar2 = _md_log_log;
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        piVar4 = ___error();
        __os_log_internal(0,uVar2,0x10,"close(2) on socket %d failed: %d",uVar1,*piVar4);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    _AMDServiceConnectionInvalidate(param_1);
    if (*(long *)(param_1 + 0x18) != 0) {
      _SSL_free();
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}

