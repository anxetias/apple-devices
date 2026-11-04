// rea decompile_all
// name: _ThreadPipelineGetWorker
// address: 0x1903cf
// body: available
// range: 0x1903cf-0x1904ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ThreadPipelineGetWorker(long param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    ppVar1 = (pthread_mutex_t *)(param_1 + 0x38);
    iVar2 = _pthread_mutex_lock(ppVar1);
    if (iVar2 == 0) {
      do {
        if (*(int *)(param_1 + 0x28) != 0) {
          uVar3 = *(int *)(param_1 + 0x28) - 1;
          *(uint *)(param_1 + 0x28) = uVar3;
          uVar3 = *(uint *)(*(long *)(param_1 + 0x30) + (ulong)uVar3 * 4);
          iVar2 = _pthread_mutex_unlock(ppVar1);
          if (iVar2 == 0) {
            *(uint *)(param_1 + 0x18) = uVar3;
            return *(undefined8 *)(*(long *)(param_1 + 8) + 0x18 + (ulong)uVar3 * 0x198);
          }
          pcVar5 = "SharedArrayPop: pthread_mutex_unlock failed\n";
          uVar4 = 0x62;
          goto LAB_00190498;
        }
        iVar2 = _pthread_cond_wait((pthread_cond_t *)(param_1 + 0x78),ppVar1);
      } while (iVar2 == 0);
      pcVar5 = "SharedArrayPop: pthread_cond_wait failed\n";
      uVar4 = 0x5e;
    }
    else {
      pcVar5 = "SharedArrayPop: pthread_mutex_lock failed\n";
      uVar4 = 0x5b;
    }
LAB_00190498:
    _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                    ,"SharedArrayPop",uVar4,0,pcVar5);
    pcVar5 = "SharedArrayPop failed";
    uVar4 = 0x12a;
  }
  else {
    pcVar5 = "Missing call to RunWorker before GetWorker";
    uVar4 = 0x126;
  }
  _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                ,"ThreadPipelineGetWorker",uVar4,0x57,0,pcVar5);
  return 0;
}

