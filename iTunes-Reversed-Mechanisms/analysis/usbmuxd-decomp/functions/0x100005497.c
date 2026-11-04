// rea decompile_all
// name: FUN_100005497
// address: 0x100005497
// body: available
// range: 0x100005497-0x1000055bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100005497(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x88) + 0x20);
  uVar4 = 0;
  lVar3 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                     PTR__kCFTypeDictionaryValueCallBacks_10001c060);
  if (lVar3 == 0) {
    iVar2 = 0xc;
  }
  else {
    _CFDictionaryAddValue(lVar3,PTR_cf_MessageType_100021110,PTR_cf_Result_100021128);
    FUN_100002da3(lVar3,PTR_cf_Number_100021190,param_2);
    iVar2 = FUN_100002e00(param_1,*(undefined4 *)(lVar1 + 0xc),lVar3);
    _CFRelease(lVar3);
  }
  FUN_100000b8b("ClientResult",0xc0f,*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (iVar2 != 0) {
    if (2 < DAT_100021030) {
      uVar4 = FUN_10000302f(param_1);
      pcVar5 = _strerror(iVar2);
      FUN_1000008d2(3,0,&cf__sfailedtosendresulttoclient_s__d__s,"ClientResult",uVar4,iVar2,pcVar5);
    }
    FUN_100003084(param_1);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

