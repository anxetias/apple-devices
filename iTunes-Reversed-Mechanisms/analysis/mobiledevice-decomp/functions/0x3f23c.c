// rea decompile_all
// name: ___IXUrlsForItemsInDirectoryAtURL_block_invoke
// address: 0x3f23c
// body: available
// range: 0x3f23c-0x3f3ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ___IXUrlsForItemsInDirectoryAtURL_block_invoke(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__objc_msgSend_00441098;
  if (*(char *)(param_2 + 0x15) == '.') {
    if (*(char *)(param_2 + 0x16) == '\0') {
      return 1;
    }
    if ((*(char *)(param_2 + 0x16) == '.') && (*(char *)(param_2 + 0x17) == '\0')) {
      return 1;
    }
  }
  lVar1 = param_2 + 0x15;
  if ((*(char *)(param_2 + 0x14) == '\n') && (*(char *)(param_1 + 0x30) != '\0')) {
    uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = _objc_retainAutorelease(*(undefined8 *)(param_1 + 0x20));
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"fileSystemRepresentation");
    __os_log_internal(0,lVar4,2,"%s: Ignoring symlink at %s/%s",
                      "IXUrlsForItemsInDirectoryAtURL_block_invoke",uVar3,lVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    IVar5 = NSString::stringWithFileSystemRepresentation_length_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithFileSystemRepresentation:length:",
                       lVar1,(ulong)*(ushort *)(param_2 + 0x12));
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
    uVar3 = (*(code *)puVar2)(uVar3,"URLByAppendingPathComponent:isDirectory:",uVar6,
                              *(char *)(param_2 + 0x14) == '\x04');
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    if (lVar4 == 0) {
      uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x20),"path");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      __os_log_internal(0,uVar3,0,"%s: Failed to create URL by appending %s to %@",
                        "IXUrlsForItemsInDirectoryAtURL_block_invoke",lVar1,uVar6);
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      (*(code *)puVar2)(uVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x28),"addObject:",lVar4);
    }
  }
  (*(code *)PTR__objc_release_004410a0)(lVar4);
  return 1;
}

