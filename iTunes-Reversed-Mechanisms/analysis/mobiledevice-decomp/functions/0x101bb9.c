// rea decompile_all
// name: ___libMobileGestaltLibraryCore_block_invoke
// address: 0x101bb9
// body: available
// range: 0x101bb9-0x101c79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___libMobileGestaltLibraryCore_block_invoke(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  pcVar4 = "/usr/lib/libMobileGestalt.dylib";
  plVar5 = &DAT_004475c8;
  do {
    lVar2 = _dlopen(pcVar4,0x101);
    if (lVar2 != 0) goto LAB_00101c50;
    pcVar4 = (char *)*plVar5;
    plVar5 = plVar5 + 1;
  } while (pcVar4 != (char *)0x0);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar4 = _strdup("Softlinking client failed to load dependency.  Check system log for errors.");
    *puVar1 = pcVar4;
    pcVar4 = "/usr/lib/libMobileGestalt.dylib";
    plVar5 = &DAT_004475c8;
    do {
      lVar2 = _dlopen(pcVar4,0x101);
      if (lVar2 != 0) goto LAB_00101c50;
      uVar3 = _dlerror();
      _syslog(6,"%s",uVar3);
      pcVar4 = (char *)*plVar5;
      plVar5 = plVar5 + 1;
    } while (pcVar4 != (char *)0x0);
  }
  lVar2 = 0;
LAB_00101c50:
  *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar2;
  _libMobileGestaltLibraryCore_frameworkLibrary =
       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  return;
}

