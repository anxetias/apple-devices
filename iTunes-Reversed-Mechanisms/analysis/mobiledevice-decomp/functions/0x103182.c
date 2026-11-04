// rea decompile_all
// name: _AMDevicePreflightOperationCreate
// address: 0x103182
// body: available
// range: 0x103182-0x1032c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDevicePreflightOperationCreate(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  _pthread_once((pthread_once_t *)&_AMDevicePreflightOperationGetTypeID_registerOnce,
                __registerPreflightOperationClass);
  lVar2 = __CFRuntimeCreateInstance(uVar1,__AMDevicePreflightOperationTypeID,0x88,0);
  if (lVar2 != 0) {
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
    *(undefined8 *)(lVar2 + 0x90) = 0;
    lVar3 = _CFRunLoopSourceCreate(uVar1,0);
    *(long *)(lVar2 + 0x70) = lVar3;
    if (lVar3 != 0) {
      lVar3 = _AMDeviceCreateFromProperties(param_3);
      *(long *)(lVar2 + 0x58) = lVar3;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar2 + 0x10) = 0x6c667270;
        *(undefined8 *)(lVar2 + 0x88) = param_1;
        *(undefined8 *)(lVar2 + 0x90) = param_2;
        *(undefined4 *)(lVar2 + 0x60) = 0xe8000001;
        *(undefined8 *)(lVar2 + 0x68) = 0;
        __mutex_init(lVar2 + 0x18);
        return lVar2;
      }
    }
    _CFRelease(lVar2);
  }
  return 0;
}

