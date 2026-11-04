// rea decompile_all
// name: ACFUFTABFile::setManifestToTopOnData
// address: 0x219030
// body: available
// range: 0x219030-0x2195bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::setManifestToTopOnData(__CFData const*, __CFData**) */

undefined4 __thiscall
ACFUFTABFile::setManifestToTopOnData(ACFUFTABFile *this,__CFData *param_1,__CFData **param_2)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  __CFData *p_Var12;
  long lVar13;
  ACFUFTABFile *pAVar14;
  long lVar15;
  undefined8 uVar16;
  __CFData *p_Var17;
  long lVar18;
  int iVar19;
  long lVar20;
  __CFData *p_Var21;
  __CFData **pp_Var22;
  ACFUDataContainer *pAVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  __CFData **pp_Var27;
  undefined8 in_stack_ffffffffffffff28;
  string local_88;
  undefined4 local_87;
  undefined1 local_83;
  void *local_78;
  __CFData **local_70;
  ACFUFTABFile *local_68;
  __CFData *local_60;
  ulong local_58;
  ulong local_50;
  __CFData *local_48;
  ulong local_40;
  ulong local_38;
  
  local_60 = param_1;
  if (param_2 == (__CFData **)0x0) {
    pAVar23 = *(ACFUDataContainer **)(this + 8);
    if (pAVar23 == (ACFUDataContainer *)0x0) {
      setManifestToTopOnData((__CFData *)0x0,(__CFData **)param_1);
      return 0;
    }
    cVar9 = ACFUDataContainer::isOptimized(pAVar23);
    if (cVar9 != '\0') {
      setManifestToTopOnData((__CFData *)pAVar23,(__CFData **)param_1);
      return 0;
    }
    pAVar23 = *(ACFUDataContainer **)(this + 8);
    p_Var12 = (__CFData *)ACFUDataContainer::getData(pAVar23);
  }
  else {
    p_Var21 = *param_2;
    if (p_Var21 == (__CFData *)0x0) {
      setManifestToTopOnData((__CFData *)this,(__CFData **)0x0);
      return 0;
    }
    pAVar23 = (ACFUDataContainer *)this;
    cVar9 = isValidFileData(this,p_Var21,false);
    if (cVar9 == '\0') {
      setManifestToTopOnData((__CFData *)pAVar23,(__CFData **)p_Var21);
      return 0;
    }
    p_Var12 = *param_2;
    param_1 = p_Var21;
  }
  if (p_Var12 == (__CFData *)0x0) {
    setManifestToTopOnData((__CFData *)pAVar23,(__CFData **)param_1);
    return 0;
  }
  local_70 = param_2;
  local_68 = this;
  lVar13 = _CFDataGetBytePtr(p_Var12);
  uVar3 = *(uint *)(lVar13 + 0x28);
  lVar13 = _CFDataGetBytePtr(p_Var12);
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  if (*(int *)(lVar13 + 0x14) != 0) {
    pAVar14 = (ACFUFTABFile *)ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (pAVar14,0,"%s::%s: manifest existing in FTAB is being deleted\n","ACFUFTABFile",
               "setManifestToTopOnData");
    cVar9 = removeManifestPadding(pAVar14,p_Var12);
    lVar13 = _CFDataGetBytePtr(p_Var12);
    uVar11 = *(undefined4 *)(lVar13 + 0x10);
    lVar13 = _CFDataGetBytePtr(p_Var12);
    _CFDataDeleteBytes(p_Var12,uVar11,*(undefined4 *)(lVar13 + 0x14));
    uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    if ((cVar9 != '\0') && (uVar3 != 0)) {
      lVar13 = 0;
      do {
        lVar15 = _CFDataGetBytePtr(p_Var12);
        iVar19 = *(int *)(lVar15 + 0x14);
        lVar15 = _CFDataGetBytePtr(p_Var12);
        uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 0x20);
        piVar2 = (int *)(lVar15 + 0x34 + lVar13);
        *piVar2 = *piVar2 - iVar19;
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar13);
    }
    lVar13 = _CFDataGetBytePtr(p_Var12);
    *(undefined4 *)(lVar13 + 0x10) = 0;
    lVar13 = _CFDataGetBytePtr(p_Var12);
    *(undefined4 *)(lVar13 + 0x14) = 0;
  }
  p_Var21 = *(__CFData **)PTR__kCFAllocatorDefault_004410e8;
  pp_Var22 = (__CFData **)0x0;
  local_48 = (__CFData *)_CFDataCreateMutable();
  if (local_48 == (__CFData *)0x0) {
    setManifestToTopOnData(p_Var21,pp_Var22);
    return 0;
  }
  lVar13 = _CFDataGetBytePtr(p_Var12);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  local_40 = (ulong)*(uint *)(lVar15 + 0x34);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  lVar20 = (ulong)(uVar3 - 1) * 0x10;
  uVar4 = *(uint *)(lVar15 + 0x34 + lVar20);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  uVar5 = *(uint *)(lVar15 + 0x38 + lVar20);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  local_58 = (ulong)*(uint *)(lVar15 + 0x34);
  local_50 = local_58 + 3 & 0xfffffffffffffffc;
  uVar26 = ((uint)(local_58 + 3) & 0xfffffffc) - *(uint *)(lVar15 + 0x34);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  iVar19 = *(int *)(lVar15 + 0x34);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  *(uint *)(lVar15 + 0x10) = iVar19 + uVar26;
  uVar10 = _CFDataGetLength(local_60);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  *(undefined4 *)(lVar15 + 0x14) = uVar10;
  uVar16 = ACFULogging::getLogInstance();
  lVar15 = _CFDataGetBytePtr(p_Var12);
  uVar10 = *(undefined4 *)(lVar15 + 0x10);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  ACFULogging::handleMessage
            (uVar16,0,"%s::%s: manifestOffset: %u, manifestSize: %u\n","ACFUFTABFile",
             "setManifestToTopOnData",uVar10,CONCAT44(uVar11,*(undefined4 *)(lVar15 + 0x14)));
  lVar15 = _CFDataGetBytePtr(p_Var12);
  iVar19 = *(int *)(lVar15 + 0x10);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  uVar24 = iVar19 + *(int *)(lVar15 + 0x14);
  uVar1 = (ulong)uVar24 + 3;
  uVar25 = uVar1 & 0xfffffffffffffffc;
  iVar19 = ((uint)uVar1 & 0xfffffffc) - uVar24;
  uVar16 = ACFULogging::getLogInstance();
  local_38 = (ulong)uVar26;
  ACFULogging::handleMessage
            (uVar16,0,
             "%s::%s: startOfManifestUnaligned: %ld, startOfManifestAligned: %ld, paddingBeforeManifestStart: %u\n"
             ,"ACFUFTABFile","setManifestToTopOnData",local_58,local_50,uVar26);
  uVar16 = ACFULogging::getLogInstance();
  ACFULogging::handleMessage
            (uVar16,0,
             "%s::%s: endOfManifestUnaligned: %ld, endOfManifestAligned: %ld, paddingAfterManifestEnd: %u\n"
             ,"ACFUFTABFile","setManifestToTopOnData",(ulong)uVar24,uVar25,iVar19);
  if (uVar3 == 0) {
    lVar20 = 0;
  }
  else {
    iVar7 = (int)local_38;
    lVar20 = (ulong)uVar3 << 4;
    lVar15 = 0;
    do {
      lVar18 = _CFDataGetBytePtr(p_Var12);
      iVar6 = *(int *)(lVar18 + 0x14);
      lVar18 = _CFDataGetBytePtr(p_Var12);
      piVar2 = (int *)(lVar18 + 0x34 + lVar15);
      *piVar2 = *piVar2 + iVar6 + iVar19 + iVar7;
      if (local_70 == (__CFData **)0x0) {
        lVar18 = _CFDataGetBytePtr(p_Var12);
        local_88 = (string)0x8;
        local_87 = *(undefined4 *)(lVar18 + 0x30 + lVar15);
        local_83 = 0;
        lVar18 = _CFDataGetBytePtr(p_Var12);
        cVar9 = updateCache(local_68,&local_88,*(uint *)(lVar18 + 0x34 + lVar15),0);
        if (cVar9 == '\0') {
          uVar16 = ACFULogging::getLogInstance();
          ACFULogging::handleMessage
                    (uVar16,2,"%s::%s: failed to update cache\n","ACFUFTABFile",
                     "setManifestToTopOnData");
        }
        if (((byte)local_88 & 1) != 0) {
          operator_delete(local_78);
        }
        if (cVar9 == '\0') {
          uVar11 = 0;
          p_Var21 = local_48;
          goto LAB_00219591;
        }
      }
      lVar15 = lVar15 + 0x10;
    } while (lVar20 != lVar15);
  }
  uVar8 = local_38;
  uVar1 = local_40;
  uVar16 = _CFDataGetBytePtr(p_Var12);
  p_Var21 = local_48;
  _CFDataAppendBytes(local_48,uVar16,0x30);
  lVar15 = _CFDataGetBytePtr(p_Var12);
  _CFDataAppendBytes(p_Var21,lVar15 + 0x30,lVar20);
  if ((int)local_50 != (int)local_58) {
    uVar16 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar16,0,"%s::%s: paddingBeforeManifestStart %u bytes\n","ACFUFTABFile",
               "setManifestToTopOnData",uVar8 & 0xffffffff);
    _CFDataIncreaseLength(p_Var21,uVar8 & 0xffffffff);
  }
  pp_Var27 = (__CFData **)(lVar13 + uVar1);
  uVar16 = _CFDataGetBytePtr(local_60);
  lVar13 = _CFDataGetBytePtr(p_Var12);
  _CFDataAppendBytes(p_Var21,uVar16,*(undefined4 *)(lVar13 + 0x14));
  pAVar14 = local_68;
  pp_Var22 = local_70;
  if ((uint)uVar25 != uVar24) {
    uVar16 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar16,0,"%s::%s: paddingAfterManifestEnd %u bytes\n","ACFUFTABFile",
               "setManifestToTopOnData",iVar19);
    _CFDataIncreaseLength(p_Var21,iVar19);
  }
  _CFDataAppendBytes(p_Var21,pp_Var27,(uVar4 - local_40) + (ulong)uVar5);
  if (pp_Var22 == (__CFData **)0x0) {
    cVar9 = ACFUDataContainer::setData(*(ACFUDataContainer **)(pAVar14 + 8),p_Var21);
    if ((cVar9 != '\0') && (cVar9 = (**(code **)(*(long *)pAVar14 + 0x58))(pAVar14), cVar9 != '\0'))
    {
      uVar11 = isCacheValid(pAVar14);
      goto LAB_00219591;
    }
  }
  else {
    if (*pp_Var22 != (__CFData *)0x0) {
      _CFRelease();
      *pp_Var22 = (__CFData *)0x0;
    }
    p_Var12 = p_Var21;
    p_Var17 = (__CFData *)_AMSupportSafeRetain();
    *pp_Var22 = p_Var17;
    if (p_Var17 != (__CFData *)0x0) {
      uVar11 = isValidFileData(pAVar14,p_Var17,false);
      goto LAB_00219591;
    }
    setManifestToTopOnData(p_Var12,pp_Var27);
  }
  uVar11 = 0;
LAB_00219591:
  _CFRelease(p_Var21);
  return uVar11;
}

