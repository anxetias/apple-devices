// rea decompile_all
// name: ACFURestoreHost::validateDeviceInfoAgainstBuildIdentity
// address: 0x213d64
// body: available
// range: 0x213d64-0x2146b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::validateDeviceInfoAgainstBuildIdentity(std::vector<__CFString const*,
   std::allocator<__CFString const*> > const&, std::vector<__CFString const*,
   std::allocator<__CFString const*> > const&, __CFDictionary const*, __CFDictionary const*,
   std::map<__CFString const*, unsigned long, std::less<__CFString const*>,
   std::allocator<std::pair<__CFString const* const, unsigned long> > >) */

ulong ACFURestoreHost::validateDeviceInfoAgainstBuildIdentity
                (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                *param_5)

{
  map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
  *pmVar1;
  __CFString **pp_Var2;
  long *plVar3;
  __CFString *p_Var4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  long *plVar9;
  void *pvVar10;
  void *pvVar11;
  map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
  *pmVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  void *pvVar18;
  ACFULogging *pAVar19;
  map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
  *pmVar20;
  char *pcVar21;
  ulong unaff_RBX;
  __CFString **pp_Var22;
  void *pvVar23;
  byte local_b0 [16];
  void *local_a0;
  ulong local_98;
  ACFUCommon local_90;
  undefined1 local_8f [15];
  undefined1 *local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  ulong uStack_60;
  void *local_58;
  undefined8 local_48;
  ulong uStack_40;
  void *local_38;
  
  pp_Var22 = (__CFString **)*param_1;
  pp_Var2 = (__CFString **)param_1[1];
  if (pp_Var22 == pp_Var2) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  }
  else {
    pmVar1 = param_5 + 8;
    local_78 = 0;
    local_70 = 0;
    do {
      plVar9 = (long *)*param_2;
      plVar3 = (long *)param_2[1];
      if (plVar9 == plVar3) {
LAB_00213de5:
        if (plVar9 != plVar3) {
          ACFUCommon::stringFromCFString(&local_90,*pp_Var22);
          pvVar10 = (void *)_CFDictionaryGetValue(param_3,*pp_Var22);
          if (pvVar10 == (void *)0x0) {
            uVar13 = ACFULogging::getLogInstance();
            pcVar21 = "%s::%s: tag \'%s\' not found in device info, skipping validation\n";
LAB_00213e9f:
            puVar17 = local_8f;
            if (((byte)local_90 & 1) != 0) {
              puVar17 = local_80;
            }
            unaff_RBX = 3;
            bVar5 = false;
            ACFULogging::handleMessage
                      (uVar13,3,pcVar21,"ACFURestoreHost","validateDeviceInfoAgainstBuildIdentity",
                       puVar17);
          }
          else {
            pvVar11 = (void *)_CFDictionaryGetValue(param_4,*pp_Var22);
            if (pvVar11 == (void *)0x0) {
              uVar13 = ACFULogging::getLogInstance();
              pcVar21 = "%s::%s: tag \'%s\' not found in build identity, skipping validation\n";
              goto LAB_00213e9f;
            }
            pmVar12 = *(map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                        **)pmVar1;
            if (pmVar12 ==
                (map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                 *)0x0) {
LAB_00213e77:
              uVar13 = ACFULogging::getLogInstance();
              pcVar21 = "%s::%s: tag \'%s\' not found in tss-request map, skipping validation\n";
              goto LAB_00213e9f;
            }
            p_Var4 = *pp_Var22;
            pmVar20 = pmVar1;
            do {
              if (*(__CFString **)(pmVar12 + 0x20) >= p_Var4) {
                pmVar20 = pmVar12;
              }
              pmVar12 = *(map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                          **)(pmVar12 + (ulong)(*(__CFString **)(pmVar12 + 0x20) < p_Var4) * 8);
            } while (pmVar12 !=
                     (map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                      *)0x0);
            if ((pmVar20 == pmVar1) || (p_Var4 < *(__CFString **)(pmVar20 + 0x20)))
            goto LAB_00213e77;
            uVar14 = _CFGetTypeID(pvVar10);
            uVar15 = _CFGetTypeID(pvVar11);
            puVar16 = (ulong *)std::
                               map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                               ::at(param_5,pp_Var22);
            local_98 = *puVar16;
            uVar13 = ACFULogging::getLogInstance();
            puVar17 = local_8f;
            if (((byte)local_90 & 1) != 0) {
              puVar17 = local_80;
            }
            ACFUCommon::cfTypeDescription((ACFUCommon *)&local_68,uVar14,true);
            pvVar23 = local_58;
            uVar7 = local_68;
            ACFUCommon::cfTypeDescription((ACFUCommon *)&local_48,local_98,true);
            if ((uVar7 & 1) == 0) {
              pvVar23 = (void *)((long)&local_68 + 1);
            }
            pvVar18 = (void *)((long)&local_48 + 1);
            if ((local_48 & 1) != 0) {
              pvVar18 = local_38;
            }
            ACFULogging::handleMessage
                      (uVar13,4,
                       "%s::%s: attempting to convert tag \'%s\' from device info type (%s) to tss-request map type (%s)\n"
                       ,"ACFURestoreHost","validateDeviceInfoAgainstBuildIdentity",puVar17,pvVar23,
                       pvVar18);
            lVar6 = local_70;
            if ((local_48 & 1) != 0) {
              operator_delete(local_38);
            }
            if ((local_68 & 1) != 0) {
              operator_delete(local_58);
            }
            if (lVar6 != 0) {
              _CFRelease(local_70);
            }
            local_70 = convertCFType(pvVar10,local_98);
            if (local_70 == 0) {
              uVar13 = ACFULogging::getLogInstance();
              puVar17 = local_8f;
              if (((byte)local_90 & 1) != 0) {
                puVar17 = local_80;
              }
              ACFUCommon::cfTypeDescription((ACFUCommon *)&local_68,uVar14,true);
              pvVar10 = local_58;
              uVar14 = local_68;
              ACFUCommon::cfTypeDescription((ACFUCommon *)&local_48,local_98,true);
              if ((uVar14 & 1) == 0) {
                pvVar10 = (void *)((long)&local_68 + 1);
              }
              pvVar11 = (void *)((long)&local_48 + 1);
              if ((local_48 & 1) != 0) {
                pvVar11 = local_38;
              }
              ACFULogging::handleMessage
                        (uVar13,2,
                         "%s::%s: failed to convert tag \'%s\' from device info type (%s) to tss-request map type (%s)\n"
                         ,"ACFURestoreHost","validateDeviceInfoAgainstBuildIdentity",puVar17,pvVar10
                         ,pvVar11);
              if ((local_48 & 1) != 0) {
                operator_delete(local_38);
              }
              if ((local_68 & 1) != 0) {
                operator_delete(local_58);
              }
              local_70 = 0;
LAB_0021466f:
              unaff_RBX = 8;
              bVar5 = false;
            }
            else {
              uVar13 = ACFULogging::getLogInstance();
              puVar17 = local_8f;
              if (((byte)local_90 & 1) != 0) {
                puVar17 = local_80;
              }
              ACFUCommon::cfTypeDescription((ACFUCommon *)&local_68,uVar15,true);
              pvVar23 = local_58;
              uVar14 = local_68;
              ACFUCommon::cfTypeDescription((ACFUCommon *)&local_48,local_98,true);
              if ((uVar14 & 1) == 0) {
                pvVar23 = (void *)((long)&local_68 + 1);
              }
              pvVar18 = (void *)((long)&local_48 + 1);
              if ((local_48 & 1) != 0) {
                pvVar18 = local_38;
              }
              ACFULogging::handleMessage
                        (uVar13,4,
                         "%s::%s: attempting to convert tag \'%s\' from build identity type (%s) to tss-request map type (%s)\n"
                         ,"ACFURestoreHost","validateDeviceInfoAgainstBuildIdentity",puVar17,pvVar23
                         ,pvVar18);
              if ((local_48 & 1) != 0) {
                operator_delete(local_38);
              }
              if ((local_68 & 1) != 0) {
                operator_delete(local_58);
              }
              if (local_78 != 0) {
                _CFRelease(local_78);
              }
              local_78 = convertCFType(pvVar11,local_98);
              if (local_78 == 0) {
                uVar13 = ACFULogging::getLogInstance();
                puVar17 = local_8f;
                if (((byte)local_90 & 1) != 0) {
                  puVar17 = local_80;
                }
                ACFUCommon::cfTypeDescription((ACFUCommon *)&local_68,uVar15,true);
                pvVar10 = local_58;
                uVar14 = local_68;
                ACFUCommon::cfTypeDescription((ACFUCommon *)&local_48,local_98,true);
                if ((uVar14 & 1) == 0) {
                  pvVar10 = (void *)((long)&local_68 + 1);
                }
                pvVar11 = (void *)((long)&local_48 + 1);
                if ((local_48 & 1) != 0) {
                  pvVar11 = local_38;
                }
                ACFULogging::handleMessage
                          (uVar13,2,
                           "%s::%s: failed to convert tag \'%s\' from build identity type (%s) to tss-request map type (%s)\n"
                           ,"ACFURestoreHost","validateDeviceInfoAgainstBuildIdentity",puVar17,
                           pvVar10,pvVar11);
                if ((local_48 & 1) != 0) {
                  operator_delete(local_38);
                }
                if ((local_68 & 1) != 0) {
                  operator_delete(local_58);
                }
                local_78 = 0;
                goto LAB_0021466f;
              }
              cVar8 = _CFEqual(local_70);
              if (cVar8 == '\0') {
                uVar13 = ACFULogging::getLogInstance();
                puVar17 = local_8f;
                if (((byte)local_90 & 1) != 0) {
                  puVar17 = local_80;
                }
                ACFULogging::handleMessage
                          (uVar13,2,
                           "%s::%s: tag \'%s\' has different values in device info and build identity\n"
                           ,"ACFURestoreHost","validateDeviceInfoAgainstBuildIdentity",puVar17);
                pAVar19 = (ACFULogging *)ACFULogging::getLogInstance();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                          (local_b0,"ACFURestoreHost");
                puVar16 = (ulong *)std::string::append((char *)local_b0);
                local_38 = (void *)puVar16[2];
                local_48 = *puVar16;
                uStack_40 = puVar16[1];
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                puVar16 = (ulong *)std::string::append((char *)&local_48);
                local_58 = (void *)puVar16[2];
                local_68 = *puVar16;
                uStack_60 = puVar16[1];
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                ACFULogging::handleMessageCFType(pAVar19,&local_68,2,"device info value: ",pvVar10);
                if ((local_68 & 1) != 0) {
                  operator_delete(local_58);
                }
                if ((local_48 & 1) != 0) {
                  operator_delete(local_38);
                }
                if ((local_b0[0] & 1) != 0) {
                  operator_delete(local_a0);
                }
                pAVar19 = (ACFULogging *)ACFULogging::getLogInstance();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                          (local_b0,"ACFURestoreHost");
                puVar16 = (ulong *)std::string::append((char *)local_b0);
                local_38 = (void *)puVar16[2];
                local_48 = *puVar16;
                uStack_40 = puVar16[1];
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                puVar16 = (ulong *)std::string::append((char *)&local_48);
                local_58 = (void *)puVar16[2];
                local_68 = *puVar16;
                uStack_60 = puVar16[1];
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                ACFULogging::handleMessageCFType
                          (pAVar19,&local_68,2,"device info value converted: ",local_70);
                if ((local_68 & 1) != 0) {
                  operator_delete(local_58);
                }
                if ((local_48 & 1) != 0) {
                  operator_delete(local_38);
                }
                if ((local_b0[0] & 1) != 0) {
                  operator_delete(local_a0);
                }
                pAVar19 = (ACFULogging *)ACFULogging::getLogInstance();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                          (local_b0,"ACFURestoreHost");
                puVar16 = (ulong *)std::string::append((char *)local_b0);
                local_38 = (void *)puVar16[2];
                local_48 = *puVar16;
                uStack_40 = puVar16[1];
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                puVar16 = (ulong *)std::string::append((char *)&local_48);
                local_58 = (void *)puVar16[2];
                local_68 = *puVar16;
                uStack_60 = puVar16[1];
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                ACFULogging::handleMessageCFType
                          (pAVar19,&local_68,2,"build identity value: ",pvVar11);
                if ((local_68 & 1) != 0) {
                  operator_delete(local_58);
                }
                if ((local_48 & 1) != 0) {
                  operator_delete(local_38);
                }
                if ((local_b0[0] & 1) != 0) {
                  operator_delete(local_a0);
                }
                pAVar19 = (ACFULogging *)ACFULogging::getLogInstance();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                          (local_b0,"ACFURestoreHost");
                puVar16 = (ulong *)std::string::append((char *)local_b0);
                local_38 = (void *)puVar16[2];
                local_48 = *puVar16;
                uStack_40 = puVar16[1];
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                puVar16 = (ulong *)std::string::append((char *)&local_48);
                local_58 = (void *)puVar16[2];
                local_68 = *puVar16;
                uStack_60 = puVar16[1];
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                ACFULogging::handleMessageCFType
                          (pAVar19,&local_68,2,"build identity value converted: ",local_78);
                if ((local_68 & 1) != 0) {
                  operator_delete(local_58);
                }
                if ((local_48 & 1) != 0) {
                  operator_delete(local_38);
                }
                if ((local_b0[0] & 1) != 0) {
                  operator_delete(local_a0);
                }
                goto LAB_0021466f;
              }
              unaff_RBX = 0;
              bVar5 = true;
            }
          }
          if (((byte)local_90 & 1) != 0) {
            operator_delete(local_80);
          }
          if (!bVar5) {
            switch(unaff_RBX) {
            case 0:
            case 3:
              break;
            default:
              goto LAB_0021469c;
            case 2:
              goto switchD_00213f26_caseD_2;
            case 8:
              unaff_RBX = 0;
              goto LAB_00214679;
            }
          }
        }
      }
      else {
        do {
          if ((__CFString *)*plVar9 == *pp_Var22) goto LAB_00213de5;
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar3);
      }
      pp_Var22 = pp_Var22 + 1;
    } while (pp_Var22 != pp_Var2);
switchD_00213f26_caseD_2:
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
LAB_00214679:
    lVar6 = local_78;
    if (local_70 != 0) {
      _CFRelease();
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
  }
LAB_0021469c:
  return unaff_RBX & 0xffffff01;
}

