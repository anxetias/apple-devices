// rea decompile_all
// name: ACFUFTABFile::isValidFileData
// address: 0x218c7c
// body: available
// range: 0x218c7c-0x21902e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::isValidFileData(__CFData const*, bool) */

ulong __thiscall ACFUFTABFile::isValidFileData(ACFUFTABFile *this,__CFData *param_1,bool param_2)

{
  unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *this_00;
  char cVar1;
  __CFData *p_Var2;
  long lVar3;
  __CFData *p_Var4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  ACFUDataContainer *this_01;
  __CFData *p_Var14;
  uint uVar15;
  char *pcVar16;
  __CFData *p_Var17;
  ulong uVar18;
  
  p_Var4 = param_1;
  p_Var2 = param_1;
  if (param_1 == (__CFData *)0x0) {
    this_00 = (unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *)(this + 8);
    if (*(ACFUDataContainer **)(this + 8) == (ACFUDataContainer *)0x0) {
      pcVar16 = "%s::%s: no file data?!\n";
LAB_00218fe2:
      p_Var2 = (__CFData *)0x0;
    }
    else {
      cVar1 = ACFUDataContainer::isOptimized(*(ACFUDataContainer **)(this + 8));
      if (cVar1 == '\0') {
        p_Var2 = (__CFData *)ACFUDataContainer::copyData();
        if (p_Var2 != (__CFData *)0x0) goto LAB_00218d6c;
LAB_00218fd2:
        pcVar16 = "%s::%s: failed to copy ftab header\n";
        goto LAB_00218fe2;
      }
      if (param_2) {
        pcVar16 = "%s::%s: header only validation unsupported with optimized data\n";
        goto LAB_00218fe2;
      }
      p_Var2 = (__CFData *)ACFUDataContainer::copyData(*(ACFUDataContainer **)this_00,0,0x30);
      if (p_Var2 == (__CFData *)0x0) goto LAB_00218fd2;
      lVar3 = _CFDataGetBytePtr(p_Var2);
      pcVar16 = "%s::%s: failed to get byte pointer\n";
      if (lVar3 != 0) {
        uVar12 = *(int *)(lVar3 + 0x28) * 0x10 + 0x20;
        uVar10 = (undefined1)uVar12;
        p_Var4 = (__CFData *)ACFUDataContainer::copyData(*(ACFUDataContainer **)this_00,uVar12,0x10)
        ;
        if (p_Var4 == (__CFData *)0x0) {
          pcVar16 = "%s::%s: failed to aquire ftab file header\n";
        }
        else {
          lVar5 = _CFDataGetBytePtr(p_Var4);
          if (lVar5 != 0) {
            uVar18 = (ulong)*(uint *)(lVar5 + 8) + (ulong)*(uint *)(lVar5 + 4) + lVar3;
            _CFRelease();
            lVar5 = lVar3;
            goto LAB_00218d90;
          }
          _CFRelease(p_Var4);
        }
      }
    }
    uVar13 = ACFULogging::getLogInstance();
    uVar18 = 0;
    ACFULogging::handleMessage(uVar13,2,pcVar16,"ACFUFTABFile","isValidFileData");
    std::unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>>::reset_abi_ne190102_
              (this_00,(ACFUDataContainer *)0x0);
  }
  else {
LAB_00218d6c:
    uVar10 = SUB81(p_Var4,0);
    lVar5 = _CFDataGetBytePtr(p_Var2);
    lVar3 = _CFDataGetBytePtr(p_Var2);
    p_Var4 = p_Var2;
    lVar8 = _CFDataGetLength();
    uVar18 = lVar8 + lVar3;
LAB_00218d90:
    if (uVar18 - lVar3 < 0x31) {
      isValidFileData(p_Var4,(bool)uVar10);
LAB_00218fc5:
      p_Var4 = (__CFData *)0x0;
    }
    else {
      uVar6 = (ulong)*(uint *)(lVar5 + 0x28) * 0x10 + lVar3 + 0x30;
      if (uVar18 < uVar6) {
        isValidFileData(p_Var4,(bool)uVar10);
        goto LAB_00218fc5;
      }
      uVar7 = (ulong)*(uint *)(lVar5 + 0x10) + lVar3;
      if ((!param_2) && (uVar9 = uVar7 + *(uint *)(lVar5 + 0x14), uVar18 < uVar9)) {
        isValidFileData(p_Var4,SUB81(uVar9,0));
        goto LAB_00218fc5;
      }
      uVar13 = 0x62617466736f6b72;
      if (*(long *)(lVar5 + 0x20) != 0x62617466736f6b72) {
        isValidFileData(p_Var4,true);
        goto LAB_00218fc5;
      }
      p_Var17 = (__CFData *)(lVar5 + 0x28);
      if (0x4e < *(uint *)(lVar5 + 0x28) - 1) {
        isValidFileData(p_Var17,true);
        goto LAB_00218fc5;
      }
      if ((*(uint *)(lVar5 + 0x14) != 0) && (uVar7 < uVar6)) {
        isValidFileData(p_Var4,true);
        goto LAB_00218fc5;
      }
      if (param_1 == (__CFData *)0x0) {
        uVar12 = 0;
        uVar7 = 0x30;
        do {
          this_01 = *(ACFUDataContainer **)(this + 8);
          uVar15 = (uint)uVar7;
          p_Var4 = (__CFData *)ACFUDataContainer::copyData(this_01,uVar15,0x10);
          bVar11 = SUB81(uVar7,0);
          if (p_Var4 == (__CFData *)0x0) {
            isValidFileData((__CFData *)this_01,bVar11);
            goto LAB_00218f5d;
          }
          p_Var14 = p_Var4;
          lVar5 = _CFDataGetBytePtr();
          if (lVar5 == 0) {
            isValidFileData(p_Var14,bVar11);
            goto LAB_00218f63;
          }
          uVar7 = (ulong)*(uint *)(lVar5 + 4) + lVar3;
          if ((!param_2) &&
             ((uVar9 = *(uint *)(lVar5 + 8) + uVar7, uVar18 < uVar9 || (uVar9 < uVar6)))) {
            isValidFileData(p_Var14,bVar11);
            goto LAB_00218f63;
          }
          if (uVar7 < uVar6) {
            isValidFileData(p_Var14,bVar11);
            goto LAB_00218f63;
          }
          _CFRelease(p_Var4);
          uVar12 = uVar12 + 1;
          uVar7 = (ulong)(uVar15 + 0x10);
        } while (uVar12 < *(uint *)p_Var17);
        uVar18 = CONCAT71((int7)(uVar18 >> 8),1);
        goto LAB_00218f1d;
      }
      lVar5 = 0;
      uVar7 = 0;
      while( true ) {
        lVar8 = _CFDataGetBytePtr(param_1);
        uVar12 = *(uint *)(lVar8 + 0x34 + lVar5);
        p_Var4 = param_1;
        lVar8 = _CFDataGetBytePtr();
        if ((!param_2) &&
           ((uVar9 = (ulong)*(uint *)(lVar8 + 0x38 + lVar5) + (ulong)uVar12 + lVar3, uVar18 < uVar9
            || (uVar9 < uVar6)))) break;
        p_Var4 = param_1;
        lVar8 = _CFDataGetBytePtr();
        if ((ulong)*(uint *)(lVar8 + 0x34 + lVar5) + lVar3 < uVar6) {
          isValidFileData(p_Var4,SUB81(uVar13,0));
          goto LAB_00218f5d;
        }
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0x10;
        if (*(uint *)p_Var17 <= uVar7) goto code_r0x00218e9a;
      }
      isValidFileData(p_Var4,SUB81(uVar13,0));
LAB_00218f5d:
      p_Var4 = (__CFData *)0x0;
    }
LAB_00218f63:
    if (param_1 != (__CFData *)0x0) {
      uVar18 = 0;
      goto LAB_00218f2a;
    }
    uVar18 = 0;
    std::unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>>::reset_abi_ne190102_
              ((unique_ptr<ACFUDataContainer,std::default_delete<ACFUDataContainer>> *)(this + 8),
               (ACFUDataContainer *)0x0);
    if (p_Var4 != (__CFData *)0x0) {
      _CFRelease(p_Var4);
      uVar18 = 0;
    }
  }
LAB_00218f1d:
  if (p_Var2 != (__CFData *)0x0) {
    _CFRelease(p_Var2);
  }
LAB_00218f2a:
  return uVar18 & 0xffffffff;
code_r0x00218e9a:
  uVar18 = CONCAT71((int7)((ulong)p_Var17 >> 8),1);
  goto LAB_00218f2a;
}

