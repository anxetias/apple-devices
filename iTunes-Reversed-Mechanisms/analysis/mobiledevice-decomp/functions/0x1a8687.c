// rea decompile_all
// name: _AMAuthInstallBundleCreatePersonalizedPathWithKey
// address: 0x1a8687
// body: available
// range: 0x1a8687-0x1a880a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleCreatePersonalizedPathWithKey
              (long param_1,long param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  long local_40;
  undefined8 *local_38;
  
  local_40 = 0;
  if (((param_1 == 0) || (param_3 == 0)) || (param_4 == (undefined8 *)0x0)) {
    iVar7 = 1;
    uVar5 = 0;
    lVar6 = 0;
    lVar3 = 0;
    if (param_4 == (undefined8 *)0x0) goto LAB_001a87a5;
  }
  else {
    local_38 = param_4;
    if (param_2 == 0) {
      bVar8 = false;
    }
    else {
      lVar3 = _CFStringCompare(param_2,&cf_BasebandFirmware,0);
      bVar8 = lVar3 == 0;
    }
    cVar1 = _AMAuthInstallApIsImg4(param_1);
    uVar4 = _CFGetAllocator(param_1);
    if ((bVar8) || (cVar1 == '\0')) {
      uVar5 = _CFStringCreateCopy(uVar4,param_3);
      iVar7 = 0;
    }
    else {
      uVar5 = 0;
      lVar3 = _CFURLCreateWithFileSystemPath(uVar4,param_3,0,0);
      iVar7 = 2;
      if (lVar3 != 0) {
        uVar5 = _CFGetAllocator(param_1);
        iVar2 = _AMAuthInstallApImg4CopyURLAddingExtension(uVar5,lVar3,&local_40);
        if (iVar2 == 0) {
          if ((local_40 != 0) && (lVar6 = _CFURLCopyFileSystemPath(local_40,0), lVar6 != 0)) {
            uVar5 = _CFRetain(lVar6);
            iVar7 = 0;
            param_4 = local_38;
            goto LAB_001a87a2;
          }
        }
        else {
          _AMAuthInstallBundleCreatePersonalizedPathWithKey_cold_1();
          iVar7 = iVar2;
        }
        uVar5 = 0;
        lVar6 = 0;
        param_4 = local_38;
        goto LAB_001a87a2;
      }
    }
    lVar6 = 0;
    lVar3 = 0;
    param_4 = local_38;
  }
LAB_001a87a2:
  *param_4 = uVar5;
LAB_001a87a5:
  _SafeRelease(lVar3);
  _SafeRelease(0);
  _SafeRelease(local_40);
  _SafeRelease(lVar6);
  return iVar7;
}

