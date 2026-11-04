// rea decompile_all
// name: ACFUFTABFile::updateFileInFTABOnData
// address: 0x21a58c
// body: available
// range: 0x21a58c-0x21afea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0021aed0) */
/* ACFUFTABFile::updateFileInFTABOnData(std::string const&, __CFData const*, __CFData**) */

ulong __thiscall
ACFUFTABFile::updateFileInFTABOnData
          (ACFUFTABFile *this,string *param_1,__CFData *param_2,__CFData **param_3)

{
  __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
  *this_00;
  int *piVar1;
  string sVar2;
  int iVar3;
  piecewise_construct_t *ppVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ACFUFTABFile *pAVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  string *psVar19;
  __CFData **pp_Var20;
  __CFData **extraout_RDX;
  ulong uVar21;
  __CFData **extraout_RDX_00;
  __CFData **extraout_RDX_01;
  __CFData **extraout_RDX_02;
  __CFData *p_Var22;
  __CFData *p_Var23;
  __CFData *p_Var24;
  ACFUDataContainer *this_01;
  string *psVar25;
  long lVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  __CFData *local_88;
  undefined8 local_58;
  void *local_48;
  string *local_40;
  __CFData *local_38;
  
  if ((param_3 == (__CFData **)0x0) && (*(long *)(this + 8) == 0)) {
    updateFileInFTABOnData((string *)this,(__CFData *)param_1,(__CFData **)param_2);
LAB_0021af67:
    local_88 = (__CFData *)0x0;
  }
  else {
    if (param_2 == (__CFData *)0x0) {
      updateFileInFTABOnData((string *)this,(__CFData *)param_1,(__CFData **)0x0);
      goto LAB_0021af67;
    }
    p_Var22 = param_2;
    local_40 = param_1;
    auVar28 = _CFDataGetLength();
    pp_Var20 = auVar28._8_8_;
    if (auVar28._0_8_ < 1) {
      updateFileInFTABOnData((string *)p_Var22,(__CFData *)param_1,pp_Var20);
      goto LAB_0021af67;
    }
    if (((byte)*local_40 & 1) == 0) {
      uVar13 = (ulong)((byte)*local_40 >> 1);
    }
    else {
      uVar13 = *(ulong *)(local_40 + 8);
    }
    if (uVar13 != 4) {
      updateFileInFTABOnData(local_40,(__CFData *)(local_40 + 8),pp_Var20);
      goto LAB_0021af67;
    }
    if (param_3 != (__CFData **)0x0) {
      p_Var22 = *param_3;
      if (p_Var22 == (__CFData *)0x0) {
        updateFileInFTABOnData(local_40,(__CFData *)0x0,pp_Var20);
      }
      else {
        pAVar14 = this;
        cVar5 = isValidFileData(this,p_Var22,false);
        if (cVar5 == '\0') {
          updateFileInFTABOnData((string *)pAVar14,p_Var22,extraout_RDX);
        }
        else {
          p_Var23 = *param_3;
          p_Var24 = p_Var23;
          auVar28 = _CFDataGetBytePtr();
          if (auVar28._0_8_ == 0) {
            updateFileInFTABOnData((string *)p_Var24,p_Var22,auVar28._8_8_);
          }
          else {
            uVar13 = (ulong)*(uint *)(auVar28._0_8_ + 0x28);
            if (uVar13 != 0) {
              local_38 = (__CFData *)(local_40 + 1);
              lVar26 = 0;
              do {
                lVar11 = _CFDataGetBytePtr(p_Var23);
                ppVar4 = local_58;
                local_58._0_5_ = CONCAT41(*(undefined4 *)(lVar11 + 0x30 + lVar26),8);
                local_58._6_2_ = SUB82(ppVar4,6);
                local_58._0_6_ = (uint6)(uint5)local_58;
                if (((byte)*local_40 & 1) == 0) {
                  uVar21 = (ulong)((byte)*local_40 >> 1);
                  p_Var22 = local_38;
                }
                else {
                  uVar21 = *(ulong *)(local_40 + 8);
                  p_Var22 = *(__CFData **)(local_40 + 0x10);
                }
                bVar27 = uVar21 == 4;
                if (3 < uVar21) {
                  uVar21 = 4;
                }
                iVar6 = _memcmp(p_Var22,(void *)((long)&local_58 + 1),uVar21);
                if (iVar6 == 0 && bVar27) {
                  lVar11 = _CFDataGetBytePtr(p_Var23);
                  uVar9 = *(uint *)(lVar11 + 0x38 + lVar26);
                  lVar11 = _CFDataGetBytePtr(p_Var23);
                  uVar7 = *(undefined4 *)(lVar11 + 0x34 + lVar26);
                  goto LAB_0021a7eb;
                }
                lVar26 = lVar26 + 0x10;
              } while (uVar13 << 4 != lVar26);
              uVar12 = ACFULogging::getLogInstance();
              if (((byte)*local_40 & 1) != 0) {
                local_38 = *(__CFData **)(local_40 + 0x10);
              }
              local_88 = (__CFData *)0x0;
              ACFULogging::handleMessage
                        (uVar12,2,"%s::%s: cannot update tag \'%s\' because it does not exist\n",
                         "ACFUFTABFile","updateFileInFTABOnData",local_38);
              goto LAB_0021a701;
            }
            updateFileInFTABOnData((string *)p_Var24,p_Var22,auVar28._8_8_);
          }
        }
      }
      goto LAB_0021af67;
    }
    cVar5 = ACFUDataContainer::isOptimized(*(ACFUDataContainer **)(this + 8));
    if (cVar5 != '\0') {
      this_00 = (__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                 *)(this + 0x48);
      pAVar14 = (ACFUFTABFile *)
                std::
                __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                ::find<std::string>(this_00,local_40);
      if ((pAVar14 != this + 0x50) && (*(long *)(pAVar14 + 0x38) != 0)) {
        _CFRelease();
        *(undefined8 *)(pAVar14 + 0x38) = 0;
      }
      uVar12 = _AMSupportSafeRetain(param_2);
      local_58 = (piecewise_construct_t *)local_40;
      lVar26 = std::
               __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
               ::
               __emplace_unique_key_args<std::string,std::piecewise_construct_t_const&,std::tuple<std::string_const&>,std::tuple<>>
                         ((string *)this_00,(piecewise_construct_t *)local_40,
                          (tuple *)&std::piecewise_construct,(tuple *)&local_58);
      *(undefined8 *)(lVar26 + 0x38) = uVar12;
      uVar13 = CONCAT71((int7)((ulong)this_00 >> 8),1);
LAB_0021a980:
      local_88 = (__CFData *)0x0;
      goto LAB_0021ae37;
    }
    this_01 = *(ACFUDataContainer **)(this + 8);
    auVar28 = ACFUDataContainer::getData(this_01);
    psVar25 = local_40;
    local_38 = auVar28._0_8_;
    if (local_38 == (__CFData *)0x0) {
      updateFileInFTABOnData((string *)this_01,(__CFData *)param_1,auVar28._8_8_);
      goto LAB_0021af67;
    }
    psVar19 = local_40;
    cVar5 = (**(code **)(*(long *)this + 0x10))(this);
    if (cVar5 == '\0') {
      updateFileInFTABOnData(psVar25,(__CFData *)psVar19,extraout_RDX_00);
      goto LAB_0021af67;
    }
    lVar26 = std::
             __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
             ::find<std::string>((__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                                  *)(this + 0x28),psVar25);
    uVar9 = *(uint *)(lVar26 + 0x38);
    uVar7 = *(undefined4 *)(lVar26 + 0x3c);
    p_Var23 = local_38;
LAB_0021a7eb:
    uVar21 = (ulong)uVar9;
    uVar13 = _CFDataGetLength(param_2);
    if (uVar13 == uVar21) {
      uVar12 = _CFDataGetBytePtr(param_2);
      _CFDataReplaceBytes(p_Var23,uVar7,uVar21,uVar12,uVar21);
      if (param_3 == (__CFData **)0x0) {
        cVar5 = (**(code **)(*(long *)this + 0x58))(this);
        if (cVar5 != '\0') {
          uVar9 = isCacheValid(this);
          uVar13 = (ulong)uVar9;
          goto LAB_0021a980;
        }
        goto LAB_0021af67;
      }
      p_Var22 = *param_3;
      local_88 = (__CFData *)0x0;
LAB_0021ae2b:
      uVar9 = isValidFileData(this,p_Var22,false);
LAB_0021ae35:
      uVar13 = (ulong)uVar9;
      goto LAB_0021ae37;
    }
    lVar26 = _CFDataGetBytePtr(p_Var23);
    _CFDataGetBytePtr(p_Var23);
    lVar11 = _CFDataGetBytePtr(p_Var23);
    local_38 = p_Var23;
    if (*(int *)(lVar11 + 0x14) == 0) {
      local_88 = (__CFData *)0x0;
    }
    else {
      pAVar14 = (ACFUFTABFile *)ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (pAVar14,0,"%s::%s: manifest existing in FTAB is being deleted\n","ACFUFTABFile",
                 "updateFileInFTABOnData");
      cVar5 = removeManifestPadding(pAVar14,p_Var23);
      lVar11 = _CFDataGetBytePtr(p_Var23);
      p_Var22 = (__CFData *)((ulong)*(uint *)(lVar11 + 0x10) + lVar26);
      psVar25 = *(string **)PTR__kCFAllocatorDefault_004410e8;
      lVar26 = _CFDataGetBytePtr(p_Var23);
      auVar28 = _CFDataCreate(psVar25,p_Var22,*(undefined4 *)(lVar26 + 0x14));
      local_88 = auVar28._0_8_;
      if (local_88 == (__CFData *)0x0) {
        updateFileInFTABOnData(psVar25,p_Var22,auVar28._8_8_);
        goto LAB_0021af67;
      }
      lVar26 = _CFDataGetBytePtr(p_Var23);
      uVar7 = *(undefined4 *)(lVar26 + 0x10);
      lVar26 = _CFDataGetBytePtr(p_Var23);
      _CFDataDeleteBytes(p_Var23,uVar7,*(undefined4 *)(lVar26 + 0x14));
      if ((cVar5 != '\0') && (lVar26 = _CFDataGetBytePtr(p_Var23), *(int *)(lVar26 + 0x28) != 0)) {
        lVar26 = 0x34;
        uVar13 = 0;
        do {
          lVar11 = _CFDataGetBytePtr(p_Var23);
          iVar6 = *(int *)(lVar11 + 0x14);
          lVar11 = _CFDataGetBytePtr(local_38);
          p_Var23 = local_38;
          *(int *)(lVar11 + lVar26) = *(int *)(lVar11 + lVar26) - iVar6;
          uVar13 = uVar13 + 1;
          lVar11 = _CFDataGetBytePtr(local_38);
          lVar26 = lVar26 + 0x10;
        } while (uVar13 < *(uint *)(lVar11 + 0x28));
      }
      lVar26 = _CFDataGetBytePtr(p_Var23);
      *(undefined4 *)(lVar26 + 0x14) = 0;
      lVar26 = _CFDataGetBytePtr(p_Var23);
      *(undefined4 *)(lVar26 + 0x10) = 0;
    }
    uVar13 = 0;
    lVar26 = _CFDataGetBytePtr(p_Var23);
    if (*(int *)(lVar26 + 0x28) != 0) {
      psVar25 = local_40 + 1;
      lVar26 = 0x30;
      uVar13 = 0;
      do {
        lVar11 = _CFDataGetBytePtr(p_Var23);
        local_58._0_5_ = CONCAT41(*(int *)(lVar11 + lVar26),8);
        sVar2 = *local_40;
        if (((byte)sVar2 & 1) == 0) {
          uVar18 = (ulong)((byte)sVar2 >> 1);
        }
        else {
          uVar18 = *(ulong *)(local_40 + 8);
        }
        if (uVar18 == 4) {
          psVar19 = psVar25;
          if (((byte)sVar2 & 1) != 0) {
            psVar19 = *(string **)(local_40 + 0x10);
          }
          if (*(int *)psVar19 == *(int *)(lVar11 + lVar26)) break;
        }
        uVar13 = uVar13 + 1;
        lVar11 = _CFDataGetBytePtr(p_Var23);
        lVar26 = lVar26 + 0x10;
      } while (uVar13 < *(uint *)(lVar11 + 0x28));
    }
    lVar26 = _CFDataGetLength(param_2);
    iVar6 = _CFDataGetLength(param_2);
    uVar10 = (uint)uVar13;
    if (lVar26 < (long)uVar21) {
      lVar26 = _CFDataGetBytePtr(p_Var23);
      if (uVar10 + 1 < *(uint *)(lVar26 + 0x28)) {
        uVar21 = (ulong)(uVar10 + 1);
        lVar26 = uVar21 << 4;
        do {
          lVar11 = _CFDataGetBytePtr(p_Var23);
          piVar1 = (int *)(lVar11 + 0x34 + lVar26);
          *piVar1 = *piVar1 - (uVar9 - iVar6);
          if (param_3 == (__CFData **)0x0) {
            lVar11 = _CFDataGetBytePtr(p_Var23);
            ppVar4 = local_58;
            local_58._0_5_ = CONCAT41(*(undefined4 *)(lVar11 + 0x30 + lVar26),8);
            local_58._6_2_ = SUB82(ppVar4,6);
            local_58._0_6_ = (uint6)(uint5)local_58;
            lVar11 = _CFDataGetBytePtr(p_Var23);
            cVar5 = updateCache(this,(string *)&local_58,*(uint *)(lVar11 + 0x34 + lVar26),0);
            bVar27 = cVar5 == '\0';
            if (bVar27) {
              uVar12 = ACFULogging::getLogInstance();
              ACFULogging::handleMessage
                        (uVar12,2,"%s::%s: could not update ftab cache\n","ACFUFTABFile",
                         "updateFileInFTABOnData");
            }
            if (((ulong)local_58 & 1) != 0) {
              operator_delete(local_48);
            }
            p_Var23 = local_38;
            if (cVar5 == '\0') goto LAB_0021aebd;
          }
          uVar21 = uVar21 + 1;
          lVar11 = _CFDataGetBytePtr(p_Var23);
          lVar26 = lVar26 + 0x10;
        } while (uVar21 < *(uint *)(lVar11 + 0x28));
      }
      uVar7 = _CFDataGetLength(param_2);
      lVar26 = _CFDataGetBytePtr(p_Var23);
      lVar11 = (uVar13 & 0xffffffff) * 0x10;
      *(undefined4 *)(lVar26 + 0x38 + lVar11) = uVar7;
      if (param_3 == (__CFData **)0x0) {
        lVar26 = _CFDataGetBytePtr(p_Var23);
        ppVar4 = local_58;
        local_58._0_5_ = CONCAT41(*(undefined4 *)(lVar26 + 0x30 + lVar11),8);
        local_58._6_2_ = SUB82(ppVar4,6);
        local_58._0_6_ = (uint6)(uint5)local_58;
        lVar26 = _CFDataGetBytePtr(p_Var23);
        uVar10 = *(uint *)(lVar26 + 0x34 + lVar11);
        uVar8 = _CFDataGetLength(param_2);
        cVar5 = updateCache(this,(string *)&local_58,uVar10,uVar8);
        bVar27 = cVar5 == '\0';
        if (bVar27) {
          uVar12 = ACFULogging::getLogInstance();
          ACFULogging::handleMessage
                    (uVar12,2,"%s::%s: could not update ftab cache\n","ACFUFTABFile",
                     "updateFileInFTABOnData");
        }
        if (((ulong)local_58 & 1) != 0) {
          operator_delete(local_48);
        }
        p_Var23 = local_38;
        if (cVar5 != '\0') goto LAB_0021ad0e;
LAB_0021aebd:
        if (bVar27) goto LAB_0021a701;
      }
      else {
LAB_0021ad0e:
        lVar26 = _CFDataGetBytePtr(p_Var23);
        uVar10 = *(uint *)(lVar26 + 0x34 + lVar11);
        lVar26 = _CFDataGetLength(param_2);
        _CFDataDeleteBytes(p_Var23,(ulong)uVar10 + lVar26,uVar9 - iVar6);
LAB_0021ad35:
        lVar26 = _CFDataGetBytePtr(p_Var23);
        uVar7 = *(undefined4 *)(lVar26 + 0x34 + (uVar13 & 0xffffffff) * 0x10);
        uVar12 = _CFDataGetLength(param_2);
        uVar16 = _CFDataGetBytePtr(param_2);
        uVar17 = _CFDataGetLength(param_2);
        _CFDataReplaceBytes(p_Var23,uVar7,uVar12,uVar16,uVar17);
        if (param_3 != (__CFData **)0x0) goto LAB_0021ae04;
      }
      if ((local_88 == (__CFData *)0x0) ||
         (p_Var22 = local_88, pAVar14 = this,
         cVar5 = setManifestOnData(this,local_88,(__CFData **)0x0), cVar5 != '\0')) {
        cVar5 = (**(code **)(*(long *)this + 0x58))(this);
        if (cVar5 != '\0') {
          uVar9 = isCacheValid(this);
          goto LAB_0021ae35;
        }
      }
      else {
        updateFileInFTABOnData((string *)pAVar14,p_Var22,extraout_RDX_02);
      }
    }
    else {
      iVar6 = iVar6 - uVar9;
      _CFDataIncreaseLength(p_Var23,iVar6);
      lVar26 = _CFDataGetBytePtr(p_Var23);
      uVar9 = *(int *)(lVar26 + 0x28) - 1;
      if (uVar10 < uVar9) {
        lVar26 = (ulong)uVar9 << 4;
        do {
          lVar11 = _CFDataGetBytePtr(p_Var23);
          iVar3 = *(int *)(lVar11 + 0x34 + lVar26);
          lVar11 = _CFDataGetBytePtr(p_Var23);
          local_40 = (string *)(ulong)*(uint *)(lVar11 + 0x38 + lVar26);
          lVar11 = _CFDataGetBytePtr(p_Var23);
          lVar15 = _CFDataGetBytePtr(p_Var23);
          uVar8 = *(uint *)(lVar15 + 0x34 + lVar26);
          lVar15 = _CFDataGetBytePtr(local_38);
          p_Var23 = local_38;
          _CFDataReplaceBytes(local_38,iVar3 + iVar6,local_40,(ulong)uVar8 + lVar11,
                              *(undefined4 *)(lVar15 + 0x38 + lVar26));
          lVar11 = _CFDataGetBytePtr(p_Var23);
          piVar1 = (int *)(lVar11 + 0x34 + lVar26);
          *piVar1 = *piVar1 + iVar6;
          if (param_3 == (__CFData **)0x0) {
            lVar11 = _CFDataGetBytePtr(p_Var23);
            ppVar4 = local_58;
            local_58._0_5_ = CONCAT41(*(undefined4 *)(lVar11 + 0x30 + lVar26),8);
            local_58._6_2_ = SUB82(ppVar4,6);
            local_58._0_6_ = (uint6)(uint5)local_58;
            lVar11 = _CFDataGetBytePtr(p_Var23);
            cVar5 = updateCache(this,(string *)&local_58,*(uint *)(lVar11 + 0x34 + lVar26),0);
            bVar27 = cVar5 == '\0';
            if (bVar27) {
              uVar12 = ACFULogging::getLogInstance();
              ACFULogging::handleMessage
                        (uVar12,2,"%s::%s: could not update ftab cache\n","ACFUFTABFile",
                         "updateFileInFTABOnData");
            }
            if (((ulong)local_58 & 1) != 0) {
              operator_delete(local_48);
            }
            if (cVar5 == '\0') goto LAB_0021aebd;
          }
          lVar26 = lVar26 + -0x10;
          uVar9 = uVar9 - 1;
        } while (uVar10 < uVar9);
      }
      uVar7 = _CFDataGetLength(param_2);
      lVar26 = _CFDataGetBytePtr(p_Var23);
      lVar11 = (uVar13 & 0xffffffff) * 0x10;
      *(undefined4 *)(lVar26 + 0x38 + lVar11) = uVar7;
      if (param_3 == (__CFData **)0x0) {
        lVar26 = _CFDataGetBytePtr(p_Var23);
        ppVar4 = local_58;
        local_58._0_5_ = CONCAT41(*(undefined4 *)(lVar26 + 0x30 + lVar11),8);
        local_58._6_2_ = SUB82(ppVar4,6);
        local_58._0_6_ = (uint6)(uint5)local_58;
        lVar26 = _CFDataGetBytePtr(p_Var23);
        uVar9 = *(uint *)(lVar26 + 0x34 + lVar11);
        uVar10 = _CFDataGetLength(param_2);
        cVar5 = updateCache(this,(string *)&local_58,uVar9,uVar10);
        bVar27 = cVar5 == '\0';
        if (bVar27) {
          uVar12 = ACFULogging::getLogInstance();
          ACFULogging::handleMessage
                    (uVar12,2,"%s::%s: could not update ftab cache\n","ACFUFTABFile",
                     "updateFileInFTABOnData");
        }
        if (((ulong)local_58 & 1) != 0) {
          operator_delete(local_48);
        }
        p_Var23 = local_38;
        if (cVar5 == '\0') goto LAB_0021aebd;
        goto LAB_0021ad35;
      }
      lVar26 = _CFDataGetBytePtr(p_Var23);
      local_40 = (string *)(ulong)*(uint *)(lVar26 + 0x34 + lVar11);
      uVar12 = _CFDataGetLength(param_2);
      uVar16 = _CFDataGetBytePtr(param_2);
      uVar17 = _CFDataGetLength(param_2);
      _CFDataReplaceBytes(p_Var23,local_40,uVar12,uVar16,uVar17);
LAB_0021ae04:
      if ((local_88 == (__CFData *)0x0) ||
         (p_Var22 = local_88, pAVar14 = this, cVar5 = setManifestOnData(this,local_88,param_3),
         cVar5 != '\0')) {
        p_Var22 = *param_3;
        goto LAB_0021ae2b;
      }
      updateFileInFTABOnData((string *)pAVar14,p_Var22,extraout_RDX_01);
    }
  }
LAB_0021a701:
  uVar13 = 0;
LAB_0021ae37:
  _AMSupportSafeRelease(local_88);
  return uVar13 & 0xffffff01;
}

