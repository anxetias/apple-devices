// rea decompile_all
// name: _ThreadPipelineRunWorker
// address: 0x1904f0
// body: available
// range: 0x1904f0-0x1905e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ThreadPipelineRunWorker(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((ulong)uVar1 == 0xffffffff) {
    pcVar6 = "Missing call to GetWorker before RunWorker";
    uVar4 = 0x137;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    lVar7 = (ulong)uVar1 * 0x198;
    lVar5 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar2 + 1;
    *(long *)(lVar5 + 400 + lVar7) = lVar2;
    iVar3 = _SharedArrayEnqueue(param_1 + 0xa8);
    if (iVar3 < 0) {
      pcVar6 = "SharedArrayEnqueue failed";
      uVar4 = 0x144;
    }
    else {
      lVar5 = lVar5 + lVar7;
      iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x30));
      if ((iVar3 == 0) &&
         (((iVar3 = *(int *)(lVar5 + 0x28), *(int *)(lVar5 + 0x28) = iVar3 + 1, iVar3 != 0 ||
           (iVar3 = _pthread_cond_broadcast((pthread_cond_t *)(lVar5 + 0x70)), iVar3 == 0)) &&
          (iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x30)), iVar3 == 0)))) {
        return 0;
      }
      pcVar6 = "SemRelease failed";
      uVar4 = 0x145;
    }
  }
  _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/ThreadPipeline.c"
                ,"ThreadPipelineRunWorker",uVar4,0x57,0,pcVar6);
  return 0xffffffff;
}

