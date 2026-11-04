// rea decompile_all
// name: __DLCreateItemAttributes
// address: 0x4753
// body: available
// range: 0x4753-0x48b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __DLCreateItemAttributes
              (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined1 local_c8 [4];
  ushort local_c4;
  long local_98;
  undefined8 local_68;
  undefined8 local_38;
  void *local_30;
  
  local_30 = (void *)0x0;
  iVar1 = __DLResolveAndValidatePath();
  if (iVar1 == 0) {
    iVar1 = _lstat_INODE64(local_30,local_c8);
    if (iVar1 == 0) {
      uVar2 = _CFDictionaryCreateMutable
                        (0,3,PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                         PTR__kCFTypeDictionaryValueCallBacks_00015058);
      pcVar5 = &cf_DLFileTypeUnknown;
      if ((local_c4 & 0xf000) == 0x8000) {
        pcVar5 = &cf_DLFileTypeRegular;
      }
      pcVar4 = &cf_DLFileTypeDirectory;
      if ((local_c4 & 0xf000) != 0x4000) {
        pcVar4 = pcVar5;
      }
      _CFDictionarySetValue(uVar2,&cf_DLFileType,pcVar4);
      if (SBORROW2(0,local_c4 & 0xf000)) {
        local_38 = local_68;
        lVar3 = _CFNumberCreate(0,0xb);
        _CFDictionarySetValue(uVar2,&cf_DLFileSize,lVar3);
        if (lVar3 != 0) {
          _CFRelease(lVar3);
        }
      }
      iVar1 = 0;
      lVar3 = _CFDateCreate((double)local_98 -
                            *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_00015000,0);
      _CFDictionarySetValue(uVar2,&cf_DLFileModificationDate,lVar3);
      if (lVar3 != 0) {
        _CFRelease(lVar3);
      }
      *param_3 = uVar2;
    }
    else {
      iVar1 = _DLStatusFromOSStatus(0xffffffff,param_4);
    }
  }
  _free(local_30);
  return iVar1;
}

