// rea decompile_all
// name: _createCanonicalPath
// address: 0xfe553
// body: available
// range: 0xfe553-0xfe706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * _createCanonicalPath(char *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  cfstringStruct *local_40;
  
  sVar4 = _strlen(param_1);
  if (sVar4 == 0) {
    local_40 = (cfstringStruct *)0x0;
  }
  else {
    if (param_2 == '\0') {
      if (param_1[sVar4 - 1] == '/') {
        return (cfstringStruct *)0x0;
      }
      if (param_1[sVar4 - 1] == '\\') {
        return (cfstringStruct *)0x0;
      }
    }
    cVar1 = *param_1;
    if ((sVar4 == 1) && (cVar1 == '/' || cVar1 == '\\')) {
      local_40 = &cf__;
    }
    else {
      uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar5 = _CFArrayCreateMutable(uVar2,0,PTR__kCFTypeArrayCallBacks_004411a8);
      if ((cVar1 == '\\') || (cVar1 == '/')) {
        _CFArrayAppendValue(lVar5,&cf___);
      }
      pcVar6 = _strdup(param_1);
      pcVar9 = pcVar6;
      pcVar3 = pcVar6;
      do {
        if ((*pcVar3 == '\\') || (*pcVar3 == '/')) {
          *pcVar3 = '\0';
          lVar7 = _CFStringCreateWithFileSystemRepresentation(uVar2,pcVar9);
          if (lVar7 == 0) goto LAB_000fe6db;
          lVar8 = _CFStringGetLength(lVar7);
          if (0 < lVar8) {
            _CFArrayAppendValue(lVar5,lVar7);
          }
          _CFRelease(lVar7);
          pcVar9 = pcVar3 + 1;
        }
        sVar4 = sVar4 - 1;
        pcVar3 = pcVar3 + 1;
      } while (sVar4 != 0);
      lVar7 = _CFStringCreateWithFileSystemRepresentation(uVar2,pcVar9);
      if (lVar7 == 0) {
LAB_000fe6db:
        local_40 = (cfstringStruct *)0x0;
      }
      else {
        _CFArrayAppendValue(lVar5,lVar7);
        if ((param_2 != '\0') && (lVar8 = _CFStringGetLength(lVar7), lVar8 != 0)) {
          _CFArrayAppendValue(lVar5,&cf___);
        }
        local_40 = (cfstringStruct *)_CFStringCreateByCombiningStrings(uVar2,lVar5,&cf__);
        _CFRelease(lVar7);
      }
      if (lVar5 != 0) {
        _CFRelease(lVar5);
      }
      _free(pcVar6);
    }
  }
  return local_40;
}

