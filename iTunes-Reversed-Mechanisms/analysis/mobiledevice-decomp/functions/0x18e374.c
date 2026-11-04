// rea decompile_all
// name: _joinThread
// address: 0x18e374
// body: available
// range: 0x18e374-0x18e4f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _joinThread(pthread_t param_1)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  ushort uVar4;
  int iVar5;
  pthread_key_t pVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  void **ppvVar10;
  uint uVar11;
  void *local_40;
  int *local_38;
  
  ppvVar10 = &local_40;
  local_40 = (void *)0x0;
  iVar5 = _pthread_join(param_1,ppvVar10);
  pvVar3 = local_40;
  if (iVar5 != 0) {
    _joinThread_cold_1();
    _updateThreadErrorContextErrorCode();
    uVar8 = _appendThreadErrorContextString(ppvVar10);
    return uVar8;
  }
  if (*(short *)((long)local_40 + 0x1c) == 1) {
    pVar6 = _getErrorContextKey();
    piVar7 = _pthread_getspecific(pVar6);
    uVar11 = 0;
    if (piVar7 != (int *)0x0) {
      iVar5 = *piVar7;
      if ((-1 < iVar5) && (iVar2 = *(int *)((long)pvVar3 + 0x18), iVar2 < 0)) {
        *piVar7 = iVar2;
        iVar5 = iVar2;
      }
      uVar4 = *(ushort *)((long)pvVar3 + 0x60);
      if (uVar4 != 0) {
        local_38 = piVar7 + 0x13;
        uVar8 = 0;
        uVar11 = 0;
        do {
          uVar1 = *(ushort *)((long)pvVar3 + (uVar8 & 0xffff) + 100);
          if ((uVar1 == 0) || (uVar11 = uVar11 + uVar1, uVar4 < uVar11)) {
            uVar11 = 0;
            goto LAB_0018e48d;
          }
          if ((uint)*(ushort *)((long)piVar7 + 0x4a) <
              (uint)*(ushort *)(piVar7 + 0x12) + (uint)uVar1) break;
          _memcpy((void *)((ulong)*(ushort *)(piVar7 + 0x12) + (long)local_38),
                  (void *)((long)pvVar3 + (uVar8 & 0xffff) + 100),(ulong)uVar1);
          *(ushort *)(piVar7 + 0x12) = (short)piVar7[0x12] + uVar1;
          uVar4 = *(ushort *)((long)pvVar3 + 0x60);
          uVar8 = (ulong)uVar11;
        } while ((ushort)uVar11 < uVar4);
        iVar5 = *piVar7;
      }
      uVar11 = 0;
      if (iVar5 == 0) {
        if (*(short *)((long)pvVar3 + 0x1e) != 0) {
          uVar8 = (ulong)*(ushort *)((long)piVar7 + 6);
          uVar11 = 0;
          uVar9 = 0;
          do {
            if (0xf < uVar8) break;
            piVar7[uVar8 + 2] = *(int *)((long)pvVar3 + uVar9 * 4 + 0x20);
            uVar8 = uVar8 + 1;
            *(short *)((long)piVar7 + 6) = (short)uVar8;
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)((long)pvVar3 + 0x1e));
        }
      }
      else {
        *(undefined2 *)((long)piVar7 + 6) = 0;
      }
    }
  }
  else {
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/Threads.c"
                  ,"joinThread",0x273,5,0,"expected ref_count=1 for terminating thread");
    uVar11 = 0xffffffff;
  }
LAB_0018e48d:
  if (*(void **)((long)pvVar3 + 0x10) != (void *)0x0) {
    __Block_release(*(void **)((long)pvVar3 + 0x10));
  }
  _free(pvVar3);
  return (ulong)uVar11;
}

