// rea decompile_all
// name: _IDecoderStreamCreate
// address: 0x191794
// body: available
// range: 0x191794-0x1918e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
_IDecoderStreamCreate
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  puVar2 = _malloc(0x48);
  if (puVar2 == (undefined8 *)0x0) {
    piVar4 = ___error();
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/IOCompressedStreams.c"
                  ,"IDecoderStreamCreate",0x6b,0x27,*piVar4,"malloc");
  }
  else {
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    lVar3 = _SharedBufferCreate(param_4);
    puVar2[8] = lVar3;
    if (lVar3 == 0) {
      pcVar6 = "fail to init buffer";
      uVar5 = 0x70;
      iVar1 = 0;
    }
    else {
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)((long)puVar2 + 4) = param_5;
      puVar2[1] = param_1;
      puVar2[2] = param_2;
      puVar2[3] = param_3;
      puVar2[4] = _SharedBufferWrite;
      puVar2[5] = _SharedBufferAbort;
      puVar2[6] = lVar3;
      iVar1 = _createThread(puVar2 + 7,_IDecoderStreamThreadProc,puVar2,0);
      if (iVar1 == 0) {
        return puVar2;
      }
      piVar4 = ___error();
      iVar1 = *piVar4;
      pcVar6 = "failed to start decoder thread";
      uVar5 = 0x7d;
    }
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/IOCompressedStreams.c"
                  ,"IDecoderStreamCreate",uVar5,0x27,iVar1,pcVar6);
    _IDecoderStreamDestroy(puVar2);
  }
  return (undefined8 *)0x0;
}

