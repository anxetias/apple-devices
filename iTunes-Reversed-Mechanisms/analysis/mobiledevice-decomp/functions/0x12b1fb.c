// rea decompile_all
// name: ___findRemoteDeviceWithUDID_block_invoke_2
// address: 0x12b1fb
// body: available
// range: 0x12b1fb-0x12b32f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12b32b to 0x2aa236 _dispatch_group_leave (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___findRemoteDeviceWithUDID_block_invoke_2(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  lVar2 = _remote_device_copy_property(param_2,"UniqueDeviceID");
  if (lVar2 == 0) {
    uVar4 = _createAndLogError("findRemoteDeviceWithUDID_block_invoke_2",0xc9,0xe8000003,0,0,
                               &cf_FailedtocopypropertyUniqueDeviceID_);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) = uVar4;
  }
  else {
    lVar3 = _xpc_string_get_string_ptr(lVar2);
    if (lVar3 == 0) {
      pcVar5 = &cf_Failedtogetstringpointer_;
      uVar4 = 0xcf;
    }
    else {
      lVar3 = _CFStringCreateWithCString
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar3,0x8000100);
      if (lVar3 != 0) {
        cVar1 = _CFEqual(lVar3,*(undefined8 *)(param_1 + 0x40));
        if (cVar1 != '\0') {
          uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_2);
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) = uVar4;
          _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x20));
        }
        _xpc_release(lVar2);
        _CFRelease(lVar3);
        goto LAB_0012b316;
      }
      pcVar5 = &cf_Failedtocreatestring_;
      uVar4 = 0xd5;
    }
    uVar4 = _createAndLogError("findRemoteDeviceWithUDID_block_invoke_2",uVar4,0xe8000003,0,0,pcVar5
                              );
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) = uVar4;
    _xpc_release(lVar2);
  }
LAB_0012b316:
  _CFRelease(*(undefined8 *)(param_1 + 0x40));
  _dispatch_group_leave(*(dispatch_group_t *)(param_1 + 0x28));
  return;
}

