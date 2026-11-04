// rea decompile_all
// name: ACFUFile::saveToPath
// address: 0x21f498
// body: available
// range: 0x21f498-0x21f63a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFile::saveToPath(__CFURL const*) */

ulong __thiscall ACFUFile::saveToPath(ACFUFile *this,__CFURL *param_1)

{
  char cVar1;
  uint uVar2;
  __CFURL *p_Var3;
  long lVar4;
  long lVar5;
  __CFURL *p_Var6;
  __CFString *p_Var7;
  __CFURL *p_Var8;
  ACFUDataContainer *pAVar9;
  __CFURL *p_Var10;
  ulong uVar11;
  ACFUCommon local_48;
  __CFURL local_47 [15];
  __CFURL *local_38;
  
  if (param_1 == (__CFURL *)0x0) {
    saveToPath((__CFURL *)this);
  }
  else if (*(long *)(this + 0x18) == 0) {
    saveToPath((__CFURL *)this);
  }
  else {
    pAVar9 = *(ACFUDataContainer **)(this + 8);
    if (pAVar9 == (ACFUDataContainer *)0x0) {
      saveToPath((__CFURL *)0x0);
    }
    else {
      cVar1 = ACFUDataContainer::isOptimized(pAVar9);
      if (cVar1 == '\0') {
        p_Var8 = *(__CFURL **)PTR__kCFAllocatorDefault_004410e8;
        p_Var6 = p_Var8;
        p_Var3 = (__CFURL *)
                 _CFURLCreateCopyAppendingPathComponent
                           (p_Var8,param_1,*(undefined8 *)(this + 0x18),0);
        if (p_Var3 != (__CFURL *)0x0) {
          cVar1 = ACFUCommon::doesPathExist(p_Var3);
          if ((cVar1 == '\0') && (uVar2 = _AMSupportMakeDirectory(p_Var3), uVar2 != 0)) {
            saveToPath((__CFURL *)(ulong)uVar2);
LAB_0021f636:
            uVar11 = 0;
          }
          else {
            pAVar9 = *(ACFUDataContainer **)(this + 8);
            lVar4 = ACFUDataContainer::getData(pAVar9);
            if (lVar4 == 0) {
              saveToPath((__CFURL *)pAVar9);
              goto LAB_0021f636;
            }
            uVar2 = _AMSupportWriteDataToFileURL(p_Var8,lVar4,p_Var3,1);
            if (uVar2 != 0) {
              saveToPath((__CFURL *)(ulong)uVar2);
              goto LAB_0021f636;
            }
            lVar4 = ACFUDataContainer::getLength(*(ACFUDataContainer **)(this + 8));
            lVar5 = ACFUCommon::getFileSize(p_Var3);
            p_Var6 = (__CFURL *)ACFULogging::getLogInstance();
            p_Var7 = (__CFString *)_CFURLGetString(p_Var3);
            ACFUCommon::stringFromCFString(&local_48,p_Var7);
            p_Var8 = local_38;
            if (((byte)local_48 & 1) == 0) {
              p_Var8 = local_47;
            }
            p_Var10 = p_Var6;
            ACFULogging::handleMessage
                      (p_Var6,0,"%s::%s: Wrote %zu of %zu bytes to %s\n","ACFUFile","saveToPath",
                       lVar5,lVar4,p_Var8);
            if (((byte)local_48 & 1) != 0) {
              operator_delete(local_38);
              p_Var10 = local_38;
            }
            uVar11 = CONCAT71((int7)((ulong)p_Var6 >> 8),1);
            if (lVar4 != lVar5) {
              saveToPath(p_Var10);
              goto LAB_0021f636;
            }
          }
          _CFRelease(p_Var3);
          goto LAB_0021f5e0;
        }
        saveToPath(p_Var6);
      }
      else {
        saveToPath((__CFURL *)pAVar9);
      }
    }
  }
  uVar11 = 0;
LAB_0021f5e0:
  return uVar11 & 0xffffffff;
}

