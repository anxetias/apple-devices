// rea decompile_all
// name: _AMDServiceConnectionInvalidate
// address: 0x10e1fe
// body: available
// range: 0x10e1fe-0x10e31b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMDServiceConnectionInvalidate(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 in_RAX;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)in_RAX >> 0x20);
  if ((param_1 != 0) && (*(char *)(param_1 + 0x21) != '\0')) {
    *(undefined1 *)(param_1 + 0x21) = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      lVar2 = *(long *)(param_1 + 0xa8);
      if (lVar2 != 0) {
        if (__RetainTunnelUsageAssertionForProcessLifetime_onceToken != -1) {
          _dispatch_once(&__RetainTunnelUsageAssertionForProcessLifetime_onceToken,
                         &___block_literal_global_346);
        }
        _CFArrayAppendValue(__RetainTunnelUsageAssertionForProcessLifetime_longHeldAssertions,lVar2)
        ;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      puVar6 = (undefined8 *)(param_1 + 0x18);
    }
    else {
      if (((*(int *)(param_1 + 0x10) != -1) &&
          (iVar4 = _shutdown(*(int *)(param_1 + 0x10),2), iVar4 == -1)) &&
         (piVar5 = ___error(), *piVar5 != 0x39)) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar3 = _md_log_log;
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        piVar5 = ___error();
        __os_log_internal(0,uVar3,0x10,"serv_conn %p; failure shutdown %d: %d",param_1,uVar1,
                          CONCAT44(uVar7,*piVar5));
      }
      puVar6 = (undefined8 *)(param_1 + 0xa8);
      if (*(long *)(param_1 + 0xa8) != 0) {
        _CFRelease();
      }
    }
    *puVar6 = 0;
  }
  return;
}

