// rea decompile_all
// name: _AFCOperationCreate
// address: 0xb8424
// body: available
// range: 0xb8424-0xb85ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AFCOperationCreate(undefined8 param_1,void *param_2,long param_3,undefined8 param_4,
                        long param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  
  _pthread_once((pthread_once_t *)&_AFCOperationGetTypeID_typeIDInit,___AFCOperationRegisterClass);
  lVar2 = __CFRuntimeCreateInstance(param_1,___gAFCOperationTypeID,0xf8,0);
  if (lVar2 == 0) {
LAB_000b85b4:
    _AFCLog(5,"%s(%p)\n","AFCOperationCreate",lVar2);
  }
  else {
    if (param_2 != (void *)0x0) {
      uVar1 = *(ulong *)((long)param_2 + 0x10);
      *(undefined8 *)(lVar2 + 0xf0) = 0;
      *(undefined8 *)(lVar2 + 0xf8) = 0;
      *(undefined8 *)(lVar2 + 0xe0) = 0;
      *(undefined8 *)(lVar2 + 0xe8) = 0;
      *(undefined8 *)(lVar2 + 0xd0) = 0;
      *(undefined8 *)(lVar2 + 0xd8) = 0;
      *(undefined8 *)(lVar2 + 0xc0) = 0;
      *(undefined8 *)(lVar2 + 200) = 0;
      *(undefined8 *)(lVar2 + 0xb0) = 0;
      *(undefined8 *)(lVar2 + 0xb8) = 0;
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      *(undefined8 *)(lVar2 + 0xa8) = 0;
      *(undefined8 *)(lVar2 + 0x90) = 0;
      *(undefined8 *)(lVar2 + 0x98) = 0;
      *(undefined8 *)(lVar2 + 0x80) = 0;
      *(undefined8 *)(lVar2 + 0x88) = 0;
      *(undefined8 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0x78) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined8 *)(lVar2 + 0x68) = 0;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x100) = 0;
      if (uVar1 < 0x81) {
        pvVar6 = (void *)(lVar2 + 0x70);
        *(void **)(lVar2 + 0x58) = pvVar6;
        uVar3 = *(undefined8 *)PTR__kCFAllocatorNull_004410f8;
        uVar5 = 0x80;
      }
      else {
        pvVar6 = (void *)_CFAllocatorAllocate(param_1,*(undefined8 *)((long)param_2 + 0x10),0);
        *(void **)(lVar2 + 0x58) = pvVar6;
        uVar3 = param_1;
        uVar5 = uVar1;
        if (pvVar6 == (void *)0x0) goto LAB_000b85e3;
      }
      *(undefined8 *)(lVar2 + 0x60) = uVar3;
      *(ulong *)(lVar2 + 0x68) = uVar5;
      _memcpy(pvVar6,param_2,uVar1);
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)param_2 + 0x20);
      if (param_3 != 0) {
        _CFRetain(param_3);
      }
      *(long *)(lVar2 + 0x40) = param_3;
      *(undefined8 *)(lVar2 + 0x48) = param_4;
      if (param_5 != 0) {
        _CFRetain(param_5);
      }
      *(long *)(lVar2 + 0x50) = param_5;
      lVar4 = _AFCConditionCreate(param_1);
      *(long *)(lVar2 + 0x100) = lVar4;
      if (lVar4 != 0) {
        *(undefined8 *)(lVar2 + 0x10) = param_6;
        *(undefined4 *)(lVar2 + 0x18) = 1;
        lVar4 = _AFCLockCreate();
        *(long *)(lVar2 + 0xf8) = lVar4;
        if (lVar4 != 0) goto LAB_000b85b4;
      }
    }
LAB_000b85e3:
    _AFCOperationCreate_cold_1(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}

