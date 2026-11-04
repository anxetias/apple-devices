// rea decompile_all
// name: _AMRestoreModeDeviceCreateEmpty
// address: 0xcc539
// body: available
// range: 0xcc539-0xcc6b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcc6b2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRestoreModeDeviceCreateEmpty(__CFAllocator const*) */

long _AMRestoreModeDeviceCreateEmpty(__CFAllocator *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  _pthread_once((pthread_once_t *)&_AMRestoreModeDeviceClassInitializeOnce,
                _AMRestoreModeDeviceClassInitialize);
  lVar1 = __CFRuntimeCreateInstance(param_1,_AMRestoreModeDeviceTypeID,0x230,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x88) = 0;
    local_38.__sig = 0;
    local_38.__opaque[0] = '\0';
    local_38.__opaque[1] = '\0';
    local_38.__opaque[2] = '\0';
    local_38.__opaque[3] = '\0';
    local_38.__opaque[4] = '\0';
    local_38.__opaque[5] = '\0';
    local_38.__opaque[6] = '\0';
    local_38.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_38);
    _pthread_mutexattr_setpolicy_np(&local_38,3);
    _pthread_mutex_init((pthread_mutex_t *)(lVar1 + 0x1c8),&local_38);
    _pthread_mutex_init((pthread_mutex_t *)(lVar1 + 0x158),&local_38);
    _pthread_mutexattr_destroy(&local_38);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x108) = 0;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    *(undefined8 *)(lVar1 + 0x120) = 0;
    *(undefined4 *)(lVar1 + 0x78) = 0xffffffff;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined4 *)(lVar1 + 0x130) = 0;
    *(undefined1 *)(lVar1 + 0x134) = 0;
    *(undefined1 *)(lVar1 + 0x1a0) = 0;
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    *(undefined8 *)(lVar1 + 0x140) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x1a8) = 0;
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
    *(undefined8 *)(lVar1 + 0x1b8) = 0;
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar2 = _CFDictionaryCreateMutable
                      (uVar3,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    *(undefined8 *)(lVar1 + 0x198) = 0;
    *(undefined1 *)(lVar1 + 0x1c0) = 0;
    _pthread_cond_init((pthread_cond_t *)(lVar1 + 0x208),(pthread_condattr_t *)0x0);
    uVar3 = _CFArrayCreateMutable(uVar3,0,0);
    *(undefined8 *)(lVar1 + 0x238) = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

