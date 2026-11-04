// rea decompile_all
// name: _AMDServiceConnectionSendMessage
// address: 0x10e723
// body: available
// range: 0x10e723-0x10e93c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDServiceConnectionSendMessage(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint local_44;
  long local_40;
  undefined4 local_34;
  
  if (param_1 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = *(undefined4 *)(param_1 + 0x24);
  }
  if (param_2 == 0 || param_1 == 0) {
    return 0xe8000007;
  }
  local_40 = 0;
  lVar4 = _CFWriteStreamCreateWithAllocatedBuffers
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                     *(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
  if (lVar4 == 0) {
    return 0xe8000007;
  }
  cVar1 = _CFWriteStreamOpen(lVar4);
  if (cVar1 == '\0') {
LAB_0010e920:
    lVar5 = 0;
  }
  else {
    lVar5 = _CFPropertyListWrite(param_2,lVar4,param_3,0,&local_40);
    if (lVar5 != 0) {
      lVar5 = _CFWriteStreamCopyProperty
                        (lVar4,*(undefined8 *)PTR__kCFStreamPropertyDataWritten_004411a0);
      if (lVar5 != 0) {
        lVar6 = _CFGetTypeID(lVar5);
        lVar7 = _CFDataGetTypeID();
        if (lVar6 == lVar7) goto LAB_0010e80c;
        _CFRelease(lVar4);
        lVar4 = lVar5;
      }
      goto LAB_0010e920;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar5 = 0;
    __os_log_internal(0,_md_log_log,0x10,"CFPropertyListWrite of %@ failed: %@",param_2,local_40);
  }
LAB_0010e80c:
  _CFRelease(lVar4);
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar5 == 0) {
    return 0xe8000007;
  }
  lVar4 = _CFDataGetLength(lVar5);
  uVar8 = 0xe8000085;
  if (lVar4 < 0x100000000) {
    uVar2 = _CFDataGetLength(lVar5);
    uVar8 = _CFDataGetBytePtr(lVar5);
    local_44 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    iVar3 = _AMDServiceConnectionSend(param_1,&local_44,4);
    if (iVar3 == 4) {
      iVar3 = _AMDServiceConnectionSend(param_1,uVar8,(ulong)uVar2);
      uVar8 = 0;
      if ((ulong)uVar2 == (long)iVar3) goto LAB_0010e8b0;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      cVar1 = _isDeviceAttached();
      uVar8 = 0xe8000084;
      if (cVar1 == '\0') goto LAB_0010e8b0;
    }
    uVar8 = 0xe800002d;
  }
LAB_0010e8b0:
  _CFRelease(lVar5);
  return uVar8;
}

