// rea decompile_all
// name: _copyComponentOfPath
// address: 0xb23f2
// body: available
// range: 0xb23f2-0xb250d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _copyComponentOfPath(undefined8 param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  
  lVar2 = _CFStringCreateWithFileSystemRepresentation(0,param_1);
  if (lVar2 == 0) {
    _copyComponentOfPath_cold_5();
    return (void *)0x0;
  }
  lVar3 = _CFURLCreateWithFileSystemPath(0,lVar2,0,param_3);
  if (lVar3 == 0) {
    _copyComponentOfPath_cold_4(lVar2);
    return (void *)0x0;
  }
  if (param_2 == '\0') {
    lVar4 = _CFURLCopyLastPathComponent(lVar3);
    if (lVar4 == 0) {
      _copyComponentOfPath_cold_3();
      goto LAB_000b2506;
    }
  }
  else {
    lVar4 = _CFURLCopyPathExtension();
    if (lVar4 == 0) {
      _copyComponentOfPath_cold_1();
LAB_000b2506:
      pvVar7 = (void *)0x0;
      lVar4 = 0;
      goto LAB_000b24b7;
    }
  }
  uVar5 = _CFStringGetLength(lVar4);
  lVar6 = _CFStringGetMaximumSizeForEncoding(uVar5,0x8000100);
  pvVar7 = _calloc(1,lVar6 + 1U);
  if (pvVar7 == (void *)0x0) {
    _copyComponentOfPath_cold_2();
  }
  else {
    cVar1 = _CFStringGetCString(lVar4,pvVar7,lVar6 + 1U,0x8000100);
    if (cVar1 != '\0') goto LAB_000b24b7;
    _free(pvVar7);
  }
  pvVar7 = (void *)0x0;
LAB_000b24b7:
  _CFRelease(lVar2);
  _CFRelease(lVar3);
  if (lVar4 != 0) {
    _CFRelease(lVar4);
    return pvVar7;
  }
  return pvVar7;
}

