// rea decompile_all
// name: _SharedBufferCreate
// address: 0x18e72d
// body: available
// range: 0x18e72d-0x18ea9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _SharedBufferCreate(ulong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  if (param_1 - 0x100000000 < 0xffffffff00000001) {
    pcVar7 = "SharedBuffer invalid capacity: %zu";
    uVar6 = 0xf7;
  }
  else {
    uVar1 = _getpagesize();
    if (0x197 < uVar1) {
      uVar8 = (ulong)(int)uVar1;
      uVar12 = 1;
      if (uVar8 <= param_1 >> 2) {
        uVar12 = (param_1 >> 2) / uVar8;
      }
      lVar10 = uVar12 * uVar8;
      puVar3 = _valloc(uVar8 + lVar10 * 4);
      if (puVar3 != (undefined8 *)0x0) {
        ___bzero(puVar3,0x198);
        puVar3[0x30] = 0xffffffffffffffff;
        LOCK();
        *(undefined4 *)((long)puVar3 + 0x194) = 2;
        UNLOCK();
        *puVar3 = 0x600000000;
        pvVar4 = _calloc(6,4);
        puVar3[1] = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pcVar7 = "SharedArrayInit: malloc failed\n";
          uVar6 = 0x37;
        }
        else {
          iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 2),(pthread_mutexattr_t *)0x0);
          if (iVar2 == 0) {
            iVar2 = _pthread_cond_init((pthread_cond_t *)(puVar3 + 10),(pthread_condattr_t *)0x0);
            if (iVar2 == 0) {
              puVar3[0x10] = 0x600000000;
              pvVar4 = _calloc(6,4);
              puVar3[0x11] = pvVar4;
              if (pvVar4 == (void *)0x0) {
                pcVar7 = "SharedArrayInit: malloc failed\n";
                uVar6 = 0x37;
              }
              else {
                iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x12),
                                            (pthread_mutexattr_t *)0x0);
                if (iVar2 == 0) {
                  iVar2 = _pthread_cond_init((pthread_cond_t *)(puVar3 + 0x1a),
                                             (pthread_condattr_t *)0x0);
                  if (iVar2 == 0) {
                    lVar9 = uVar8 + (long)puVar3;
                    puVar11 = puVar3 + 0x22;
                    uVar12 = 0;
                    while( true ) {
                      puVar11[-1] = lVar10;
                      *puVar11 = 0;
                      puVar11[1] = 0;
                      puVar11[-2] = lVar9;
                      iVar2 = _SharedArrayPush(puVar3 + 0x10,uVar12 & 0xffffffff);
                      if (iVar2 < 0) break;
                      lVar9 = lVar9 + lVar10;
                      uVar12 = uVar12 + 1;
                      puVar11 = puVar11 + 4;
                      if (uVar12 == 4) {
                        return puVar3;
                      }
                    }
                    pcVar7 = "SharedArrayPush";
                    uVar6 = 0x11b;
                    goto LAB_0018e900;
                  }
                  pcVar7 = "SharedArrayInit: pthread_cond_init failed\n";
                  uVar6 = 0x39;
                }
                else {
                  pcVar7 = "SharedArrayInit: pthread_mutex_init failed\n";
                  uVar6 = 0x38;
                }
              }
              _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                              ,"SharedArrayInit",uVar6,0,pcVar7);
              pcVar7 = "SharedArrayInit";
              uVar6 = 0x10e;
              goto LAB_0018e900;
            }
            pcVar7 = "SharedArrayInit: pthread_cond_init failed\n";
            uVar6 = 0x39;
          }
          else {
            pcVar7 = "SharedArrayInit: pthread_mutex_init failed\n";
            uVar6 = 0x38;
          }
        }
        _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedArray.h"
                        ,"SharedArrayInit",uVar6,0,pcVar7);
        pcVar7 = "SharedArrayInit";
        uVar6 = 0x10d;
LAB_0018e900:
        _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedBuffer.c"
                      ,"SharedBufferCreate",uVar6,0x49,0,pcVar7);
        iVar2 = _pthread_mutex_destroy((pthread_mutex_t *)(puVar3 + 2));
        if ((iVar2 == 0) &&
           (iVar2 = _pthread_cond_destroy((pthread_cond_t *)(puVar3 + 10)), iVar2 == 0)) {
          _free((void *)puVar3[1]);
        }
        iVar2 = _pthread_mutex_destroy((pthread_mutex_t *)(puVar3 + 0x12));
        if ((iVar2 == 0) &&
           (iVar2 = _pthread_cond_destroy((pthread_cond_t *)(puVar3 + 0x1a)), iVar2 == 0)) {
          _free((void *)puVar3[0x11]);
        }
        _free(puVar3);
        return (undefined8 *)0x0;
      }
      piVar5 = ___error();
      iVar2 = *piVar5;
      pcVar7 = "malloc";
      uVar6 = 0x106;
      goto LAB_0018e7a9;
    }
    pcVar7 = "Incompatible page size";
    uVar6 = 0xfc;
  }
  iVar2 = 0;
LAB_0018e7a9:
  _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/SharedBuffer.c"
                ,"SharedBufferCreate",uVar6,0x49,iVar2,pcVar7);
  return (undefined8 *)0x0;
}

