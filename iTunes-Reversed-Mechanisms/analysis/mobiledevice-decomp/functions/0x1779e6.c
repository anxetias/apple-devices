// rea decompile_all
// name: __AMRestorableStateMachineCreateWithStateInfo
// address: 0x1779e6
// body: available
// range: 0x1779e6-0x177ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestorableStateMachineCreateWithStateInfo(void *param_1,uint param_2)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  
  if (__AMRestorableStateMachineInitOnce != -1) {
    _dispatch_once_f(&__AMRestorableStateMachineInitOnce,(void *)0x0,__AMRestorableStateMachineInit)
    ;
  }
  if (__AMRestorableStateMachineInitSuccessful == '\x01') {
    if (0 < (int)param_2) {
      lVar5 = 0;
      lVar2 = __CFRuntimeCreateInstance
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                         __AMRestorableStateMachineTypeID,0x20,0);
      if (lVar2 == 0) {
        pcVar4 = &cf_Failedtoallocate_AMRestorableStateMachine;
      }
      else {
        pvVar3 = _calloc((ulong)param_2,0xc);
        *(void **)(lVar2 + 0x20) = pvVar3;
        sVar1 = (ulong)param_2 * 0xc;
        _memcpy(pvVar3,param_1,sVar1);
        *(uint *)(lVar2 + 0x28) = param_2;
        *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x20);
        *(size_t *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x20) + sVar1 + -0xc;
        *(undefined1 *)(lVar2 + 0x2c) = 0;
        pcVar4 = (cfstringStruct *)0x0;
        lVar5 = lVar2;
      }
      goto LAB_00177a96;
    }
    pcVar4 = &cf_InvalidnumberofRestoreStateInfostepsforstatemachinetouse;
  }
  else {
    pcVar4 = &cf_Failedtoinitializeclass_AMRestorableStateMachine;
  }
  lVar5 = 0;
LAB_00177a96:
  _AMRSafeLogAndRelease(3,pcVar4);
  return lVar5;
}

