// rea decompile_all
// name: _SharedBufferFillFromStream
// address: 0x18ec00
// body: available
// range: 0x18ec00-0x18ee7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _SharedBufferFillFromStream(long param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  pthread_mutex_t *ppVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 400) == 0)) {
    if (*(int *)(param_1 + 0x188) == 0) {
      ppVar1 = (pthread_mutex_t *)(param_1 + 0x90);
      lVar11 = 0;
      do {
        uVar8 = (ulong)*(uint *)(param_1 + 0x180);
        if (3 < uVar8) {
          iVar4 = _pthread_mutex_lock(ppVar1);
          if (iVar4 == 0) {
            while (*(int *)(param_1 + 0x80) == 0) {
              iVar4 = _pthread_cond_wait((pthread_cond_t *)(param_1 + 0xd0),ppVar1);
              if (iVar4 != 0) {
                pcVar9 = "SharedArrayPop: pthread_cond_wait failed\n";
                uVar7 = 0x5e;
                goto LAB_0018edb5;
              }
            }
            uVar5 = *(int *)(param_1 + 0x80) - 1;
            *(uint *)(param_1 + 0x80) = uVar5;
            uVar5 = *(uint *)(*(long *)(param_1 + 0x88) + (ulong)uVar5 * 4);
            uVar8 = (ulong)uVar5;
            iVar4 = _pthread_mutex_unlock(ppVar1);
            if (iVar4 == 0) {
              if (uVar5 < 4) {
                *(uint *)(param_1 + 0x180) = uVar5;
                puVar2 = (undefined8 *)(param_1 + 0x110 + uVar8 * 0x20);
                *puVar2 = 0;
                puVar2[1] = 0;
                lVar6 = 0;
                goto LAB_0018ed35;
              }
              goto LAB_0018ede7;
            }
            pcVar9 = "SharedArrayPop: pthread_mutex_unlock failed\n";
            uVar7 = 0x62;
          }
          else {
            pcVar9 = "SharedArrayPop: pthread_mutex_lock failed\n";
            uVar7 = 0x5b;
          }
LAB_0018edb5:
          _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                          ,"SharedArrayPop",uVar7,0,pcVar9);
          pcVar9 = "SharedArrayPop";
          uVar7 = 0x17a;
          goto LAB_0018edd8;
        }
        lVar6 = *(long *)(param_1 + 0x118 + uVar8 * 0x20);
LAB_0018ed35:
        lVar10 = uVar8 * 0x20;
        lVar3 = param_1 + 0x100 + lVar10;
        uVar8 = *(long *)(param_1 + 0x108 + lVar10) - lVar6;
        if (param_2 <= uVar8) {
          uVar8 = param_2;
        }
        lVar6 = (*param_3)(param_4,lVar6 + *(long *)(param_1 + 0x100 + lVar10),uVar8);
        if (lVar6 < 0) {
          pcVar9 = "stream read";
          uVar7 = 0x189;
          goto LAB_0018edd8;
        }
        if (lVar6 == 0) {
          iVar4 = _sendEOF(param_1);
          if (iVar4 < 0) goto LAB_0018ede7;
          break;
        }
        lVar10 = *(long *)(lVar3 + 0x18) + lVar6;
        *(long *)(lVar3 + 0x18) = lVar10;
        if ((lVar10 == *(long *)(lVar3 + 8)) &&
           (iVar4 = _currentWriteBufferFull(param_1), iVar4 < 0)) goto LAB_0018ede7;
        lVar11 = lVar11 + lVar6;
        param_2 = param_2 - lVar6;
      } while (param_2 != 0);
      iVar4 = _currentWriteBufferFull(param_1);
      if (-1 < iVar4) {
        return lVar11;
      }
    }
    else {
      pcVar9 = "write after EOF";
      uVar7 = 0x16d;
LAB_0018edd8:
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedBuffer.c"
                    ,"SharedBufferFillFromStream",uVar7,0x49,0,pcVar9);
    }
LAB_0018ede7:
    _SharedBufferAbort(param_1);
  }
  return -1;
}

