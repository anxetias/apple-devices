// rea decompile_all
// name: ACFUFTABFile::setManifestOnData
// address: 0x2189f8
// body: available
// range: 0x2189f8-0x218c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x218a95 to 0x219030 ACFUFTABFile::setManifestToTopOnData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x218c09 to 0x218c7c ACFUFTABFile::isValidFileData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x218c30 to 0x219770 ACFUFTABFile::isCacheValid (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::setManifestOnData(__CFData const*, __CFData**) */

undefined8 __thiscall
ACFUFTABFile::setManifestOnData(ACFUFTABFile *this,__CFData *param_1,__CFData **param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  __CFData *p_Var4;
  undefined8 uVar5;
  ACFUFTABFile *this_00;
  long lVar6;
  undefined8 uVar7;
  __CFData *p_Var8;
  ACFUDataContainer *pAVar9;
  __CFData *p_Var10;
  ulong uVar11;
  long lVar12;
  
  p_Var8 = param_1;
  pAVar9 = (ACFUDataContainer *)this;
  if (param_2 == (__CFData **)0x0) {
    pAVar9 = *(ACFUDataContainer **)(this + 8);
    if (pAVar9 == (ACFUDataContainer *)0x0) {
      setManifestOnData((__CFData *)0x0,(__CFData **)param_1);
      return 0;
    }
    cVar2 = ACFUDataContainer::isOptimized(pAVar9);
    if (cVar2 != '\0') {
      setManifestOnData((__CFData *)pAVar9,(__CFData **)p_Var8);
      return 0;
    }
  }
  if (param_1 == (__CFData *)0x0) {
    setManifestOnData((__CFData *)pAVar9,(__CFData **)p_Var8);
  }
  else {
    p_Var4 = param_1;
    lVar3 = _CFDataGetLength();
    if (lVar3 < 1) {
      setManifestOnData(p_Var4,(__CFData **)p_Var8);
    }
    else {
      if (param_2 == (__CFData **)0x0) {
        if (*(int *)(this + 0x40) == 1) goto LAB_00218a7f;
        pAVar9 = *(ACFUDataContainer **)(this + 8);
        p_Var4 = (__CFData *)ACFUDataContainer::getData(pAVar9);
      }
      else {
        p_Var8 = *param_2;
        if (p_Var8 == (__CFData *)0x0) {
          setManifestOnData(p_Var4,(__CFData **)0x0);
          return 0;
        }
        pAVar9 = (ACFUDataContainer *)this;
        cVar2 = isValidFileData(this,p_Var8,false);
        if (cVar2 == '\0') {
          setManifestOnData((__CFData *)pAVar9,(__CFData **)p_Var8);
          return 0;
        }
        if (*(int *)(this + 0x40) == 1) {
LAB_00218a7f:
          uVar5 = setManifestToTopOnData(this,param_1,(__CFData **)0x0);
          return uVar5;
        }
        p_Var4 = *param_2;
      }
      if (p_Var4 == (__CFData *)0x0) {
        setManifestOnData((__CFData *)pAVar9,(__CFData **)p_Var8);
      }
      else {
        lVar3 = _CFDataGetBytePtr(p_Var4);
        iVar1 = *(int *)(lVar3 + 0x28);
        uVar5 = _CFDataGetLength(param_1);
        lVar3 = _CFDataGetBytePtr(p_Var4);
        if (*(int *)(lVar3 + 0x14) != 0) {
          this_00 = (ACFUFTABFile *)ACFULogging::getLogInstance();
          ACFULogging::handleMessage
                    (this_00,0,"%s::%s: manifest existing in FTAB is being deleted\n","ACFUFTABFile"
                     ,"setManifestOnData");
          removeManifestPadding(this_00,p_Var4);
          lVar3 = _CFDataGetBytePtr(p_Var4);
          p_Var8 = (__CFData *)(ulong)*(uint *)(lVar3 + 0x10);
          lVar3 = _CFDataGetBytePtr(p_Var4);
          _CFDataDeleteBytes(p_Var4,p_Var8,*(undefined4 *)(lVar3 + 0x14));
          lVar3 = _CFDataGetBytePtr(p_Var4);
          *(undefined4 *)(lVar3 + 0x10) = 0;
          lVar3 = _CFDataGetBytePtr(p_Var4);
          *(undefined4 *)(lVar3 + 0x14) = 0;
        }
        lVar3 = _CFDataGetLength(p_Var4);
        lVar6 = _CFDataGetBytePtr(p_Var4);
        lVar12 = (ulong)(iVar1 - 1) * 0x10;
        iVar1 = *(int *)(lVar6 + 0x34 + lVar12);
        p_Var10 = p_Var4;
        lVar6 = _CFDataGetBytePtr();
        uVar11 = (ulong)(uint)(iVar1 + *(int *)(lVar6 + 0x38 + lVar12)) + 3 & 0xfffffffffffffffc;
        lVar6 = uVar11 - lVar3;
        if ((long)uVar11 < lVar3) {
          setManifestOnData(p_Var10,(__CFData **)p_Var8);
        }
        else {
          if (lVar6 != 0 && lVar3 <= (long)uVar11) {
            uVar7 = ACFULogging::getLogInstance();
            ACFULogging::handleMessage
                      (uVar7,0,"%s::%s: padding %ld byte(s) at the end of ftab\n","ACFUFTABFile",
                       "setManifestOnData",lVar6);
            _CFDataIncreaseLength(p_Var4,lVar6);
          }
          lVar3 = _CFDataGetBytePtr(p_Var4);
          *(int *)(lVar3 + 0x14) = (int)uVar5;
          lVar3 = _CFDataGetBytePtr(p_Var4);
          *(int *)(lVar3 + 0x10) = (int)uVar11;
          uVar7 = _CFDataGetBytePtr(param_1);
          _CFDataAppendBytes(p_Var4,uVar7,uVar5);
          if (param_2 != (__CFData **)0x0) {
            uVar5 = isValidFileData(this,*param_2,false);
            return uVar5;
          }
          cVar2 = (**(code **)(*(long *)this + 0x58))(this);
          if (cVar2 != '\0') {
            uVar5 = isCacheValid(this);
            return uVar5;
          }
        }
      }
    }
  }
  return 0;
}

