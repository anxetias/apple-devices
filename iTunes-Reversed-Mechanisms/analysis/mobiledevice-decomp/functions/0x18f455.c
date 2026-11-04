// rea decompile_all
// name: _ThreadPipelineCreate
// address: 0x18f455
// body: available
// range: 0x18f455-0x18f93f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * _ThreadPipelineCreate
                 (uint param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  long local_38;
  
  puVar3 = _calloc(1,0x1a8);
  if (puVar3 == (uint *)0x0) {
    piVar5 = ___error();
    iVar2 = *piVar5;
    uVar7 = 0xac;
  }
  else {
    *puVar3 = param_1;
    pvVar4 = _calloc((ulong)param_1,0x198);
    *(void **)(puVar3 + 2) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      piVar5 = ___error();
      iVar2 = *piVar5;
      uVar7 = 0xb1;
    }
    else {
      pvVar4 = _calloc(1,0x20);
      *(void **)(puVar3 + 4) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        puVar3[10] = 0;
        puVar3[0xb] = *puVar3;
        pvVar4 = _calloc((ulong)*puVar3,4);
        *(void **)(puVar3 + 0xc) = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pcVar9 = "SharedArrayInit: malloc failed\n";
          uVar7 = 0x37;
LAB_0018f5d9:
          _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                          ,"SharedArrayInit",uVar7,0,pcVar9);
          pcVar9 = "SharedArrayInit";
          uVar7 = 0xb4;
        }
        else {
          iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0xe),(pthread_mutexattr_t *)0x0);
          if (iVar2 != 0) {
            pcVar9 = "SharedArrayInit: pthread_mutex_init failed\n";
            uVar7 = 0x38;
            goto LAB_0018f5d9;
          }
          iVar2 = _pthread_cond_init((pthread_cond_t *)(puVar3 + 0x1e),(pthread_condattr_t *)0x0);
          if (iVar2 != 0) {
            pcVar9 = "SharedArrayInit: pthread_cond_init failed\n";
            uVar7 = 0x39;
            goto LAB_0018f5d9;
          }
          puVar3[0x2a] = 0;
          puVar3[0x2b] = *puVar3 + 1;
          pvVar4 = _calloc((ulong)(*puVar3 + 1),4);
          *(void **)(puVar3 + 0x2c) = pvVar4;
          if (pvVar4 == (void *)0x0) {
            pcVar9 = "SharedArrayInit: malloc failed\n";
            uVar7 = 0x37;
LAB_0018f6c7:
            _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                            ,"SharedArrayInit",uVar7,0,pcVar9);
            pcVar9 = "SharedArrayInit";
            uVar7 = 0xb6;
          }
          else {
            iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x2e),
                                        (pthread_mutexattr_t *)0x0);
            if (iVar2 != 0) {
              pcVar9 = "SharedArrayInit: pthread_mutex_init failed\n";
              uVar7 = 0x38;
              goto LAB_0018f6c7;
            }
            iVar2 = _pthread_cond_init((pthread_cond_t *)(puVar3 + 0x3e),(pthread_condattr_t *)0x0);
            if (iVar2 != 0) {
              pcVar9 = "SharedArrayInit: pthread_cond_init failed\n";
              uVar7 = 0x39;
              goto LAB_0018f6c7;
            }
            puVar3[6] = 0xffffffff;
            puVar3[0x4a] = 0;
            iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x4c),
                                        (pthread_mutexattr_t *)0x0);
            if ((iVar2 == 0) &&
               (iVar2 = _pthread_cond_init((pthread_cond_t *)(puVar3 + 0x5c),
                                           (pthread_condattr_t *)0x0), iVar2 == 0)) {
              if (*puVar3 != 0) {
                local_38 = 0x160;
                uVar6 = 0;
                do {
                  lVar1 = *(long *)(puVar3 + 2);
                  lVar8 = lVar1 + local_38;
                  *(uint **)(lVar8 + -0x150) = puVar3;
                  *(int *)(lVar8 + -0x158) = (int)uVar6;
                  *(undefined8 *)(lVar8 + -0x148) = *(undefined8 *)(param_2 + uVar6 * 8);
                  *(undefined8 *)(lVar8 + -0x140) = param_3;
                  *(undefined4 *)(lVar8 + -0x138) = 0;
                  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(lVar8 + -0x130),
                                              (pthread_mutexattr_t *)0x0);
                  if ((iVar2 != 0) ||
                     (iVar2 = _pthread_cond_init((pthread_cond_t *)(lVar1 + local_38 + -0xf0),
                                                 (pthread_condattr_t *)0x0), iVar2 != 0)) {
                    pcVar9 = "SemInit";
                    uVar7 = 0xc2;
                    goto LAB_0018f5fc;
                  }
                  *(undefined4 *)(lVar1 + local_38 + -0xc0) = 0;
                  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(lVar1 + local_38 + -0xb8),
                                              (pthread_mutexattr_t *)0x0);
                  if ((iVar2 != 0) ||
                     (iVar2 = _pthread_cond_init((pthread_cond_t *)(lVar1 + local_38 + -0x78),
                                                 (pthread_condattr_t *)0x0), iVar2 != 0)) {
                    pcVar9 = "SemInit";
                    uVar7 = 0xc3;
                    goto LAB_0018f5fc;
                  }
                  *(undefined4 *)(lVar1 + local_38 + -0x48) = 0;
                  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(lVar1 + local_38 + -0x40),
                                              (pthread_mutexattr_t *)0x0);
                  if ((iVar2 != 0) ||
                     (iVar2 = _pthread_cond_init((pthread_cond_t *)(lVar1 + local_38),
                                                 (pthread_condattr_t *)0x0), iVar2 != 0)) {
                    pcVar9 = "SemInit";
                    uVar7 = 0xc4;
                    goto LAB_0018f5fc;
                  }
                  lVar8 = lVar1 + local_38 + -0x160;
                  iVar2 = _createThread(lVar8,_threadPipelineWorkerThreadProc,lVar8,param_6);
                  if (iVar2 < 0) {
                    pcVar9 = "Thread creation";
                    uVar7 = 0xc5;
                    goto LAB_0018f5fc;
                  }
                  uVar6 = uVar6 + 1;
                  local_38 = local_38 + 0x198;
                } while (uVar6 < *puVar3);
              }
              lVar8 = *(long *)(puVar3 + 4);
              *(uint **)(lVar8 + 8) = puVar3;
              *(undefined8 *)(lVar8 + 0x10) = param_4;
              *(undefined8 *)(lVar8 + 0x18) = param_5;
              iVar2 = _createThread(lVar8,_threadPipelineConsumerThreadProc,lVar8,0);
              if (-1 < iVar2) {
                return puVar3;
              }
              pcVar9 = "Thread creation";
              uVar7 = 0xce;
            }
            else {
              pcVar9 = "SemInit";
              uVar7 = 0xb8;
            }
          }
        }
LAB_0018f5fc:
        iVar2 = 0;
        goto LAB_0018f604;
      }
      piVar5 = ___error();
      iVar2 = *piVar5;
      uVar7 = 0xb3;
    }
  }
  pcVar9 = "malloc";
LAB_0018f604:
  _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                ,"ThreadPipelineCreate",uVar7,0x57,iVar2,pcVar9);
  _ThreadPipelineDestroy(puVar3);
  return (uint *)0x0;
}

