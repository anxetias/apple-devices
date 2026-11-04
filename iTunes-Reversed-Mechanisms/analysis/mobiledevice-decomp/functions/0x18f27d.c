// rea decompile_all
// name: _SharedArrayEnqueue
// address: 0x18f27d
// body: available
// range: 0x18f27d-0x18f38e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SharedArrayEnqueue(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  if (iVar3 == 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar4 = uVar1;
    if (uVar1 < uVar2) {
      if (uVar1 != 0) {
        _memmove((void *)((long)*(void **)(param_1 + 2) + 4),*(void **)(param_1 + 2),
                 (ulong)uVar1 * 4);
      }
      **(undefined4 **)(param_1 + 2) = param_2;
      uVar4 = *param_1;
    }
    *param_1 = uVar4 + 1;
    if ((uVar4 == 0) &&
       (iVar3 = _pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x14)), iVar3 != 0)) {
      pcVar6 = "SharedArrayPush: pthread_cond_broadcast failed\n";
      uVar5 = 0xa6;
    }
    else {
      iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 4));
      if (iVar3 == 0) {
        if (uVar1 < uVar2) {
          return 0;
        }
        pcVar6 = "SharedArrayPush: stack is full\n";
        uVar5 = 0xa9;
      }
      else {
        pcVar6 = "SharedArrayPush: pthread_mutex_unlock failed\n";
        uVar5 = 0xa8;
      }
    }
  }
  else {
    pcVar6 = "SharedArrayPush: pthread_mutex_lock failed\n";
    uVar5 = 0x9d;
  }
  _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                  ,"SharedArrayEnqueue",uVar5,0,pcVar6);
  return 0xffffffff;
}

