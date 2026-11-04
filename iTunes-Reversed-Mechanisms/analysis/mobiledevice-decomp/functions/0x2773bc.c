// rea decompile_all
// name: _AMAuthInstallApImg3CopyRequestTag
// address: 0x2773bc
// body: available
// range: 0x2773bc-0x277527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApImg3CopyRequestTag(undefined8 param_1,long param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uStack_60;
  ulong local_58;
  undefined1 local_4d [5];
  ulong local_48;
  long *local_40;
  long local_38;
  
  local_38 = 0;
  uStack_60 = 1;
  if ((param_2 == 0) || (param_3 == (long *)0x0)) goto LAB_002774c7;
  uVar3 = _CFDataGetBytePtr(param_2);
  uVar4 = _CFDataGetLength(param_2);
  iVar2 = _image3InstantiateFromBuffer(&local_38,uVar3,uVar4,0);
  if (iVar2 == 0) {
    iVar2 = _image3GetTagSignedNumber(local_38,0x54595045,&local_48,0);
    if (iVar2 != 0) {
      pcVar5 = "%s: failed to get tag";
      goto LAB_002774f0;
    }
    local_58 = (ulong)((uint)local_48 >> 0x18 | ((uint)local_48 & 0xff0000) >> 8 |
                       ((uint)local_48 & 0xff00) << 8 | (uint)local_48 << 0x18);
    lVar6 = 8;
    local_48 = local_58;
    local_40 = param_3;
    do {
      cVar1 = _CFStringGetCString(*(undefined8 *)((long)&_kImgTypes + lVar6),local_4d,5,0x8000100);
      if ((cVar1 != '\0') && (iVar2 = _memcmp(&local_58,local_4d,5), iVar2 == 0)) {
        lVar6 = _CFRetain(*(undefined8 *)
                           (&_kAMAuthInstallApParameterApDisablePlatformOnlyCode + lVar6));
        *local_40 = lVar6;
        goto LAB_002774af;
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x1c8);
    lVar6 = *local_40;
LAB_002774af:
    uStack_60 = 0;
    if (lVar6 == 0) {
      _AMAuthInstallLog(3,"AMAuthInstallApImg3CopyRequestTag","failed to find entry for %@",0);
      uStack_60 = 8;
    }
  }
  else {
    pcVar5 = "%s: invalid image 3 object";
LAB_002774f0:
    _AMAuthInstallLog(3,"AMAuthInstallApImg3CopyRequestTag",pcVar5);
    uStack_60 = 9;
  }
  if (local_38 != 0) {
    _image3Discard(&local_38);
  }
LAB_002774c7:
  _SafeRelease(0);
  return uStack_60;
}

