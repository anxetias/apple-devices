// rea decompile_all
// name: _AFCConnectionCreate
// address: 0xba0c6
// body: available
// range: 0xba0c6-0xba2de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AFCConnectionCreate
               (undefined8 param_1,undefined4 param_2,char param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _pthread_once((pthread_once_t *)&_AFCConnectionGetTypeID_typeIDInit,___AFCConnectionRegisterClass)
  ;
  lVar2 = __CFRuntimeCreateInstance(param_1,___gAFCConnectionTypeID,0x4e8,0);
  if (lVar2 == 0) {
LAB_000ba29d:
    _AFCLog(5,"%s(%p)\n","AFCConnectionCreate",lVar2);
  }
  else {
    ___bzero(lVar2 + 0x10,0x4e8);
    lVar3 = _CFSocketCreateWithNative(param_1,param_2,1,___AFCConnectionSocketCallBack);
    *(long *)(lVar2 + 0x30) = lVar3;
    if (lVar3 != 0) {
      _CFSocketSetSocketFlags(lVar3,1);
      _AFCSetSocketOptions(lVar2,param_2);
      lVar3 = _CFArrayCreateMutable(param_1,0,PTR__kCFTypeArrayCallBacks_004411a8);
      *(long *)(lVar2 + 0x98) = lVar3;
      if (lVar3 != 0) {
        lVar3 = _CFArrayCreateMutable(param_1,0,PTR__kCFTypeArrayCallBacks_004411a8);
        *(long *)(lVar2 + 0xa0) = lVar3;
        if (lVar3 != 0) {
          lVar3 = _CFSetCreateMutable(param_1,0,0);
          *(long *)(lVar2 + 0xa8) = lVar3;
          if (lVar3 != 0) {
            *(undefined4 *)(lVar2 + 0x38) = param_2;
            *(bool *)(lVar2 + 0x3c) = param_3 != '\0';
            *(undefined8 *)(lVar2 + 0xd8) = param_4;
            *(undefined8 *)(lVar2 + 0x58) = 0x100000;
            *(undefined4 *)(lVar2 + 0x40) = 0;
            *(undefined1 *)(lVar2 + 0x44) = 0;
            *(undefined8 *)(lVar2 + 0x50) = 0;
            *(undefined8 *)(lVar2 + 0x60) = 0x100000;
            *(undefined8 *)(lVar2 + 0x78) = param_5;
            lVar3 = _AFCLockCreate();
            *(long *)(lVar2 + 0x88) = lVar3;
            if (lVar3 != 0) {
              lVar3 = _AFCLockCreate();
              *(long *)(lVar2 + 0x90) = lVar3;
              if (lVar3 != 0) {
                *(undefined8 *)(lVar2 + 0x68) = 0x3c;
                *(undefined4 *)(lVar2 + 0x70) = 1;
                iVar1 = _kqueue();
                *(int *)(lVar2 + 0x4e8) = iVar1;
                *(undefined4 *)(lVar2 + 0x10) = 1;
                lVar3 = _AFCConditionCreate(param_1);
                *(long *)(lVar2 + 0x28) = lVar3;
                if (lVar3 != 0) {
                  lVar3 = _AFCConditionCreate(param_1);
                  *(long *)(lVar2 + 0x18) = lVar3;
                  if (lVar3 != 0) {
                    _AFCCreateSignalFileDescriptors(lVar2 + 0x4ec,lVar2 + 0x4f0);
                    goto LAB_000ba29d;
                  }
                }
              }
            }
          }
        }
      }
    }
    _AFCConnectionCreate_cold_1(lVar2,lVar2 + 0x30);
    lVar2 = 0;
  }
  return lVar2;
}

