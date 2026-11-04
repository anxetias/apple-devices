// rea decompile_all
// name: _CreateDirectoryManifestDictionary
// address: 0xb0e3f
// body: available
// range: 0xb0e3f-0xb0f80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _CreateDirectoryManifestDictionary(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  uint in_EAX;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  lVar2 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  uStack_38 = (ulong)(uint)uStack_38;
  lVar3 = _MDMDirectoryEnumeratorRefCreate(param_1,param_2);
  if (lVar3 == 0) {
    lVar4 = 0;
    _dmlog("CreateDirectoryManifestDictionary",0x1a5,&cf_MDMDirectoryEnumeratorRefCreatefailed);
    uStack_38 = CONCAT44(0xffffffff,(uint)uStack_38);
    iVar5 = -1;
  }
  else {
    do {
      lVar4 = _MDMCopyNextDirectoryEntries(lVar3,(long)&uStack_38 + 4);
      iVar5 = uStack_38._4_4_;
      if (uStack_38._4_4_ != 0) goto LAB_000b0f16;
      if (lVar4 == 0) {
        _ConsumeEntries(0,lVar2);
        break;
      }
      cVar1 = _CFDictionaryContainsKey(lVar4,&cf_LAST_ENTRY);
      _ConsumeEntries(lVar4,lVar2);
      _CFRelease(lVar4);
    } while (cVar1 == '\0' && uStack_38._4_4_ == 0);
    lVar4 = 0;
    iVar5 = uStack_38._4_4_;
    if (uStack_38._4_4_ == 0) goto LAB_000b0f42;
  }
LAB_000b0f16:
  _dmlog("CreateDirectoryManifestDictionary",0x1bb,&cf__sgoterrorstatus__d,
         "CreateDirectoryManifestDictionary",iVar5);
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  lVar2 = 0;
LAB_000b0f42:
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return lVar2;
}

