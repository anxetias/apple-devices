// rea decompile_all
// name: _AMAuthInstallMaverickLocalCreateRootTicket
// address: 0x1adcad
// body: available
// range: 0x1adcad-0x1b1494 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b1490 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMAuthInstallMaverickLocalCreateRootTicket
          (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  size_t sVar14;
  undefined8 uVar15;
  char *pcVar16;
  ulong unaff_R15;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  int local_144;
  ulong local_140;
  ulong local_138 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_160 = 0;
  _AMAuthInstallMonetLocalRegisterKeys();
  lVar5 = _DEREncoderCreate(1);
  if (lVar5 == 0) {
LAB_001b147d:
    _AMAuthInstallMaverickLocalCreateRootTicket_cold_102();
    uVar2 = 3;
  }
  else {
    uVar6 = _CFDictionaryGetValue(param_2,&cf_BbSNUM);
    local_144 = -1;
    local_140 = uVar6;
    if (uVar6 != 0) {
      lVar7 = _CFGetTypeID(uVar6);
      lVar8 = _CFDataGetTypeID();
      unaff_R15 = uVar6;
      if (lVar7 == lVar8) {
        uVar9 = _CFDataGetBytePtr(uVar6);
        uVar2 = _CFDataGetLength(uVar6);
        local_144 = 0;
        iVar3 = _DEREncoderAddData(lVar5,2,0x3f,uVar9,uVar2,0);
        if (iVar3 != 0) {
          _AMAuthInstallMaverickLocalCreateRootTicket_cold_1();
          goto LAB_001b147d;
        }
      }
    }
    uVar6 = _CFDictionaryGetValue(param_2,&cf_BbChipID);
    if (uVar6 != 0) {
      lVar7 = _CFGetTypeID(uVar6);
      lVar8 = _CFNumberGetTypeID();
      unaff_R15 = uVar6;
      if ((lVar7 != lVar8) || (cVar1 = _CFNumberGetValue(uVar6,3,local_138), cVar1 == '\0'))
      goto LAB_001ade00;
      iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0x40,local_138[0] & 0xffffffff);
      local_144 = 0;
      if (iVar3 == 0) goto LAB_001ade00;
      pcVar16 = "failed to add chipID to DER file";
LAB_001b1471:
      _AMAuthInstallLog(3,"AMAuthInstallMaverickLocalCreateRootTicket",pcVar16);
      goto LAB_001b147d;
    }
LAB_001ade00:
    uVar6 = _CFDictionaryGetValue(param_2,&cf_BbGoldCertId);
    if (uVar6 != 0) {
      lVar7 = _CFGetTypeID(uVar6);
      lVar8 = _CFNumberGetTypeID();
      unaff_R15 = uVar6;
      if ((lVar7 == lVar8) && (cVar1 = _CFNumberGetValue(uVar6,3,local_138), cVar1 != '\0')) {
        iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0x58,local_138[0] & 0xffffffff);
        local_144 = 0;
        if (iVar3 != 0) {
          pcVar16 = "failed to add certID to DER file";
          goto LAB_001b1471;
        }
      }
    }
    local_140 = _CFDictionaryGetValue(param_2,&cf_BbNonce);
    if (local_140 != 0) {
      unaff_R15 = _CFGetTypeID(local_140);
      uVar6 = _CFDataGetTypeID();
      if (unaff_R15 == uVar6) {
        unaff_R15 = _CFDataGetBytePtr(local_140);
        uVar2 = _CFDataGetLength(local_140);
        local_144 = 0;
        iVar3 = _DEREncoderAddData(lVar5,2,0x44,unaff_R15,uVar2,0);
        if (iVar3 != 0) {
          _AMAuthInstallMaverickLocalCreateRootTicket_cold_2();
          goto LAB_001b147d;
        }
      }
    }
    local_140 = _CFDictionaryGetValue(param_2,&cf_BbProvisioningManifestKeyHash);
    if (local_140 == 0) {
      iVar3 = _AMAuthInstallMonetLocalCreateDigestForKey
                        (param_1,&cf_bb_monet_ticket_provisioning_public,&local_140);
      if (iVar3 == 0) goto LAB_001adf16;
      local_140 = 0;
    }
    else {
      _CFRetain(local_140);
LAB_001adf16:
      if (local_140 != 0) {
        uVar9 = _CFDataGetBytePtr();
        uVar2 = _CFDataGetLength(local_140);
        local_144 = 0;
        uVar4 = _DEREncoderAddData(lVar5,2,200,uVar9,uVar2,0);
        unaff_R15 = (ulong)uVar4;
        _CFRelease(local_140);
        if (uVar4 != 0) {
          _AMAuthInstallMaverickLocalCreateRootTicket_cold_3();
          goto LAB_001b147d;
        }
      }
    }
    local_140 = _CFDictionaryGetValue(param_2,&cf_BbActivationManifestKeyHash);
    if (local_140 == 0) {
      iVar3 = _AMAuthInstallMonetLocalCreateDigestForKey
                        (param_1,&cf_bb_monet_ticket_activation_public,&local_140);
      if (iVar3 == 0) goto LAB_001adf9d;
      local_140 = 0;
    }
    else {
      _CFRetain(local_140);
LAB_001adf9d:
      if (local_140 != 0) {
        uVar9 = _CFDataGetBytePtr();
        uVar2 = _CFDataGetLength(local_140);
        local_144 = 0;
        uVar4 = _DEREncoderAddData(lVar5,2,0xc9,uVar9,uVar2,0);
        unaff_R15 = (ulong)uVar4;
        _CFRelease(local_140);
        if (uVar4 != 0) {
          _AMAuthInstallMaverickLocalCreateRootTicket_cold_4();
          goto LAB_001b147d;
        }
      }
    }
    local_140 = _CFDictionaryGetValue(param_2,&cf_BbCalibrationManifestKeyHash);
    if (local_140 == 0) {
      iVar3 = _AMAuthInstallMonetLocalCreateDigestForKey
                        (param_1,&cf_bb_monet_ticket_calibration_public,&local_140);
      if (iVar3 == 0) goto LAB_001ae024;
      local_140 = 0;
    }
    else {
      _CFRetain(local_140);
LAB_001ae024:
      if (local_140 != 0) {
        uVar9 = _CFDataGetBytePtr();
        uVar2 = _CFDataGetLength(local_140);
        local_144 = 0;
        uVar4 = _DEREncoderAddData(lVar5,2,0xca,uVar9,uVar2,0);
        unaff_R15 = (ulong)uVar4;
        _CFRelease(local_140);
        if (uVar4 != 0) {
          _AMAuthInstallMaverickLocalCreateRootTicket_cold_5();
          goto LAB_001b147d;
        }
      }
    }
    local_140 = _CFDictionaryGetValue(param_2,&cf_BbFactoryActivationManifestKeyHash);
    if (local_140 != 0) {
      unaff_R15 = _CFDataGetBytePtr(local_140);
      uVar2 = _CFDataGetLength(local_140);
      local_144 = 0;
      iVar3 = _DEREncoderAddData(lVar5,2,0xe3,unaff_R15,uVar2,0);
      if (iVar3 != 0) {
        _AMAuthInstallMaverickLocalCreateRootTicket_cold_6();
        goto LAB_001b147d;
      }
    }
    local_140 = _CFDictionaryGetValue(param_2,&cf_BbFDRSecurityKeyHash);
    if (local_140 == 0) {
LAB_001ae13a:
      _AMAuthInstallLog(3,"AMAuthInstallMaverickLocalCreateRootTicket","Fetching Trust object....");
      iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 4);
      if ((iVar3 == 0x68) || (iVar3 == 0x5e)) {
        local_158 = 0;
        uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar7 = _AMSupportCreateURLFromString(uVar9,&cf_http___gg_apple_com_fdrtrustobject);
        if (lVar7 == 0) {
          _AMAuthInstallMaverickLocalCreateRootTicket_cold_9();
LAB_001b0fae:
          uVar6 = 0;
        }
        else {
          iVar3 = _AMSupportHttpCreateDataFromURL(uVar9,lVar7,0,&local_158);
          if (iVar3 == 0) {
            if (local_158 == 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_8();
              goto LAB_001b0fae;
            }
            uVar10 = _CFDataGetBytePtr();
            uVar11 = _CFDataGetLength(local_158);
            iVar3 = _AMSupportDigestSha384(uVar10,uVar11,local_138);
            if (iVar3 != 0) {
              pcVar16 = "AMSupportDigestSha384 returned %d";
              goto LAB_001b0f93;
            }
            uVar6 = _CFDataCreate(uVar9,local_138,0x30);
            if (uVar6 == 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_7();
              goto LAB_001b0fae;
            }
          }
          else {
            pcVar16 = "AMSupportHttpCreateDataFromURL returned %d";
LAB_001b0f93:
            uVar6 = 0;
            _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateFDRDefaultTrustObjectDigestSha384",
                              pcVar16,iVar3);
          }
        }
        _AMSupportSafeRelease(lVar7);
        _AMSupportSafeRelease(local_158);
      }
      else {
        local_138[0] = 0;
        uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar7 = _AMSupportCreateURLFromString(uVar9,&cf_http___gg_apple_com_fdrtrustobject);
        if (lVar7 == 0) {
          _AMAuthInstallMaverickLocalCreateRootTicket_cold_12();
LAB_001b100e:
          uVar6 = 0;
        }
        else {
          iVar3 = _AMSupportHttpCreateDataFromURL(uVar9,lVar7,0,local_138);
          if (iVar3 != 0) {
            _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateFDRDefaultTrustObjectDigest",
                              "AMSupportHttpCreateDataFromURL returned %d",iVar3);
            goto LAB_001b100e;
          }
          if (local_138[0] == 0) {
            _AMAuthInstallMaverickLocalCreateRootTicket_cold_11();
            goto LAB_001b100e;
          }
          iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 4);
          local_150 = param_2;
          if (iVar3 < 0x1720e1) {
            if (((iVar3 != 0x7f0e1) && (iVar3 != 0xe50e1)) && (iVar3 != 0x1440e1))
            goto LAB_001b0e58;
LAB_001ae2e1:
            unaff_R15 = _CFDataCreateMutable(uVar9,0);
            _CFDataIncreaseLength(unaff_R15,0x30);
            uVar10 = _CFDataGetBytePtr(local_138[0]);
            uVar11 = _CFDataGetLength(local_138[0]);
            uVar15 = _CFDataGetMutableBytePtr(unaff_R15);
            iVar3 = _AMSupportDigestSha384(uVar10,uVar11,uVar15);
            if (iVar3 != 0) {
              pcVar16 = "AMSupportDigestSha384 returned %d";
              goto LAB_001b1042;
            }
LAB_001ae337:
            param_2 = local_150;
            uVar6 = _CFDataCreateCopy(uVar9,unaff_R15);
            if (uVar6 == 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_10();
              uVar6 = 0;
            }
          }
          else {
            if (0x1fe0e0 < iVar3) {
              if ((iVar3 != 0x2af0e1) && (iVar3 != 0x1fe0e1)) goto LAB_001b0e58;
              goto LAB_001ae2e1;
            }
            if ((iVar3 == 0x1720e1) || (iVar3 == 0x19f0e1)) goto LAB_001ae2e1;
LAB_001b0e58:
            unaff_R15 = _CFDataCreateMutable(uVar9,0);
            _CFDataIncreaseLength(unaff_R15,0x20);
            uVar10 = _CFDataGetBytePtr(local_138[0]);
            uVar11 = _CFDataGetLength(local_138[0]);
            uVar15 = _CFDataGetMutableBytePtr(unaff_R15);
            iVar3 = _AMSupportDigestSha256(uVar10,uVar11,uVar15);
            if (iVar3 == 0) goto LAB_001ae337;
            pcVar16 = "AMSupportDigestSha256 returned %d";
LAB_001b1042:
            uVar6 = 0;
            _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateFDRDefaultTrustObjectDigest",pcVar16,
                              iVar3);
            param_2 = local_150;
          }
        }
        _AMSupportSafeRelease(lVar7);
        _AMSupportSafeRelease(local_138[0]);
        _AMSupportSafeRetain(unaff_R15);
      }
      local_140 = uVar6;
      if (uVar6 == 0) {
        lVar7 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallMaverickLocalCreateRootTicket",
                          "Failed to get default FDR trust object digest.");
        if (local_144 == 0) {
          uVar2 = 0x10;
          goto LAB_001b0d89;
        }
        goto LAB_001b147d;
      }
    }
    else {
      unaff_R15 = _CFGetTypeID(local_140);
      uVar6 = _CFDataGetTypeID();
      if ((unaff_R15 != uVar6) || (lVar7 = _CFDataGetLength(local_140), lVar7 != 0x20))
      goto LAB_001ae13a;
      _AMAuthInstallLog(3,"AMAuthInstallMaverickLocalCreateRootTicket","FDR Digest found..");
      _CFRetain(local_140);
    }
    uVar9 = _CFDataGetBytePtr(local_140);
    uVar2 = _CFDataGetLength(local_140);
    iVar3 = _DEREncoderAddData(lVar5,2,0x159,uVar9,uVar2,0);
    _CFRelease(local_140);
    if (iVar3 != 0) {
      _AMAuthInstallMaverickLocalCreateRootTicket_cold_13();
      goto LAB_001b147d;
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BbProvisioningEnable);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFBooleanGetTypeID();
      if (((lVar8 == lVar12) && (cVar1 = _CFBooleanGetValue(lVar7), cVar1 != '\0')) &&
         (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0x161,1), iVar3 != 0)) {
        _AMAuthInstallMaverickLocalCreateRootTicket_cold_14();
        goto LAB_001b147d;
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_FDRAllowUnsealed);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFBooleanGetTypeID();
      if (((lVar8 == lVar12) && (cVar1 = _CFBooleanGetValue(lVar7), cVar1 != '\0')) &&
         (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0x162,1), iVar3 != 0)) {
        _AMAuthInstallMaverickLocalCreateRootTicket_cold_15();
        goto LAB_001b147d;
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BasebandFirmware);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFDictionaryGetTypeID();
      if (lVar8 == lVar12) {
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_DBL_Version);
        if (lVar8 != 0) {
          lVar12 = _CFGetTypeID(lVar8);
          lVar13 = _CFNumberGetTypeID();
          if (((lVar12 == lVar13) && (cVar1 = _CFNumberGetValue(lVar8,3,local_138), cVar1 != '\0'))
             && (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0xcb,local_138[0] & 0xffffffff),
                iVar3 != 0)) {
            pcVar16 = "failed to add Dbl version to DER file";
            goto LAB_001b1471;
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DBL_PartialDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xd3,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_16();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DBL_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xd1,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_17();
              goto LAB_001b147d;
            }
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_ENANDPRG_Version);
        if (lVar8 != 0) {
          lVar12 = _CFGetTypeID(lVar8);
          lVar13 = _CFNumberGetTypeID();
          if (((lVar12 == lVar13) && (cVar1 = _CFNumberGetValue(lVar8,3,local_138), cVar1 != '\0'))
             && (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0xce,local_138[0] & 0xffffffff),
                iVar3 != 0)) {
            pcVar16 = "failed to add Enandprog Version to DER file";
            goto LAB_001b1471;
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_ENANDPRG_PartialDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xd2,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_18();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_OSBL_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xcf,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_19();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_AMSS_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xd0,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_20();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_AMSS_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xcd,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_21();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_PartitionTable_Digest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xd5,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_22();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_eDBL_PartialDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xd9,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_23();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_eDBL_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xda,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_24();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RestoreDBL_PartialDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xdb,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_25();
              goto LAB_001b147d;
            }
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_eDBL_Version);
        if (lVar8 != 0) {
          lVar12 = _CFGetTypeID(lVar8);
          lVar13 = _CFNumberGetTypeID();
          if (((lVar12 == lVar13) && (cVar1 = _CFNumberGetValue(lVar8,3,local_138), cVar1 != '\0'))
             && (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0xdc,local_138[0] & 0xffffffff),
                iVar3 != 0)) {
            pcVar16 = "failed to add EDbl version to DER file";
            goto LAB_001b1471;
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_RestoreDBL_Version);
        if (lVar8 != 0) {
          lVar12 = _CFGetTypeID(lVar8);
          lVar13 = _CFNumberGetTypeID();
          if (((lVar12 == lVar13) && (cVar1 = _CFNumberGetValue(lVar8,3,local_138), cVar1 != '\0'))
             && (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0xdd,local_138[0] & 0xffffffff),
                iVar3 != 0)) {
            pcVar16 = "failed to add RestoreDbl version to DER file";
            goto LAB_001b1471;
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DSP1_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xe1,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_26();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DSP1_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xdf,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_27();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DSP2_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xe2,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_28();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DSP2_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xe0,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_29();
              goto LAB_001b147d;
            }
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_SBL1_Version);
        if (lVar8 != 0) {
          lVar12 = _CFGetTypeID(lVar8);
          lVar13 = _CFNumberGetTypeID();
          if (((lVar12 == lVar13) && (cVar1 = _CFNumberGetValue(lVar8,3,local_138), cVar1 != '\0'))
             && (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0xf0,local_138[0] & 0xffffffff),
                iVar3 != 0)) {
            pcVar16 = "failed to add Sbl1 version to DER file";
            goto LAB_001b1471;
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_SBL1_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xf8,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_30();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_SBL2_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xf4,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_31();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RPM_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xf5,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_32();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RPM_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x150,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_33();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_APPS_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xf6,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_34();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_APPS_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xf1,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_35();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DSP3_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xf7,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_36();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DSP3_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0xf2,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_37();
              goto LAB_001b147d;
            }
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_RestoreSBL1_Version);
        if (lVar8 != 0) {
          lVar12 = _CFGetTypeID(lVar8);
          lVar13 = _CFNumberGetTypeID();
          if (((lVar12 == lVar13) && (cVar1 = _CFNumberGetValue(lVar8,3,local_138), cVar1 != '\0'))
             && (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0xf3,local_138[0] & 0xffffffff),
                iVar3 != 0)) {
            pcVar16 = "failed to add RestoreSbl1 version to DER file";
            goto LAB_001b1471;
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_QDSP6SW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x151,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_38();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_QDSP6SW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x154,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_39();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_TZ_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x153,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_40();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_TZ_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x157,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_41();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_MBA_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x152,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_42();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_MBA_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x156,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_43();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_WDT_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x158,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_44();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_WDT_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x18b,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_45();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_BBCFG_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x165,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_46();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_ACDB_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x155,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_47();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_Misc_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x7cb,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_48();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RamPSI_PartialDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x61,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_49();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_PSI_PartialDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x197,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_50();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RestorePSI_PartialDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x198,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_51();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_PSI2_PartialDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x6d9,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_52();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RestorePSI2_PartialDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x6da,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_53();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_PSI_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x195,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_54();
              goto LAB_001b147d;
            }
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_PSI_Version);
        if (lVar8 != 0) {
          lVar12 = _CFGetTypeID(lVar8);
          lVar13 = _CFNumberGetTypeID();
          if (((lVar12 == lVar13) && (cVar1 = _CFNumberGetValue(lVar8,3,local_138), cVar1 != '\0'))
             && (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0x18d,local_138[0] & 0xffffffff),
                iVar3 != 0)) {
            pcVar16 = "failed to add PSI version to DER file";
            goto LAB_001b1471;
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_RestorePSI_Version);
        if (lVar8 != 0) {
          lVar12 = _CFGetTypeID(lVar8);
          lVar13 = _CFNumberGetTypeID();
          if (((lVar12 == lVar13) && (cVar1 = _CFNumberGetValue(lVar8,3,local_138), cVar1 != '\0'))
             && (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0x18e,local_138[0] & 0xffffffff),
                iVar3 != 0)) {
            pcVar16 = "failed to add restore PSI version to DER file";
            goto LAB_001b1471;
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_EBL_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x196,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_55();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_SystemSW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x192,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_56();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_SystemSW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,399,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_57();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_TDSFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x194,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_58();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_TDSFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x191,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_59();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_LTEFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x193,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_60();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_LTEFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,400,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_61();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_2GFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x1f9,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_62();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_2GFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x1fa,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_63();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_3GFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x1fb,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_64();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_3GFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x1fc,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_65();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DebugFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x1fd,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_66();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DebugFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x1fe,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_67();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RFFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x1ff,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_68();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RFFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x200,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_69();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_AudioFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x201,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_70();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_AudioFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x202,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_71();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RPCU_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2db,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_72();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_RPCU_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2da,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_73();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DPC_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2d9,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_74();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_DPC_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2d8,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_75();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_CDMA2KFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2ed,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_76();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_CDMA2KFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2ec,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_77();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_Custpack_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2d7,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_78();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_Custpack_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2d6,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_79();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_GNSSFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2f6,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_80();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_GNSSFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2f7,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_81();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_IRXCoefficient_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2f8,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_82();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_IRXCoefficient_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x2f9,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_83();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_TPCU_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x475,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_84();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_TPCU_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x474,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_85();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_UPC_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x477,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_86();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_UPC_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x476,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_87();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_LegacyRATFW_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x472,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_88();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_LegacyRATFW_DownloadDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x471,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_89();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_AntCFG_HashTableDigest);
        if (local_140 != 0) {
          lVar8 = _CFGetTypeID(local_140);
          lVar12 = _CFDataGetTypeID();
          if (lVar8 == lVar12) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x470,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_90();
              goto LAB_001b147d;
            }
          }
        }
        local_140 = _CFDictionaryGetValue(lVar7,&cf_AntCFG_DownloadDigest);
        if (local_140 != 0) {
          lVar7 = _CFGetTypeID(local_140);
          lVar8 = _CFDataGetTypeID();
          if (lVar7 == lVar8) {
            uVar9 = _CFDataGetBytePtr(local_140);
            uVar2 = _CFDataGetLength(local_140);
            iVar3 = _DEREncoderAddData(lVar5,2,0x46f,uVar9,uVar2,0);
            if (iVar3 != 0) {
              _AMAuthInstallMaverickLocalCreateRootTicket_cold_91();
              goto LAB_001b147d;
            }
          }
        }
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BbJtagEnable);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFBooleanGetTypeID();
      if (((lVar8 == lVar12) && (cVar1 = _CFBooleanGetValue(lVar7), cVar1 != '\0')) &&
         (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,99,1), iVar3 != 0)) {
        _AMAuthInstallMaverickLocalCreateRootTicket_cold_92();
        goto LAB_001b147d;
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BbCalibrationEnable);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFBooleanGetTypeID();
      if (((lVar8 == lVar12) && (cVar1 = _CFBooleanGetValue(lVar7), cVar1 != '\0')) &&
         (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0xd4,1), iVar3 != 0)) {
        _AMAuthInstallMaverickLocalCreateRootTicket_cold_93();
        goto LAB_001b147d;
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BbFactoryDebugEnable);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFBooleanGetTypeID();
      if (((lVar8 == lVar12) && (cVar1 = _CFBooleanGetValue(lVar7), cVar1 != '\0')) &&
         (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0xd7,1), iVar3 != 0)) {
        _AMAuthInstallMaverickLocalCreateRootTicket_cold_94();
        goto LAB_001b147d;
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BbActivationBypassEnable);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFBooleanGetTypeID();
      if (((lVar8 == lVar12) && (cVar1 = _CFBooleanGetValue(lVar7), cVar1 != '\0')) &&
         (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0xd8,1), iVar3 != 0)) {
        _AMAuthInstallMaverickLocalCreateRootTicket_cold_95();
        goto LAB_001b147d;
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BbEraseAllEnable);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFBooleanGetTypeID();
      if (((lVar8 == lVar12) && (cVar1 = _CFBooleanGetValue(lVar7), cVar1 != '\0')) &&
         (iVar3 = _DEREncoderAddInt32AsData(lVar5,2,0x67,1), iVar3 != 0)) {
        _AMAuthInstallMaverickLocalCreateRootTicket_cold_96();
        goto LAB_001b147d;
      }
    }
    local_140 = _CFDictionaryGetValue(param_2,&cf_BbVendorData);
    if (local_140 != 0) {
      lVar7 = _CFGetTypeID(local_140);
      lVar8 = _CFDataGetTypeID();
      if (lVar7 == lVar8) {
        uVar9 = _CFDataGetBytePtr(local_140);
        uVar2 = _CFDataGetLength(local_140);
        iVar3 = _DEREncoderAddData(lVar5,2,0x66,uVar9,uVar2,0);
        if (iVar3 != 0) {
          _AMAuthInstallMaverickLocalCreateRootTicket_cold_97();
          goto LAB_001b147d;
        }
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BbAntennaType);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFStringGetTypeID();
      if ((lVar8 == lVar12) &&
         (cVar1 = _CFStringGetCString(lVar7,local_138,0x100,0x8000100), cVar1 != '\0')) {
        sVar14 = _strlen((char *)local_138);
        iVar3 = _DEREncoderAddData(lVar5,2,0xec,local_138,(int)sVar14 + 1,0);
        if (iVar3 != 0) {
          pcVar16 = "failed to add antenna type to DER file";
          goto LAB_001b1471;
        }
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_BbBehavior);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar12 = _CFStringGetTypeID();
      if ((lVar8 == lVar12) &&
         (cVar1 = _CFStringGetCString(lVar7,local_138,0x100,0x8000100), cVar1 != '\0')) {
        sVar14 = _strlen((char *)local_138);
        iVar3 = _DEREncoderAddData(lVar5,2,0xed,local_138,(int)sVar14 + 1,0);
        if (iVar3 != 0) {
          pcVar16 = "failed to add behavior to DER file";
          goto LAB_001b1471;
        }
      }
    }
    iVar3 = _DEREncoderAddData(lVar5,2,0x4a,"BbApBindingDigestXXX",0x14,0);
    if (iVar3 != 0) {
      _AMAuthInstallMaverickLocalCreateRootTicket_cold_98();
      goto LAB_001b147d;
    }
    iVar3 = _DEREncoderAddData(lVar5,2,0x4b,"ServerNonceXXXXXXXXX",0x14,0);
    if (iVar3 != 0) {
      _AMAuthInstallMaverickLocalCreateRootTicket_cold_99();
      goto LAB_001b147d;
    }
    iVar3 = _DEREncoderCreateEncodedBuffer(lVar5,&local_160,local_138);
    if (iVar3 != 0) {
      _AMAuthInstallMaverickLocalCreateRootTicket_cold_100();
      goto LAB_001b147d;
    }
    uVar9 = _CFGetAllocator(param_1);
    lVar7 = _CFDataCreateWithBytesNoCopy
                      (uVar9,local_160,local_138[0] & 0xffffffff,
                       *(undefined8 *)PTR__kCFAllocatorNull_004410f8);
    if (lVar7 != 0) {
      uVar2 = _AMAuthInstallMonetLocalCreateSignedTicket(param_1,param_3,param_4,lVar7,0,0,param_5);
      goto LAB_001b0d89;
    }
    _AMAuthInstallMaverickLocalCreateRootTicket_cold_101();
    uVar2 = 2;
  }
  lVar7 = 0;
LAB_001b0d89:
  _SafeFree(local_160);
  _DEREncoderDestroy(lVar5);
  _SafeRelease(lVar7);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

