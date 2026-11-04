// rea decompile_all
// name: _threadPipelineWorkerThreadProc
// address: 0x18f940
// body: available
// range: 0x18f940-0x18fc35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _threadPipelineWorkerThreadProc(long param_1)

{
  pthread_mutex_t *ppVar1;
  pthread_mutex_t *ppVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  char *pcVar10;
  
  lVar6 = *(long *)(param_1 + 0x10);
  ppVar1 = (pthread_mutex_t *)(param_1 + 0x30);
  ppVar2 = (pthread_mutex_t *)(param_1 + 0x120);
  do {
    uVar3 = *(undefined4 *)(param_1 + 8);
    iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x38));
    if (iVar7 != 0) {
      pcVar10 = "SharedArrayPush: pthread_mutex_lock failed\n";
      uVar9 = 0x75;
LAB_0018fc0e:
      _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                      ,"SharedArrayPush",uVar9,0,pcVar10);
      pcVar10 = "SharedArrayPush";
      uVar9 = 0x45;
      goto LAB_0018fb58;
    }
    uVar4 = *(uint *)(lVar6 + 0x28);
    uVar5 = *(uint *)(lVar6 + 0x2c);
    uVar8 = uVar4;
    if (uVar4 < uVar5) {
      *(undefined4 *)(*(long *)(lVar6 + 0x30) + (ulong)uVar4 * 4) = uVar3;
      uVar8 = *(uint *)(lVar6 + 0x28);
    }
    *(uint *)(lVar6 + 0x28) = uVar8 + 1;
    if ((uVar8 == 0) &&
       (iVar7 = _pthread_cond_broadcast((pthread_cond_t *)(lVar6 + 0x78)), iVar7 != 0)) {
      pcVar10 = "SharedArrayPush: pthread_cond_broadcast failed\n";
      uVar9 = 0x7a;
      goto LAB_0018fc0e;
    }
    iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x38));
    if (iVar7 != 0) {
      pcVar10 = "SharedArrayPush: pthread_mutex_unlock failed\n";
      uVar9 = 0x7c;
      goto LAB_0018fc0e;
    }
    if (uVar5 <= uVar4) {
      pcVar10 = "SharedArrayPush: stack is full\n";
      uVar9 = 0x7d;
      goto LAB_0018fc0e;
    }
    iVar7 = _pthread_mutex_lock(ppVar1);
    while( true ) {
      if (iVar7 != 0) goto LAB_0018fb3e;
      if (0 < *(int *)(param_1 + 0x28)) break;
      iVar7 = _pthread_cond_wait((pthread_cond_t *)(param_1 + 0x70),ppVar1);
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    iVar7 = _pthread_mutex_unlock(ppVar1);
    if (iVar7 != 0) {
LAB_0018fb3e:
      pcVar10 = "SemAcquire";
      uVar9 = 0x48;
      goto LAB_0018fb58;
    }
    if (*(long *)(param_1 + 400) < 0) {
      return param_1;
    }
    iVar7 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
    if (iVar7 < 0) {
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                    ,"threadPipelineWorkerThreadProc",0x52,0x57,0,"worker proc reported an error");
      LOCK();
      *(int *)(lVar6 + 0x1a0) = *(int *)(lVar6 + 0x1a0) + 1;
      UNLOCK();
    }
    iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa8));
    if ((iVar7 != 0) ||
       (((iVar7 = *(int *)(param_1 + 0xa0), *(int *)(param_1 + 0xa0) = iVar7 + 1, iVar7 == 0 &&
         (iVar7 = _pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0xe8)), iVar7 != 0)) ||
        (iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa8)), iVar7 != 0)))) {
      pcVar10 = "SemRelease";
      uVar9 = 0x55;
      goto LAB_0018fb58;
    }
    iVar7 = _pthread_mutex_lock(ppVar2);
    while( true ) {
      if (iVar7 != 0) goto LAB_0018fb22;
      if (0 < *(int *)(param_1 + 0x118)) break;
      iVar7 = _pthread_cond_wait((pthread_cond_t *)(param_1 + 0x160),ppVar2);
    }
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + -1;
    iVar7 = _pthread_mutex_unlock(ppVar2);
  } while (iVar7 == 0);
LAB_0018fb22:
  pcVar10 = "SemAcquire";
  uVar9 = 0x58;
LAB_0018fb58:
  _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                ,"threadPipelineWorkerThreadProc",uVar9,0x57,0,pcVar10);
  LOCK();
  *(int *)(lVar6 + 0x1a0) = *(int *)(lVar6 + 0x1a0) + 1;
  UNLOCK();
  return param_1;
}

