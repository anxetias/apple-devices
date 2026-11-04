// rea decompile_all
// name: _AMAuthInstallApImg3CopyBuildString
// address: 0x1a0725
// body: available
// range: 0x1a0725-0x1a08ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg3CopyBuildString(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  long lVar8;
  undefined8 local_40;
  long local_38;
  char *local_30;
  
  local_38 = 0;
  local_40 = 0;
  local_30 = (char *)0x0;
  iVar1 = _AMAuthInstallSupportCreateDataFromFileURL(param_1,&local_40,param_2);
  if (iVar1 == 0) {
    uVar3 = _CFDataGetBytePtr(local_40);
    uVar4 = _CFDataGetLength(local_40);
    iVar2 = _image3InstantiateFromBuffer(&local_38,uVar3,uVar4,0);
    iVar1 = 9;
    if (iVar2 == 0) {
      iVar2 = _image3GetTagString(local_38,0x56455253,&local_30,0);
      pcVar7 = local_30;
      if (iVar2 == 0) {
        pcVar5 = _strchr(local_30,0x7e);
        if (pcVar5 != (char *)0x0) {
LAB_001a080c:
          lVar8 = _CFStringCreateWithCString(param_1,pcVar7,0x8000100);
          *param_3 = lVar8;
          iVar1 = 0;
          if (lVar8 != 0) goto LAB_001a0827;
          iVar1 = 2;
          goto LAB_001a08aa;
        }
        sVar6 = _strlen(pcVar7);
        if (sVar6 + 1 < 2) {
          iVar1 = 99;
          pcVar7 = "$s: failed to get tag buffer length";
        }
        else {
          pcVar7 = _realloc(pcVar7,sVar6 + 2);
          local_30 = pcVar7;
          if (pcVar7 != (char *)0x0) {
            sVar6 = _strlen(pcVar7);
            (pcVar7 + sVar6)[0] = '~';
            (pcVar7 + sVar6)[1] = '\0';
            pcVar7 = local_30;
            goto LAB_001a080c;
          }
          iVar1 = 2;
          pcVar7 = "$s: failed to realloc tag buffer";
        }
      }
      else {
        pcVar7 = "%s: failed to get tag";
      }
    }
    else {
      pcVar7 = "%s: invalid image 3 object";
    }
    _AMAuthInstallLog(3,"AMAuthInstallApImg3CopyBuildString",pcVar7);
  }
LAB_001a08aa:
  _AMAuthInstallLog(8,"AMAuthInstallApImg3CopyBuildString","%s: %@",
                    "AMAuthInstallApImg3CopyBuildString",param_2);
LAB_001a0827:
  if (local_38 != 0) {
    _image3Discard(&local_38);
  }
  _SafeRelease(local_40);
  _SafeFree(local_30);
  return iVar1;
}

