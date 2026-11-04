// rea decompile_all
// name: FUN_100000dea
// address: 0x100000dea
// body: available
// range: 0x100000dea-0x100000f30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_100000dea(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_1 != 0) {
    lVar3 = _CFGetTypeID();
    lVar4 = _CFStringGetTypeID();
    if (lVar3 == lVar4) {
      iVar2 = _CFStringGetFastestEncoding();
      if ((((iVar2 != 0) && (iVar2 != 0x8000100)) && (iVar2 != 0x600)) ||
         (pcVar5 = (char *)_CFStringGetCStringPtr(param_1,iVar2), pcVar5 == (char *)0x0)) {
        iVar2 = DAT_100022b40 + 1;
        if (4 < DAT_100022b40) {
          iVar2 = 0;
        }
        DAT_100022b40 = iVar2;
        cVar1 = _CFStringGetCString(param_1,&DAT_100021340 + (long)iVar2 * 0x400,0x400,0x8000100);
        pcVar5 = (char *)0x0;
        if (cVar1 != '\0') {
          pcVar5 = &DAT_100021340 + (long)iVar2 * 0x400;
        }
      }
    }
    else {
      lVar3 = _CFGetTypeID(param_1);
      lVar4 = _CFDataGetTypeID();
      if (lVar3 == lVar4) {
        lVar3 = _CFStringCreateFromExternalRepresentation
                          (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,param_1,0x8000100);
      }
      else {
        lVar3 = _CFCopyDescription(param_1);
      }
      pcVar5 = (char *)0x0;
      if (lVar3 != 0) {
        iVar2 = DAT_100022b40 + 1;
        if (4 < DAT_100022b40) {
          iVar2 = 0;
        }
        DAT_100022b40 = iVar2;
        cVar1 = _CFStringGetCString(lVar3,&DAT_100021340 + (long)iVar2 * 0x400,0x400,0x8000100);
        if (cVar1 != '\0') {
          pcVar5 = &DAT_100021340 + (long)iVar2 * 0x400;
        }
        _CFRelease(lVar3);
      }
    }
    pcVar6 = "???";
    if (pcVar5 != (char *)0x0) {
      pcVar6 = pcVar5;
    }
    return pcVar6;
  }
  return "NULL";
}

