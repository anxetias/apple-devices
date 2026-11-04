// name: FUN_10039f0f0
// address: 10039f0f0

long * FUN_10039f0f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  size_t sVar13;
  long local_98;
  long local_90;
  size_t local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  int local_64;
  size_t local_60;
  undefined8 local_58;
  long local_50;
  int local_44;
  void *local_40;
  long local_38;
  
  local_64 = 0;
  uVar2 = _CFDictionaryGetValue(param_2,&cf_SectionHeaders);
  iVar1 = FUN_10039f57b(uVar2);
  if (iVar1 != 0) {
    return (long *)0x0;
  }
  sVar3 = _CFArrayGetCount(uVar2);
  if (0x4a < (long)sVar3) {
    return (long *)0x0;
  }
  local_90 = _CFDictionaryGetValue(param_2,&cf_NameTransform);
  if (local_90 != 0) {
    lVar4 = _CFGetTypeID(local_90);
    lVar5 = _CFStringGetTypeID();
    if (lVar4 != lVar5) {
      return (long *)0x0;
    }
  }
  local_44 = 0;
  local_60 = sVar3;
  uVar6 = _CFStringGetLength(param_1);
  lVar4 = _CFStringGetMaximumSizeForEncoding(uVar6,0x600);
  pvVar7 = _malloc(lVar4 + 1);
  local_98 = 0;
  if (pvVar7 == (void *)0x0) {
    return (long *)0x0;
  }
  _CFStringGetBytes(param_1,0,uVar6,0x600,0,0,pvVar7,lVar4,&local_98);
  *(undefined1 *)((long)pvVar7 + local_98) = 0;
  lVar4 = _ucol_open(pvVar7,&local_44);
  _free(pvVar7);
  if (0 < local_44) {
    return (long *)0x0;
  }
  _ucol_setAttribute(lVar4,7,0x11,&local_44);
  sVar3 = local_60;
  if (local_44 < 1) {
    if (lVar4 == 0) {
      return (long *)0x0;
    }
    local_40 = _calloc(local_60,0x28);
    if (local_40 == (void *)0x0) {
      return (long *)0x0;
    }
    local_38 = lVar4;
    if (0 < (long)sVar3) {
      local_80 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
      sVar3 = 0;
      lVar4 = 0;
LAB_10039f286:
      local_88 = sVar3;
      local_70 = lVar4;
      lVar4 = _CFArrayGetValueAtIndex(uVar2,sVar3);
      if (lVar4 != 0) {
        lVar5 = _CFGetTypeID(lVar4);
        lVar8 = _CFDictionaryGetTypeID();
        if ((lVar5 == lVar8) &&
           (lVar5 = _CFDictionaryGetValue(lVar4,&cf_FirstCharacterAfterLanguage), lVar5 != 0)) {
          lVar8 = _CFGetTypeID(lVar5);
          lVar9 = _CFStringGetTypeID();
          if (lVar8 == lVar9) {
            uVar6 = _CFDictionaryGetValue(lVar4,&cf_Headers);
            iVar1 = FUN_10039f57b(uVar6);
            if (iVar1 == 0) {
              uVar10 = _CFArrayGetValueAtIndex(uVar6,0);
              lVar4 = FUN_10039fa26(local_80,uVar10,local_38);
              uVar10 = local_80;
              if (lVar4 != 0) {
                local_58 = uVar6;
                lVar5 = FUN_10039fa26(local_80,lVar5,local_38);
                if (lVar5 != 0) {
                  local_50 = lVar4;
                  sVar3 = _CFArrayGetCount(local_58);
                  pvVar7 = _calloc(sVar3,8);
                  lVar4 = local_50;
                  if (pvVar7 != (void *)0x0) {
                    local_78 = lVar5;
                    if (0 < (long)sVar3) {
                      sVar13 = 0;
LAB_10039f392:
                      uVar6 = _CFArrayGetValueAtIndex(local_58,sVar13);
                      lVar4 = FUN_10039fa26(uVar10,uVar6,local_38);
                      if (lVar4 != 0) goto code_r0x00010039f3b6;
                      if (sVar13 != 0) {
                        sVar3 = 0;
                        do {
                          _CFRelease(*(undefined8 *)((long)pvVar7 + sVar3 * 8));
                          sVar3 = sVar3 + 1;
                        } while (sVar13 != sVar3);
                      }
                      _free(pvVar7);
                      lVar4 = local_78;
                      lVar5 = local_50;
                      goto LAB_10039f50e;
                    }
                    lVar5 = _CFArrayCreate(uVar10,pvVar7,sVar3,PTR__kCFTypeArrayCallBacks_10082e130)
                    ;
                    goto LAB_10039f411;
                  }
LAB_10039f50e:
                  _CFRelease(lVar4);
                  lVar4 = lVar5;
                }
                _CFRelease(lVar4);
              }
            }
          }
        }
      }
      goto LAB_10039f51b;
    }
LAB_10039f466:
    lVar4 = local_90;
    if (local_90 == 0) {
      lVar4 = 0;
    }
    else {
      uVar11 = _CFStringGetLength(local_90);
      uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
      uVar6 = _CFAllocatorAllocate(uVar2,uVar11 * 2,0);
      _CFStringGetCharacters(lVar4,0,uVar11,uVar6);
      lVar4 = _utrans_openU(uVar6,uVar11 & 0xffffffff,0,0,0,0,&local_64);
      _CFAllocatorDeallocate(uVar2,uVar6);
      if (0 < local_64) {
LAB_10039f51b:
        _free(local_40);
        lVar4 = local_38;
        goto LAB_10039f234;
      }
    }
    lVar5 = local_38;
    plVar12 = _calloc(1,0x28);
    if (plVar12 != (long *)0x0) {
      *plVar12 = lVar5;
      plVar12[2] = (long)local_40;
      plVar12[3] = local_60;
      plVar12[1] = lVar4;
      return plVar12;
    }
    _free(local_40);
  }
  else {
LAB_10039f234:
    _ucol_close(lVar4);
  }
  return (long *)0x0;
code_r0x00010039f3b6:
  *(long *)((long)pvVar7 + sVar13 * 8) = lVar4;
  sVar13 = sVar13 + 1;
  if (sVar3 == sVar13) goto code_r0x00010039f3c3;
  goto LAB_10039f392;
code_r0x00010039f3c3:
  lVar5 = _CFArrayCreate(uVar10,pvVar7,sVar3,PTR__kCFTypeArrayCallBacks_10082e130);
  sVar13 = 0;
  do {
    _CFRelease(*(undefined8 *)((long)pvVar7 + sVar13 * 8));
    sVar13 = sVar13 + 1;
  } while (sVar3 != sVar13);
LAB_10039f411:
  lVar4 = local_70;
  sVar3 = local_88;
  plVar12 = (long *)((long)local_40 + local_88 * 0x28);
  _free(pvVar7);
  lVar8 = _CFRetain(local_58);
  plVar12[2] = lVar8;
  *plVar12 = local_50;
  plVar12[1] = local_78;
  plVar12[3] = lVar5;
  plVar12[4] = lVar4;
  lVar5 = _CFArrayGetCount(lVar5);
  lVar4 = lVar4 + lVar5;
  sVar3 = sVar3 + 1;
  if (sVar3 == local_60) goto LAB_10039f466;
  goto LAB_10039f286;
}

