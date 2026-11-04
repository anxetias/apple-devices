// rea decompile_all
// name: __MISAgentReceiveMessage
// address: 0xbcb0a
// body: available
// range: 0xbcb0a-0xbcbe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __MISAgentReceiveMessage(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 in_RAX;
  void *pvVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  iVar2 = __MISAgentReadBuffer(param_1,(long)&uStack_38 + 4,4);
  if (iVar2 == 0) {
    uVar6 = uStack_38._4_4_ >> 0x18 | (uStack_38._4_4_ & 0xff0000) >> 8 |
            (uStack_38._4_4_ & 0xff00) << 8 | uStack_38._4_4_ << 0x18;
    uStack_38._4_4_ = uVar6;
    pvVar3 = _malloc((ulong)uVar6);
    if (pvVar3 == (void *)0x0) {
      iVar2 = -0x17ff7ff6;
    }
    else {
      iVar2 = __MISAgentReadBuffer(param_1,pvVar3,(ulong)uVar6);
      if (iVar2 == 0) {
        uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar4 = _CFDataCreateWithBytesNoCopy
                          (uVar1,pvVar3,uStack_38._4_4_,
                           *(undefined8 *)PTR__kCFAllocatorNull_004410f8);
        if (lVar4 == 0) {
          iVar2 = -0x17ff7ff6;
        }
        else {
          lVar5 = _CFPropertyListCreateWithData(uVar1,lVar4,0,0,0);
          *param_2 = lVar5;
          iVar2 = -0x17ff7ff6;
          if (lVar5 != 0) {
            iVar2 = 0;
          }
          _CFRelease(lVar4);
        }
      }
      _free(pvVar3);
    }
  }
  return iVar2;
}

