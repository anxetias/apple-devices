// rea decompile_all
// name: _DLCopyFileAttributes
// address: 0xaf48
// body: available
// range: 0xaf48-0xb1d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLCopyFileAttributes(void *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined1 local_b0 [4];
  undefined1 local_ac [2];
  undefined1 local_aa [2];
  undefined1 local_a8 [8];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [24];
  
  if (param_1 != (void *)0x0) {
    pvVar3 = (void *)_DLCreateCStringFromCFString();
    if (pvVar3 == (void *)0x0) {
      cVar1 = _DLLoggingEnabled(3);
      if ((cVar1 == '\0') && (cVar1 = _DLOutputEnabled(3), cVar1 == '\0')) {
        return 0;
      }
      pcVar5 = &cf_CouldnotcreateaCstringfromtheCFString____;
    }
    else {
      iVar2 = _stat_INODE64(pvVar3,local_b0);
      if (iVar2 == 0) {
        _free(pvVar3);
        uVar4 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                           PTR__kCFTypeDictionaryValueCallBacks_00015058);
        _CFDictionaryAddValue(uVar4,&cf_Filename,param_1);
        __DLAddNumberToDict(local_b0,3,&cf_DeviceIdentifier,uVar4);
        __DLAddNumberToDict(local_a8,3,&cf_FileSystemFileNumber,uVar4);
        __DLAddNumberToDict(local_ac,2,&cf_FileMode,uVar4);
        __DLAddNumberToDict(local_aa,2,&cf_LinkCount,uVar4);
        __DLAddNumberToDict(local_a0,3,&cf_OwnerAccountID,uVar4);
        __DLAddNumberToDict(local_9c,3,&cf_GroupOwnerAccountID,uVar4);
        __DLAddNumberToDict(local_98,3,&cf_DeviceType,uVar4);
        __DLAddDateToDict(local_90,&cf_AccessTime,uVar4);
        __DLAddDateToDict(local_80,&cf_ModificationTime,uVar4);
        __DLAddDateToDict(local_70,&cf_ChangeTime,uVar4);
        __DLAddNumberToDict(local_50,4,&cf_FileSize,uVar4);
        __DLAddNumberToDict(local_48,4,&cf_BlockCount,uVar4);
        __DLAddNumberToDict(local_40,3,&cf_BlockSize,uVar4);
        __DLAddNumberToDict(local_3c,3,&cf_FileFlags,uVar4);
        __DLAddNumberToDict(local_38,3,&cf_GenerationNumber,uVar4);
        return uVar4;
      }
      cVar1 = _DLLoggingEnabled(3);
      if ((cVar1 == '\0') && (cVar1 = _DLOutputEnabled(3), cVar1 == '\0')) {
        return 0;
      }
      pcVar5 = &cf_Couldnotstatthefileat__s_;
      param_1 = pvVar3;
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
            ,"DLCopyFileAttributes",3,pcVar5,param_1);
  }
  return 0;
}

