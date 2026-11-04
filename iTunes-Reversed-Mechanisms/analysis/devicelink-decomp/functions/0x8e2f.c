// rea decompile_all
// name: _StreamHandlerReceive
// address: 0x8e2f
// body: available
// range: 0x8e2f-0x8f36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x8f18 to 0xa706 _DLSetStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _StreamHandlerReceive(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint local_3c;
  long local_38;
  
  if (param_1 == 0) {
    pcVar4 = &cf_StreamHandlerisNULL;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
      lVar6 = 4;
      do {
        iVar1 = __Read(param_1,(long)&local_38 - lVar6,lVar6,&local_38);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        lVar6 = lVar6 - local_38;
      } while (lVar6 != 0);
      uVar5 = (ulong)(local_3c >> 0x18 | (local_3c & 0xff0000) >> 8 | (local_3c & 0xff00) << 8 |
                     local_3c << 0x18);
      pvVar2 = _malloc(uVar5);
      uVar7 = uVar5;
      if (local_3c != 0) {
        do {
          iVar1 = __Read(param_1,(uVar5 - uVar7) + (long)pvVar2,uVar7,&local_38);
          if (iVar1 != 0) {
            _free(pvVar2);
            return 0xffffffff;
          }
          uVar7 = uVar7 - local_38;
        } while (uVar7 != 0);
      }
      uVar3 = _DLDataCreateWithMallocedBytesNoCopy(pvVar2,uVar5);
      *param_2 = uVar3;
      return 0;
    }
    pcVar4 = &cf_DataisNULL;
  }
  uVar3 = _DLSetStatus(0xfffffffd,param_3,pcVar4);
  return uVar3;
}

