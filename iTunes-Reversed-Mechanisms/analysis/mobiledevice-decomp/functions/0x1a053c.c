// rea decompile_all
// name: _AMAuthInstallApImg3CreatePersonalizedData
// address: 0x1a053c
// body: available
// range: 0x1a053c-0x1a063c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallApImg3CreatePersonalizedData
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_40 = _AMAuthInstallSupportCopyAllocator();
  uVar4 = _CFDataGetBytePtr(param_2);
  uVar1 = _CFDataGetLength(param_2);
  uVar5 = _CFDataGetBytePtr(param_4);
  uVar6 = _CFDataGetBytePtr(param_3);
  uVar2 = _CFDataGetLength(param_3);
  iVar3 = _tss_stitch_img3(uVar4,uVar1,uVar5,uVar6,uVar2,&local_48,&local_34);
  if (iVar3 == 0) {
    uVar5 = _CFGetAllocator(param_1);
    uVar4 = local_40;
    lVar7 = _CFDataCreateWithBytesNoCopy(uVar5,local_48,local_34,local_40);
    if (lVar7 == 0) {
      _free(local_48);
      uVar5 = 2;
      lVar7 = 0;
    }
    else {
      uVar5 = _CFRetain(lVar7);
      *param_5 = uVar5;
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 9;
    lVar7 = 0;
    uVar4 = local_40;
  }
  _SafeRelease(lVar7);
  _SafeRelease(uVar4);
  return uVar5;
}

