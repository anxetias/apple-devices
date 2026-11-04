// rea decompile_all
// name: _AMRestoreModeDeviceProgressAsync
// address: 0xcf67c
// body: available
// range: 0xcf67c-0xcf87a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRestoreModeDeviceProgressAsync(__AMRestoreModeDevice*, int, int, __CFString const*) */

void _AMRestoreModeDeviceProgressAsync
               (__AMRestoreModeDevice *param_1,int param_2,int param_3,__CFString *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  _AMRLog(7,&cf____operation_dprogress_d,param_1,param_2,param_3);
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1c8));
  lVar2 = *(long *)(param_1 + 0x40);
  if (param_4 == (__CFString *)0x0) {
    if (lVar2 != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
LAB_000cf7be:
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
  }
  else {
    if (lVar2 != 0) {
      lVar2 = _CFStringCompare(lVar2,param_4,0);
      if (lVar2 == 0) goto LAB_000cf7be;
    }
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_40 = param_2;
    local_3c = param_3;
    local_38 = param_3;
    uVar3 = _CFDictionaryCreateMutable
                      (uVar5,2,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    uVar4 = _CFNumberCreate(uVar5,9,&local_40);
    local_34 = param_2;
    uVar5 = _CFNumberCreate(uVar5,9,&local_3c);
    _CFDictionarySetValue(uVar3,&cf_OPS,uVar4);
    _CFDictionarySetValue(uVar3,&cf_PROGRESS,uVar5);
    param_3 = local_38;
    _CFRelease(uVar5);
    param_2 = local_34;
    _CFRelease(uVar4);
    _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x38),param_4,uVar3);
    _CFRelease(uVar3);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1c8));
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))
              (param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar5 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    uVar1 = _PRProgressComputeOverallProgress(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    _AMSupportCFDictionarySetInteger32(uVar5,&cf_Operation,*(undefined4 *)(param_1 + 0x28));
    _AMSupportCFDictionarySetInteger32(uVar5,&cf_Progress,*(undefined4 *)(param_1 + 0x2c));
    _AMSupportCFDictionarySetInteger32(uVar5,&cf_OverallProgress,uVar1);
    (**(code **)(param_1 + 0x18))(param_1,uVar5,*(undefined8 *)(param_1 + 0x20));
    _CFRelease(uVar5);
  }
  return;
}

