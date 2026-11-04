// rea decompile_all
// name: _threadPipelineConsumerThreadProc
// address: 0x18fc36
// body: available
// range: 0x18fc36-0x18ff38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _threadPipelineConsumerThreadProc(long param_1)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  pthread_mutex_t *ppVar9;
  
  lVar2 = *(long *)(param_1 + 8);
  ppVar1 = (pthread_mutex_t *)(lVar2 + 0xb8);
  iVar3 = _pthread_mutex_lock(ppVar1);
  if (iVar3 == 0) {
    do {
      while (*(int *)(lVar2 + 0xa8) != 0) {
        uVar4 = *(int *)(lVar2 + 0xa8) - 1;
        *(uint *)(lVar2 + 0xa8) = uVar4;
        uVar4 = *(uint *)(*(long *)(lVar2 + 0xb0) + (ulong)uVar4 * 4);
        iVar3 = _pthread_mutex_unlock(ppVar1);
        if (iVar3 != 0) {
          pcVar6 = "SharedArrayPop: pthread_mutex_unlock failed\n";
          uVar5 = 0x62;
          goto LAB_0018fc7b;
        }
        if ((ulong)uVar4 != 0xfffffffe) {
          if (uVar4 == 0xffffffff) {
            return param_1;
          }
          lVar8 = *(long *)(lVar2 + 8);
          lVar7 = (ulong)uVar4 * 0x198;
          ppVar9 = (pthread_mutex_t *)(lVar7 + lVar8 + 0xa8);
          iVar3 = _pthread_mutex_lock(ppVar9);
          if (iVar3 == 0) {
            lVar8 = lVar8 + lVar7;
            while (*(int *)(lVar8 + 0xa0) < 1) {
              iVar3 = _pthread_cond_wait((pthread_cond_t *)(lVar8 + 0xe8),ppVar9);
              if (iVar3 != 0) goto LAB_0018fe97;
            }
            *(int *)(lVar8 + 0xa0) = *(int *)(lVar8 + 0xa0) + -1;
            iVar3 = _pthread_mutex_unlock(ppVar9);
            if (iVar3 == 0) {
              iVar3 = (**(code **)(param_1 + 0x18))
                                (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar8 + 0x18));
              if (iVar3 < 0) {
                _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                              ,"threadPipelineConsumerThreadProc",0x8d,0x57,0,
                              "consumer proc reported an error");
                LOCK();
                *(int *)(lVar2 + 0x1a0) = *(int *)(lVar2 + 0x1a0) + 1;
                UNLOCK();
              }
              iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x120));
              if ((iVar3 == 0) &&
                 (((iVar3 = *(int *)(lVar8 + 0x118), *(int *)(lVar8 + 0x118) = iVar3 + 1, iVar3 != 0
                   || (iVar3 = _pthread_cond_broadcast((pthread_cond_t *)(lVar8 + 0x160)),
                      iVar3 == 0)) &&
                  (iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x120)), iVar3 == 0))))
              goto LAB_0018fe70;
              pcVar6 = "SemRelease";
              uVar5 = 0x90;
              goto LAB_0018fc9e;
            }
          }
LAB_0018fe97:
          _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                        ,"threadPipelineConsumerThreadProc",0x86,0x57,0,"SemAcquire");
          goto LAB_0018fec3;
        }
        iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x130));
        if ((iVar3 == 0) &&
           ((iVar3 = *(int *)(lVar2 + 0x128), *(int *)(lVar2 + 0x128) = iVar3 + 1, iVar3 != 0 ||
            (iVar3 = _pthread_cond_broadcast((pthread_cond_t *)(lVar2 + 0x170)), iVar3 == 0)))) {
          _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x130));
        }
LAB_0018fe70:
        iVar3 = _pthread_mutex_lock(ppVar1);
        if (iVar3 != 0) goto LAB_0018fc61;
      }
      iVar3 = _pthread_cond_wait((pthread_cond_t *)(lVar2 + 0xf8),ppVar1);
    } while (iVar3 == 0);
    pcVar6 = "SharedArrayPop: pthread_cond_wait failed\n";
    uVar5 = 0x5e;
  }
  else {
LAB_0018fc61:
    pcVar6 = "SharedArrayPop: pthread_mutex_lock failed\n";
    uVar5 = 0x5b;
  }
LAB_0018fc7b:
  _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                  ,"SharedArrayPop",uVar5,0,pcVar6);
  pcVar6 = "SharedArrayDequeue";
  uVar5 = 0x72;
LAB_0018fc9e:
  _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                ,"threadPipelineConsumerThreadProc",uVar5,0x57,0,pcVar6);
LAB_0018fec3:
  LOCK();
  *(int *)(lVar2 + 0x1a0) = *(int *)(lVar2 + 0x1a0) + 1;
  UNLOCK();
  return param_1;
}

