// rea decompile_all
// name: _compressionWorkerProc
// address: 0x1905e5
// body: available
// range: 0x1905e5-0x1907f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _compressionWorkerProc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  FILE *pFVar6;
  undefined8 uVar7;
  
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x70) != 0) {
    param_1[6] = -1;
    return 0;
  }
  lVar1 = param_1[2];
  param_1[6] = lVar1;
  if (lVar1 == -2) {
    return 0;
  }
  if (lVar1 == -1) {
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                  ,"compressionWorkerProc",0xf4,0x25,0,"NOP received");
    return 0;
  }
  if (lVar1 < 0) {
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                  ,"compressionWorkerProc",0xf6,0x25,0,"Invalid iBlock received");
LAB_001907d2:
    param_1[6] = -1;
    LOCK();
    if (*(int *)(lVar4 + 0x70) == 0) {
      *(int *)(lVar4 + 0x70) = 1;
    }
    UNLOCK();
    uVar7 = 0xffffffff;
  }
  else {
    if (*(int *)(lVar4 + 4) == 0) {
      uVar2 = (**(code **)(lVar4 + 0x60))
                        (param_1[5],*(undefined8 *)(lVar4 + 0x10),param_1[1],param_1[3]);
      uVar3 = param_1[3];
      if ((long)uVar2 < 0 || uVar3 <= uVar2) {
        _memcpy((void *)param_1[5],(void *)param_1[1],uVar3);
        uVar2 = param_1[3];
        uVar3 = uVar2;
      }
      param_1[7] = uVar2;
      param_1[8] = uVar3;
      if (*(int *)(lVar4 + 0x18) < 2) {
        return 0;
      }
      pFVar6 = *(FILE **)PTR____stderrp_004412c0;
      lVar4 = param_1[6];
      pcVar5 = "Worker: encode block %5lld: %7llu => %7llu\n";
    }
    else {
      if (param_1[3] == param_1[4]) {
        _memcpy((void *)param_1[5],(void *)param_1[1],param_1[3]);
        uVar3 = param_1[3];
        param_1[7] = uVar3;
        uVar2 = uVar3;
      }
      else {
        uVar2 = (**(code **)(lVar4 + 0x60))(param_1[5],param_1[4],param_1[1]);
        if (uVar2 != param_1[4] || (long)uVar2 < 0) {
          _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                        ,"compressionWorkerProc",0x124,0x25,0,
                        "invalid output size/decoder error: block=%lld, inSize=%lld, outSize=%lld, expectedOutSize=%lld"
                        ,param_1[6],param_1[3],uVar2,param_1[4]);
          goto LAB_001907d2;
        }
        param_1[7] = uVar2;
        uVar3 = param_1[3];
      }
      param_1[8] = uVar3;
      if (*(int *)(lVar4 + 0x18) < 2) {
        return 0;
      }
      pFVar6 = *(FILE **)PTR____stderrp_004412c0;
      lVar4 = param_1[6];
      pcVar5 = "Worker: decode block %5lld: %7llu => %7llu\n";
    }
    uVar7 = 0;
    _fprintf(pFVar6,pcVar5,lVar4,uVar3,uVar2);
  }
  return uVar7;
}

