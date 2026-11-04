// rea decompile_all
// name: ACFUFTABFile::removeManifestPadding
// address: 0x2195d8
// body: available
// range: 0x2195d8-0x21976e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::removeManifestPadding(__CFData*) */

undefined8 __thiscall ACFUFTABFile::removeManifestPadding(ACFUFTABFile *this,__CFData *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  __CFData *p_Var6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == (__CFData *)0x0) {
    removeManifestPadding((__CFData *)this);
  }
  else {
    lVar3 = _CFDataGetBytePtr(param_1);
    iVar8 = *(int *)(lVar3 + 0x14);
    p_Var6 = param_1;
    lVar3 = _CFDataGetBytePtr();
    if (iVar8 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x10);
      lVar3 = _CFDataGetBytePtr(param_1);
      if (*(uint *)(lVar3 + 0x34) <= uVar1) {
        lVar3 = _CFDataGetBytePtr(param_1);
        iVar8 = *(int *)(lVar3 + 0x28);
        lVar3 = _CFDataGetBytePtr(param_1);
        lVar5 = (ulong)(iVar8 - 1) * 0x10;
        iVar8 = *(int *)(lVar3 + 0x34 + lVar5);
        lVar3 = _CFDataGetBytePtr(param_1);
        iVar8 = iVar8 + *(int *)(lVar3 + 0x38 + lVar5);
        uVar4 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar4,0,
                   "%s::%s: manifest at the end - startOfManifest: %u, endOfFiles: %u, padding: %u\n"
                   ,"ACFUFTABFile","removeManifestPadding",uVar1,iVar8,uVar1 - iVar8);
        _CFDataDeleteBytes(param_1,iVar8,uVar1 - iVar8);
        lVar3 = _CFDataGetBytePtr(param_1);
        *(int *)(lVar3 + 0x10) = iVar8;
        return 0;
      }
      lVar3 = _CFDataGetBytePtr(param_1);
      iVar2 = *(int *)(lVar3 + 0x34);
      iVar9 = iVar2 - (uVar1 + iVar8);
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,0,
                 "%s::%s: manifest is at top - endOfManifest: %u, startOfFiles: %u, paddingAfterManifestEnd: %u\n"
                 ,"ACFUFTABFile","removeManifestPadding",uVar1 + iVar8,iVar2,iVar9);
      lVar3 = _CFDataGetBytePtr(param_1);
      iVar8 = iVar8 + *(int *)(lVar3 + 0x10);
      _CFDataDeleteBytes(param_1,iVar8,iVar9);
      lVar3 = _CFDataGetBytePtr(param_1);
      uVar4 = CONCAT71((uint7)(uint3)((uint)iVar8 >> 8),1);
      if (*(int *)(lVar3 + 0x28) == 0) {
        return uVar4;
      }
      lVar3 = 0x34;
      uVar7 = 0;
      do {
        lVar5 = _CFDataGetBytePtr(param_1);
        *(int *)(lVar5 + lVar3) = *(int *)(lVar5 + lVar3) - iVar9;
        uVar7 = uVar7 + 1;
        lVar5 = _CFDataGetBytePtr(param_1);
        lVar3 = lVar3 + 0x10;
      } while (uVar7 < *(uint *)(lVar5 + 0x28));
      return uVar4;
    }
    removeManifestPadding(p_Var6);
  }
  return 0;
}

