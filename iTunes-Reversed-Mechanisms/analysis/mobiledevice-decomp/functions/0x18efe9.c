// rea decompile_all
// name: _SharedBufferFlushToStream
// address: 0x18efe9
// body: available
// range: 0x18efe9-0x18f27c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _SharedBufferFlushToStream(uint *param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = -1;
  if ((param_2 != 0) && (param_1[100] == 0)) {
    if (param_1[99] == 0) {
      ppVar1 = (pthread_mutex_t *)(param_1 + 4);
      lVar10 = 0;
      do {
        uVar4 = param_1[0x61];
        if (3 < uVar4) {
          iVar3 = _pthread_mutex_lock(ppVar1);
          if (iVar3 == 0) {
            while (*param_1 == 0) {
              iVar3 = _pthread_cond_wait((pthread_cond_t *)(param_1 + 0x14),ppVar1);
              if (iVar3 != 0) {
                pcVar8 = "SharedArrayPop: pthread_cond_wait failed\n";
                uVar7 = 0x5e;
                goto LAB_0018f18a;
              }
            }
            uVar4 = *param_1 - 1;
            *param_1 = uVar4;
            uVar4 = *(uint *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 4);
            iVar3 = _pthread_mutex_unlock(ppVar1);
            if (iVar3 == 0) {
              if (uVar4 == 0xfffffffe) {
                LOCK();
                if (param_1[99] == 0) {
                  param_1[99] = 1;
                }
                UNLOCK();
                return lVar10;
              }
              if (3 < uVar4) goto LAB_0018f1bc;
              param_1[0x61] = uVar4;
              goto LAB_0018f0df;
            }
            pcVar8 = "SharedArrayPop: pthread_mutex_unlock failed\n";
            uVar7 = 0x62;
          }
          else {
            pcVar8 = "SharedArrayPop: pthread_mutex_lock failed\n";
            uVar7 = 0x5b;
          }
LAB_0018f18a:
          _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                          ,"SharedArrayPop",uVar7,0,pcVar8);
          pcVar8 = "SharedBufferFlushToStream";
          pcVar9 = "SharedArrayDequeue";
          uVar7 = 0x1c0;
LAB_0018f1ad:
          _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedBuffer.c"
                        ,pcVar8,uVar7,0x49,0,pcVar9);
LAB_0018f1bc:
          _SharedBufferAbort(param_1);
          return -1;
        }
LAB_0018f0df:
        uVar11 = (ulong)uVar4;
        uVar6 = *(long *)(param_1 + uVar11 * 8 + 0x46) - *(long *)(param_1 + uVar11 * 8 + 0x44);
        if (param_2 <= uVar6) {
          uVar6 = param_2;
        }
        lVar5 = (*param_3)(param_4,*(long *)(param_1 + uVar11 * 8 + 0x44) +
                                   *(long *)(param_1 + uVar11 * 8 + 0x40),uVar6);
        if (lVar5 < 1) {
          _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedBuffer.c"
                        ,"SharedBufferFlushToStream",0x1d5,0x49,0,"stream write");
          goto LAB_0018f1bc;
        }
        lVar2 = *(long *)(param_1 + uVar11 * 8 + 0x44);
        *(long *)(param_1 + uVar11 * 8 + 0x44) = lVar2 + lVar5;
        if (((lVar2 + lVar5 == *(long *)(param_1 + uVar11 * 8 + 0x46)) &&
            (uVar4 = param_1[0x61], param_1[0x61] = 0xffffffff, uVar4 < 4)) &&
           (iVar3 = _SharedArrayPush(param_1 + 0x20), iVar3 < 0)) {
          pcVar8 = "currentReadBufferEmpty";
          pcVar9 = "SharedArrayPush";
          uVar7 = 0x151;
          goto LAB_0018f1ad;
        }
        lVar10 = lVar10 + lVar5;
        param_2 = param_2 - lVar5;
      } while (param_2 != 0);
    }
    else {
      lVar10 = 0;
    }
  }
  return lVar10;
}

