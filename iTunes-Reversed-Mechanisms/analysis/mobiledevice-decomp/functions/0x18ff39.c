// rea decompile_all
// name: _ThreadPipelineDestroy
// address: 0x18ff39
// body: available
// range: 0x18ff39-0x1903ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ThreadPipelineDestroy(uint *param_1)

{
  undefined8 *puVar1;
  pthread_mutex_t *ppVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  pthread_mutex_t *ppVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  bool bVar15;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 2) == 0) {
    bVar4 = true;
  }
  else {
    if ((ulong)*param_1 == 0) {
      bVar4 = true;
    }
    else {
      lVar7 = 0;
      iVar12 = 0;
      do {
        iVar12 = (iVar12 + 1) - (uint)(*(long *)(*(long *)(param_1 + 2) + lVar7) == 0);
        lVar7 = lVar7 + 0x198;
      } while ((ulong)*param_1 * 0x198 - lVar7 != 0);
      bVar15 = false;
      if (iVar12 == 0) {
        bVar4 = true;
      }
      else {
        ppVar2 = (pthread_mutex_t *)(param_1 + 0xe);
        bVar4 = true;
        iVar9 = 0;
        do {
          iVar5 = _pthread_mutex_lock(ppVar2);
          if (iVar5 == 0) {
            do {
              if (param_1[10] != 0) {
                uVar6 = param_1[10] - 1;
                param_1[10] = uVar6;
                uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0xc) + (ulong)uVar6 * 4);
                iVar5 = _pthread_mutex_unlock(ppVar2);
                if (iVar5 == 0) goto LAB_0019005c;
                _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                                ,"SharedArrayPop",0x62,0,
                                "SharedArrayPop: pthread_mutex_unlock failed\n");
                goto LAB_00190030;
              }
              iVar5 = _pthread_cond_wait((pthread_cond_t *)(param_1 + 0x1e),ppVar2);
            } while (iVar5 == 0);
            uVar8 = 0x5e;
            pcVar10 = "SharedArrayPop: pthread_cond_wait failed\n";
          }
          else {
            uVar8 = 0x5b;
            pcVar10 = "SharedArrayPop: pthread_mutex_lock failed\n";
          }
          _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                          ,"SharedArrayPop",uVar8,0,pcVar10);
          uVar13 = 0xffffffff;
LAB_00190030:
          bVar4 = false;
          _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                        ,"ThreadPipelineDestroy",0xed,0x57,0,"SharedArrayPop");
LAB_0019005c:
          puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + uVar13 * 0x198);
          lVar7 = *(long *)(param_1 + 2) + uVar13 * 0x198;
          ppVar11 = (pthread_mutex_t *)(lVar7 + 0x30);
          *(undefined8 *)(lVar7 + 400) = 0xffffffffffffffff;
          iVar5 = _pthread_mutex_lock(ppVar11);
          if ((iVar5 != 0) ||
             (((iVar5 = *(int *)(puVar1 + 5), *(int *)(puVar1 + 5) = iVar5 + 1, iVar5 == 0 &&
               (iVar5 = _pthread_cond_broadcast((pthread_cond_t *)(puVar1 + 0xe)), iVar5 != 0)) ||
              (iVar5 = _pthread_mutex_unlock(ppVar11), iVar5 != 0)))) {
            bVar4 = false;
            _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                          ,"ThreadPipelineDestroy",0xf5,0x57,0,"SemRelease");
          }
          iVar5 = _joinThread(*puVar1);
          if (iVar5 < 0) {
            bVar4 = false;
            _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                          ,"ThreadPipelineDestroy",0xf6,0x57,0,"joinThread");
          }
          *puVar1 = 0;
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar12);
        bVar15 = *param_1 == 0;
      }
      if (!bVar15) {
        lVar7 = 0x160;
        uVar13 = 0;
        do {
          lVar3 = *(long *)(param_1 + 2);
          iVar12 = _pthread_mutex_destroy((pthread_mutex_t *)(lVar3 + lVar7 + -0x130));
          if (iVar12 == 0) {
            _pthread_cond_destroy((pthread_cond_t *)(lVar3 + lVar7 + -0xf0));
          }
          iVar12 = _pthread_mutex_destroy((pthread_mutex_t *)(lVar3 + lVar7 + -0xb8));
          if (iVar12 == 0) {
            _pthread_cond_destroy((pthread_cond_t *)(lVar3 + lVar7 + -0x78));
          }
          iVar12 = _pthread_mutex_destroy((pthread_mutex_t *)(lVar3 + lVar7 + -0x40));
          if (iVar12 == 0) {
            _pthread_cond_destroy((pthread_cond_t *)(lVar3 + lVar7));
          }
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 0x198;
        } while (uVar13 < *param_1);
      }
    }
    _free(*(void **)(param_1 + 2));
    param_1[2] = 0;
    param_1[3] = 0;
  }
  plVar14 = *(long **)(param_1 + 4);
  if (plVar14 != (long *)0x0) {
    if (*plVar14 != 0) {
      iVar12 = _SharedArrayEnqueue(param_1 + 0x2a,0xffffffff);
      if (iVar12 < 0) {
        bVar4 = false;
        _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                      ,"ThreadPipelineDestroy",0x110,0x57,0,"SharedArrayEnqueue");
      }
      iVar12 = _joinThread(*plVar14);
      if (iVar12 < 0) {
        bVar4 = false;
        _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                      ,"ThreadPipelineDestroy",0x111,0x57,0,"joinThread");
      }
      *plVar14 = 0;
      plVar14 = *(long **)(param_1 + 4);
    }
    _free(plVar14);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  iVar12 = _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xe));
  if ((iVar12 == 0) &&
     (iVar12 = _pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x1e)), iVar12 == 0)) {
    _free(*(void **)(param_1 + 0xc));
  }
  iVar12 = _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x2e));
  if ((iVar12 == 0) &&
     (iVar12 = _pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x3e)), iVar12 == 0)) {
    _free(*(void **)(param_1 + 0x2c));
  }
  iVar12 = _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x4c));
  if (iVar12 == 0) {
    _pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x5c));
  }
  if (0 < (int)param_1[0x68]) {
    bVar4 = false;
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                  ,"ThreadPipelineDestroy",0x11d,0x57,0,"Threads reported errors");
  }
  _free(param_1);
  return -(uint)!bVar4;
}

