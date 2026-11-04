// rea decompile_all
// name: _AMRestoreCreateDefaultOptions
// address: 0xe2231
// body: available
// range: 0xe2231-0xe2366 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMRestoreCreateDefaultOptions(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _CFDictionaryCreateMutable
                    (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar1 != 0) {
    _CFDictionarySetValue
              (lVar1,&cf_RestoreBootArgs,&cf_rd_md0nand_enable_reformat_1_progress_restore);
    uVar2 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    _CFDictionarySetValue(lVar1,&cf_CreateFilesystemPartitions,uVar2);
    _CFDictionarySetValue(lVar1,&cf_FlashNOR,uVar2);
    _CFDictionarySetValue(lVar1,&cf_NORImageType,&cf_production);
    _CFDictionarySetValue(lVar1,&cf_UpdateBaseband,uVar2);
    _CFDictionarySetValue(lVar1,&cf_KernelCacheType,&cf_Release);
    _CFDictionarySetValue(lVar1,&cf_SystemImageType,&cf_User);
    _CFDictionarySetValue(lVar1,&cf_BootImageType,&cf_User);
    _CFDictionarySetValue(lVar1,&cf_DFUFileType,&cf_RELEASE);
    uVar2 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,9);
    _CFDictionarySetValue(lVar1,&cf_AutoBootDelay,uVar2);
    _CFRelease(uVar2);
  }
  return lVar1;
}

