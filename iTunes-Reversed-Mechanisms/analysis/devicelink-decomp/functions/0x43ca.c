// rea decompile_all
// name: __DLResolveAndValidatePath
// address: 0x43ca
// body: available
// range: 0x43ca-0x44a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__DLResolveAndValidatePath(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    if (param_4 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    pcVar4 = &cf_Rootdirectorynotset;
  }
  else {
    lVar3 = _CFStringCompare(param_2,&cf___,0);
    if ((((lVar3 != 0) && (cVar1 = _CFStringHasPrefix(param_2,&cf____), cVar1 == '\0')) &&
        (lVar3 = _CFStringFind(param_2,&cf_____,0), lVar3 == -1)) &&
       (cVar1 = _CFStringHasSuffix(param_2,&cf____), cVar1 == '\0')) {
      lVar3 = _DLStringByAppendingPathComponent(*(undefined8 *)(param_1 + 0x98),param_2);
      uVar2 = _DLGetFileSystemRepresentation(lVar3,param_3,param_4);
      if (lVar3 == 0) {
        return uVar2;
      }
      _CFRelease(lVar3);
      return uVar2;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    pcVar4 = &cf_Pathcontains____;
  }
  *param_4 = pcVar4;
  return 0xffffffff;
}

