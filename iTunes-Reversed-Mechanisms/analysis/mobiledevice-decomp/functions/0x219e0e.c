// rea decompile_all
// name: ACFUFTABFile::addNewFileToFTABOnData
// address: 0x219e0e
// body: available
// range: 0x219e0e-0x21a56f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0021a4d2) */
/* ACFUFTABFile::addNewFileToFTABOnData(std::string const&, __CFData const*, __CFData**) */

ulong __thiscall
ACFUFTABFile::addNewFileToFTABOnData
          (ACFUFTABFile *this,string *param_1,__CFData *param_2,__CFData **param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  __CFData **pp_Var4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ACFUFTABFile *pAVar11;
  undefined8 uVar12;
  __CFData *p_Var13;
  __CFData *p_Var14;
  __CFData **extraout_RDX;
  __CFData **extraout_RDX_00;
  __CFData **extraout_RDX_01;
  size_t sVar15;
  __CFData **extraout_RDX_02;
  __CFData **extraout_RDX_03;
  __CFData **extraout_RDX_04;
  __CFData **extraout_RDX_05;
  __CFData *p_Var16;
  string *psVar17;
  string *psVar18;
  ACFUDataContainer *pAVar19;
  __CFData *p_Var20;
  ACFUFTABFile *pAVar21;
  ulong uVar22;
  __CFData *p_Var23;
  undefined1 auVar24 [16];
  char local_a8 [4];
  uint local_a4;
  uint local_a0;
  undefined4 local_9c;
  __CFData *local_98;
  string *local_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  __CFData *local_70;
  __CFData **local_68;
  string *local_60;
  ACFUFTABFile *local_58;
  __CFData *local_50;
  undefined8 local_48;
  void *local_38;
  
  if ((param_3 == (__CFData **)0x0) && (*(long *)(this + 8) == 0)) {
    addNewFileToFTABOnData((string *)this,(__CFData *)param_1,(__CFData **)param_2);
  }
  else if (param_2 == (__CFData *)0x0) {
    addNewFileToFTABOnData((string *)this,(__CFData *)param_1,(__CFData **)0x0);
  }
  else {
    psVar17 = param_1;
    p_Var16 = param_2;
    auVar24 = _CFDataGetLength();
    if (auVar24._0_8_ < 1) {
      addNewFileToFTABOnData((string *)p_Var16,(__CFData *)psVar17,auVar24._8_8_);
    }
    else {
      if (((byte)*param_1 & 1) == 0) {
        uVar22 = (ulong)((byte)*param_1 >> 1);
      }
      else {
        uVar22 = *(ulong *)(param_1 + 8);
      }
      if (uVar22 == 4) {
        p_Var16 = (__CFData *)param_1;
        pAVar11 = this;
        cVar6 = (**(code **)(*(long *)this + 0x10))();
        if (cVar6 == '\0') {
          local_68 = param_3;
          if (param_3 == (__CFData **)0x0) {
            cVar6 = ACFUDataContainer::isOptimized(*(ACFUDataContainer **)(this + 8));
            if (cVar6 == '\0') {
              pAVar19 = *(ACFUDataContainer **)(this + 8);
              auVar24 = ACFUDataContainer::getData(pAVar19);
LAB_00219f1d:
              p_Var23 = auVar24._0_8_;
              if (p_Var23 == (__CFData *)0x0) {
                addNewFileToFTABOnData((string *)pAVar19,p_Var16,auVar24._8_8_);
LAB_0021a509:
                p_Var23 = (__CFData *)0x0;
                p_Var16 = (__CFData *)0x0;
LAB_0021a50f:
                uVar22 = 0;
              }
              else {
                psVar17 = *(string **)PTR__kCFAllocatorDefault_004410e8;
                p_Var16 = (__CFData *)0x0;
                psVar18 = psVar17;
                auVar24 = _CFDataCreateMutable();
                if (auVar24._0_8_ == (__CFData *)0x0) {
                  addNewFileToFTABOnData(psVar18,p_Var16,auVar24._8_8_);
                  goto LAB_0021a509;
                }
                local_98 = param_2;
                local_70 = auVar24._0_8_;
                local_60 = psVar17;
                lVar8 = _CFDataGetBytePtr(p_Var23);
                lVar9 = _CFDataGetBytePtr(p_Var23);
                local_80 = (ulong)*(uint *)(lVar9 + 0x34);
                lVar9 = _CFDataGetBytePtr(p_Var23);
                local_90 = param_1;
                lVar10 = _CFDataGetBytePtr(p_Var23);
                local_78 = (ulong)*(uint *)(lVar9 + 0x34 +
                                           (ulong)(*(int *)(lVar10 + 0x28) - 1) * 0x10) + lVar8;
                lVar9 = _CFDataGetBytePtr(p_Var23);
                lVar10 = _CFDataGetBytePtr(p_Var23);
                psVar17 = local_90;
                uVar7 = *(uint *)(lVar9 + 0x38 + (ulong)(*(int *)(lVar10 + 0x28) - 1) * 0x10);
                _CFDataGetBytePtr(p_Var23);
                if (((byte)*psVar17 & 1) == 0) {
                  psVar18 = psVar17 + 1;
                  sVar15 = (size_t)((byte)*psVar17 >> 1);
                }
                else {
                  psVar18 = *(string **)(psVar17 + 0x10);
                  sVar15 = *(size_t *)(psVar17 + 8);
                }
                local_80 = local_80 + lVar8;
                local_78 = local_78 + (ulong)uVar7;
                _strncpy(local_a8,(char *)psVar18,sVar15);
                local_a0 = _CFDataGetLength(local_98);
                local_9c = 0;
                lVar9 = _CFDataGetBytePtr(p_Var23);
                local_58 = this;
                if (*(int *)(lVar9 + 0x14) == 0) {
                  local_50 = (__CFData *)0x0;
                  local_60 = (string *)0x0;
                  local_88 = 0;
LAB_0021a158:
                  lVar8 = _CFDataGetBytePtr(p_Var23);
                  if (*(int *)(lVar8 + 0x28) != 0) {
                    lVar8 = 0;
                    uVar22 = 0;
                    do {
                      lVar9 = _CFDataGetBytePtr(p_Var23);
                      piVar1 = (int *)(lVar9 + 0x34 + lVar8);
                      *piVar1 = *piVar1 + 0x10;
                      if (local_68 == (__CFData **)0x0) {
                        lVar9 = _CFDataGetBytePtr(p_Var23);
                        uVar5 = (ulong)local_48;
                        local_48._0_5_ = CONCAT41(*(undefined4 *)(lVar9 + 0x30 + lVar8),8);
                        local_48._6_2_ = SUB82(uVar5,6);
                        local_48._0_6_ = (uint6)(uint5)local_48;
                        lVar9 = _CFDataGetBytePtr(p_Var23);
                        cVar6 = updateCache(local_58,(string *)&local_48,
                                            *(uint *)(lVar9 + 0x34 + lVar8),0);
                        if (cVar6 == '\0') {
                          uVar12 = ACFULogging::getLogInstance();
                          ACFULogging::handleMessage
                                    (uVar12,2,"%s::%s: failed to update cache\n","ACFUFTABFile",
                                     "addNewFileToFTABOnData");
                        }
                        if (((ulong)local_48 & 1) != 0) {
                          operator_delete(local_38);
                        }
                        if (cVar6 != '\0') goto LAB_0021a1db;
LAB_0021a4c0:
                        uVar22 = 0;
                        p_Var23 = local_50;
                        p_Var16 = local_70;
                        goto LAB_0021a492;
                      }
LAB_0021a1db:
                      if ((char)local_60 != '\0') {
                        lVar9 = _CFDataGetBytePtr(p_Var23);
                        piVar1 = (int *)(lVar9 + 0x34 + lVar8);
                        *piVar1 = *piVar1 - (int)local_88;
                        if (local_68 == (__CFData **)0x0) {
                          lVar9 = _CFDataGetBytePtr(p_Var23);
                          uVar5 = (ulong)local_48;
                          local_48._0_5_ = CONCAT41(*(undefined4 *)(lVar9 + 0x30 + lVar8),8);
                          local_48._6_2_ = SUB82(uVar5,6);
                          local_48._0_6_ = (uint6)(uint5)local_48;
                          lVar9 = _CFDataGetBytePtr(p_Var23);
                          cVar6 = updateCache(local_58,(string *)&local_48,
                                              *(uint *)(lVar9 + 0x34 + lVar8),0);
                          if (cVar6 == '\0') {
                            uVar12 = ACFULogging::getLogInstance();
                            ACFULogging::handleMessage
                                      (uVar12,2,"%s::%s: failed to update cache\n","ACFUFTABFile",
                                       "addNewFileToFTABOnData");
                          }
                          if (((ulong)local_48 & 1) != 0) {
                            operator_delete(local_38);
                          }
                          if (cVar6 == '\0') goto LAB_0021a4c0;
                        }
                      }
                      uVar22 = uVar22 + 1;
                      lVar9 = _CFDataGetBytePtr(p_Var23);
                      lVar8 = lVar8 + 0x10;
                    } while (uVar22 < *(uint *)(lVar9 + 0x28));
                  }
                  lVar8 = _CFDataGetBytePtr(p_Var23);
                  lVar9 = _CFDataGetBytePtr(p_Var23);
                  iVar3 = *(int *)(lVar8 + 0x34 + (ulong)(*(int *)(lVar9 + 0x28) - 1) * 0x10);
                  lVar8 = _CFDataGetBytePtr(p_Var23);
                  lVar9 = _CFDataGetBytePtr(p_Var23);
                  local_a4 = iVar3 + *(int *)(lVar8 + 0x38 +
                                             (ulong)(*(int *)(lVar9 + 0x28) - 1) * 0x10);
                  lVar8 = _CFDataGetBytePtr(p_Var23);
                  *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + 1;
                  uVar12 = _CFDataGetBytePtr(p_Var23);
                  p_Var16 = local_70;
                  _CFDataAppendBytes(local_70,uVar12,0x30);
                  lVar8 = _CFDataGetBytePtr(p_Var23);
                  lVar9 = _CFDataGetBytePtr(p_Var23);
                  _CFDataAppendBytes(p_Var16,lVar8 + 0x30,(ulong)(*(int *)(lVar9 + 0x28) - 1) << 4);
                  _CFDataAppendBytes(p_Var16,local_a8,0x10);
                  _CFDataAppendBytes(p_Var16,local_80,local_78 - local_80);
                  p_Var23 = local_98;
                  p_Var13 = (__CFData *)_CFDataGetBytePtr(local_98);
                  uVar12 = _CFDataGetLength(p_Var23);
                  _CFDataAppendBytes(p_Var16,p_Var13,uVar12);
                  p_Var23 = local_50;
                  pAVar11 = local_58;
                  pp_Var4 = local_68;
                  if (local_68 == (__CFData **)0x0) {
                    pAVar19 = *(ACFUDataContainer **)(local_58 + 8);
                    p_Var13 = p_Var16;
                    cVar6 = ACFUDataContainer::setData(pAVar19,p_Var16);
                    p_Var23 = local_50;
                    if (cVar6 == '\0') {
                      addNewFileToFTABOnData((string *)pAVar19,p_Var13,extraout_RDX_03);
                    }
                    else {
                      psVar17 = local_90;
                      pAVar21 = pAVar11;
                      cVar6 = updateCache(pAVar11,local_90,local_a4,local_a0);
                      if (cVar6 == '\0') {
                        addNewFileToFTABOnData
                                  ((string *)pAVar21,(__CFData *)psVar17,extraout_RDX_04);
                      }
                      else if ((p_Var23 == (__CFData *)0x0) ||
                              (p_Var13 = p_Var23, pAVar21 = pAVar11,
                              cVar6 = setManifestOnData(pAVar11,p_Var23,(__CFData **)0x0),
                              cVar6 != '\0')) {
                        cVar6 = (**(code **)(*(long *)pAVar11 + 0x58))(pAVar11);
                        if (cVar6 != '\0') {
                          uVar7 = isCacheValid(pAVar11);
                          goto LAB_0021a490;
                        }
                      }
                      else {
                        addNewFileToFTABOnData((string *)pAVar21,p_Var13,extraout_RDX_05);
                      }
                    }
                  }
                  else {
                    if (*local_68 != (__CFData *)0x0) {
                      _CFRelease();
                      *pp_Var4 = (__CFData *)0x0;
                    }
                    p_Var20 = p_Var16;
                    auVar24 = _AMSupportSafeRetain();
                    p_Var14 = auVar24._0_8_;
                    *pp_Var4 = p_Var14;
                    if (p_Var14 != (__CFData *)0x0) {
                      if (p_Var23 != (__CFData *)0x0) {
                        p_Var13 = p_Var23;
                        pAVar21 = pAVar11;
                        cVar6 = setManifestOnData(pAVar11,p_Var23,pp_Var4);
                        if (cVar6 == '\0') {
                          addNewFileToFTABOnData((string *)pAVar21,p_Var13,extraout_RDX_02);
                          goto LAB_0021a50f;
                        }
                        p_Var14 = *pp_Var4;
                      }
                      uVar7 = isValidFileData(pAVar11,p_Var14,false);
LAB_0021a490:
                      uVar22 = (ulong)uVar7;
                      goto LAB_0021a492;
                    }
                    addNewFileToFTABOnData((string *)p_Var20,p_Var13,auVar24._8_8_);
                  }
                  goto LAB_0021a50f;
                }
                pAVar11 = (ACFUFTABFile *)ACFULogging::getLogInstance();
                ACFULogging::handleMessage
                          (pAVar11,0,"%s::%s: manifest existing in FTAB is being deleted\n",
                           "ACFUFTABFile","addNewFileToFTABOnData");
                uVar7 = removeManifestPadding(pAVar11,p_Var23);
                lVar9 = _CFDataGetBytePtr(p_Var23);
                p_Var16 = (__CFData *)((ulong)*(uint *)(lVar9 + 0x10) + lVar8);
                lVar9 = _CFDataGetBytePtr(p_Var23);
                local_88 = (ulong)*(uint *)(lVar9 + 0x14);
                lVar9 = _CFDataGetBytePtr(p_Var23);
                psVar17 = local_60;
                auVar24 = _CFDataCreate(local_60,p_Var16,*(undefined4 *)(lVar9 + 0x14));
                local_50 = auVar24._0_8_;
                if (local_50 != (__CFData *)0x0) {
                  lVar9 = _CFDataGetBytePtr(p_Var23);
                  uVar2 = *(undefined4 *)(lVar9 + 0x10);
                  lVar9 = _CFDataGetBytePtr(p_Var23);
                  _CFDataDeleteBytes(p_Var23,uVar2,*(undefined4 *)(lVar9 + 0x14));
                  local_60 = (string *)(ulong)uVar7;
                  if ((char)uVar7 != '\0') {
                    lVar9 = _CFDataGetBytePtr(p_Var23);
                    lVar8 = lVar8 - local_88;
                    local_80 = (ulong)*(uint *)(lVar9 + 0x34) + lVar8;
                    lVar9 = _CFDataGetBytePtr(p_Var23);
                    lVar10 = _CFDataGetBytePtr(p_Var23);
                    uVar7 = *(uint *)(lVar9 + 0x34 + (ulong)(*(int *)(lVar10 + 0x28) - 1) * 0x10);
                    lVar9 = _CFDataGetBytePtr(p_Var23);
                    lVar10 = _CFDataGetBytePtr(p_Var23);
                    local_78 = (ulong)uVar7 + lVar8 +
                               (ulong)*(uint *)(lVar9 + 0x38 +
                                               (ulong)(*(int *)(lVar10 + 0x28) - 1) * 0x10);
                  }
                  lVar8 = _CFDataGetBytePtr(p_Var23);
                  *(undefined4 *)(lVar8 + 0x14) = 0;
                  lVar8 = _CFDataGetBytePtr(p_Var23);
                  *(undefined4 *)(lVar8 + 0x10) = 0;
                  goto LAB_0021a158;
                }
                addNewFileToFTABOnData(psVar17,p_Var16,auVar24._8_8_);
                p_Var23 = (__CFData *)0x0;
                uVar22 = 0;
                p_Var16 = local_70;
              }
LAB_0021a492:
              if (p_Var16 != (__CFData *)0x0) {
                _CFRelease(p_Var16);
              }
              if (p_Var23 != (__CFData *)0x0) {
                _CFRelease(p_Var23);
              }
              goto LAB_0021a4ac;
            }
            psVar17 = param_1;
            uVar22 = std::
                     __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                     ::__count_unique<std::string>
                               ((__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                                 *)(this + 0x48),param_1);
            if (uVar22 == 0) {
              uVar12 = _AMSupportSafeRetain(param_2);
              local_48 = param_1;
              lVar8 = std::
                      __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                      ::
                      __emplace_unique_key_args<std::string,std::piecewise_construct_t_const&,std::tuple<std::string_const&>,std::tuple<>>
                                ((string *)(this + 0x48),(piecewise_construct_t *)param_1,
                                 (tuple *)&std::piecewise_construct,(tuple *)&local_48);
              *(undefined8 *)(lVar8 + 0x38) = uVar12;
              uVar22 = CONCAT71((int7)((ulong)param_1 >> 8),1);
              goto LAB_0021a4ac;
            }
            addNewFileToFTABOnData(param_1,(__CFData *)psVar17,extraout_RDX_01);
          }
          else {
            p_Var16 = *param_3;
            if (p_Var16 == (__CFData *)0x0) {
              addNewFileToFTABOnData((string *)pAVar11,(__CFData *)0x0,extraout_RDX);
            }
            else {
              pAVar19 = (ACFUDataContainer *)this;
              cVar6 = isValidFileData(this,p_Var16,false);
              if (cVar6 != '\0') {
                auVar24._8_8_ = extraout_RDX_00;
                auVar24._0_8_ = *param_3;
                goto LAB_00219f1d;
              }
              addNewFileToFTABOnData((string *)pAVar19,p_Var16,extraout_RDX_00);
            }
          }
        }
        else {
          addNewFileToFTABOnData(param_1,p_Var16,extraout_RDX);
        }
      }
      else {
        addNewFileToFTABOnData(param_1,(__CFData *)(param_1 + 8),auVar24._8_8_);
      }
    }
  }
  uVar22 = 0;
LAB_0021a4ac:
  return uVar22 & 0xffffff01;
}

