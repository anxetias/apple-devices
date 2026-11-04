// rea decompile_all
// name: _CreateTicket
// address: 0x283e1d
// body: available
// range: 0x283e1d-0x2844b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_CreateTicket(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 uStack_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 *local_88;
  undefined8 local_80;
  long local_78;
  undefined *local_70;
  undefined2 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (undefined *)0x0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (char *)0x0;
  uStack_f0 = 0;
  local_108 = (undefined *)0x0;
  uStack_100 = 0;
  local_118 = (undefined *)0x0;
  uStack_110 = 0;
  local_a0 = param_4;
  local_98 = param_3;
  local_88 = param_6;
  local_80 = param_1;
  local_60 = param_2;
  lVar2 = _CFDataCreateMutable(0,0);
  lVar3 = _CFDataCreateMutable(0,0);
  lVar4 = _CFDataCreateMutable(0,0);
  local_50 = _CFDataCreateMutable(0,0);
  lVar5 = _CFDataCreateMutable(0,0);
  uVar6 = 2;
  local_78 = lVar2;
  if ((((lVar2 == 0) || (lVar3 == 0)) || (lVar4 == 0)) || ((local_50 == 0 || (lVar5 == 0))))
  goto LAB_00284394;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_118 = &_SetStaticFields_versionStatic;
  uStack_110 = 1;
  local_108 = &_SetStaticFields_dataTypeStatic;
  uStack_100 = 1;
  local_f8 = "ProfileOption-PCF";
  uStack_f0 = 0x11;
  local_d8 = &_SetStaticFields_epochStatic;
  uStack_d0 = 3;
  local_188[4] = 0;
  local_188[5] = 0;
  local_188[2] = 0;
  local_188[3] = 0;
  local_188[0] = 0;
  local_188[1] = 0;
  local_48 = lVar5;
  local_40 = lVar4;
  lVar5 = _CFDataCreateMutable(0,0);
  lVar2 = _CFDataCreateMutable(0,0);
  lVar4 = local_60;
  if ((lVar5 == 0) || (lVar2 == 0)) {
LAB_002843ee:
    _SafeRelease(lVar5);
    _SafeRelease(lVar2);
    lVar4 = local_40;
  }
  else {
    local_38 = lVar3;
    local_188[4] = _CFDataGetBytePtr(local_60);
    local_188[5] = _CFDataGetLength(lVar4);
    uVar6 = local_98;
    local_90 = lVar5;
    local_188[0] = _CFDataGetBytePtr(local_98);
    local_188[1] = _CFDataGetLength(uVar6);
    uVar6 = local_a0;
    local_188[2] = _CFDataGetBytePtr(local_a0);
    lVar5 = local_90;
    local_188[3] = _CFDataGetLength(uVar6);
    _CFShow(lVar4);
    iVar1 = _EncodeSequenceIntoBuffer(local_188,&_eUICCprofileOptionSpec,lVar5);
    if (((iVar1 != 0) || (iVar1 = _EncodeDataIntoBuffer(0xa000000000000003,lVar5,lVar2), iVar1 != 0)
        ) || (iVar1 = _EncodeDataIntoBuffer(0x2000000000000010,lVar2,local_50), lVar4 = local_50,
             iVar1 != 0)) {
      _AMAuthInstallLog(3,"SetProfileData","Encode %d\n");
      lVar3 = local_38;
      goto LAB_002843ee;
    }
    local_e8 = _CFDataGetMutableBytePtr(local_50);
    uStack_e0 = _CFDataGetLength(lVar4);
    _SafeRelease(lVar5);
    _SafeRelease(lVar2);
    local_148 = 0;
    uStack_140 = 0;
    local_188[6] = 0;
    local_188[7] = 0;
    local_188[4] = 0;
    local_188[5] = 0;
    local_70 = (undefined *)0x0;
    local_188[2] = 0;
    local_188[3] = 0;
    local_188[0] = 0;
    local_188[1] = 0;
    if (*(long *)(param_5 + 0x38) != 0) {
      puVar9 = local_188 + 1;
      uVar10 = 0;
      do {
        local_70 = (undefined *)0x0;
        iVar1 = _AMAuthInstallCryptoGetCertData
                          (local_80,*(undefined8 *)(param_5 + 0x10 + uVar10 * 8),&local_70);
        if (iVar1 != 0) {
          _AMAuthInstallLog(3,"SetCertChain","Failed to get certData %d %@",uVar10,
                            *(undefined8 *)(param_5 + 0x10 + uVar10 * 8));
          lVar3 = local_38;
          goto LAB_0028436f;
        }
        if (local_70 == (undefined *)0x0) {
          iVar1 = -1;
          lVar3 = local_38;
          goto LAB_0028436f;
        }
        uVar6 = _CFDataGetBytePtr();
        puVar9[-1] = uVar6;
        uVar6 = _CFDataGetLength(local_70);
        *puVar9 = uVar6;
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + 2;
      } while (uVar10 < *(ulong *)(param_5 + 0x38));
    }
    lVar3 = local_38;
    iVar1 = _EncodeSequenceIntoBuffer(local_188,&_eUICCcertChainSpec,local_38);
    if (iVar1 == 0) {
      local_b8 = _CFDataGetMutableBytePtr(lVar3);
      uStack_b0 = _CFDataGetLength(lVar3);
      local_70 = &_profileObjectItemSpec;
      local_68 = 5;
      local_58 = 0;
      lVar5 = _CFDataCreateMutable(0,0);
      if (lVar5 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = _EncodeSequenceIntoBuffer(&local_118,&local_70,lVar5);
        if (iVar1 == 0) {
          local_198 = _CFDataGetMutableBytePtr(lVar5);
          local_60 = lVar5;
          local_190 = _CFDataGetLength(lVar5);
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_188[6] = 0;
          local_188[7] = 0;
          local_188[4] = 0;
          local_188[5] = 0;
          local_188[2] = 0;
          local_188[3] = 0;
          local_188[0] = 0;
          local_188[1] = 0;
          iVar1 = _DERParseSequence(&local_198,5,&_profileObjectItemSpec,local_188,0x70);
          if (iVar1 == 0) {
            iVar1 = _AMAuthInstallCryptoCreateRsaSignature_SHA256
                              (local_80,*(undefined8 *)(param_5 + 8),local_188[0],
                               ((int)local_148 + (int)uStack_140) - (int)local_188[0],&local_58);
            lVar5 = local_78;
            if (iVar1 == 0) {
              iVar1 = 0;
              _CFDataSetLength(local_78,0);
              uVar6 = _CFDataGetBytePtr(local_58);
              uVar7 = _CFDataGetLength(local_58);
              _CFDataAppendBytes(lVar5,uVar6,uVar7);
              local_c8 = _CFDataGetMutableBytePtr(lVar5);
              uStack_c0 = _CFDataGetLength(lVar5);
              lVar5 = local_60;
              goto LAB_002842cc;
            }
            pcVar8 = "Failed to create RSA Signature %d";
          }
          else {
            pcVar8 = "Parse POSO %d\n";
          }
          _AMAuthInstallLog(3,"SetSignature",pcVar8,iVar1);
          lVar5 = local_60;
        }
        else {
          _AMAuthInstallLog(3,"SetSignature","Encode POSO %d\n",iVar1);
        }
      }
LAB_002842cc:
      lVar3 = local_38;
      lVar4 = local_40;
      _SafeRelease(lVar5);
      _SafeRelease(local_58);
      if (iVar1 == 0) {
        iVar1 = _EncodeSequenceIntoBuffer(&local_118,&_eUICCprofileObjectSpec,lVar4);
        lVar5 = local_48;
        uVar6 = 0xe;
        if (iVar1 == 0) {
          iVar1 = _EncodeDataIntoBuffer(0x2000000000000010,lVar4,local_48);
          puVar9 = local_88;
          if (iVar1 == 0) {
            _SafeRelease(*local_88);
            uVar6 = 0;
            uVar7 = _CFDataCreateCopy(0,lVar5);
            *puVar9 = uVar7;
          }
          goto LAB_00284394;
        }
      }
      else {
        _AMAuthInstallLog(3,"CreateTicket","SetSignature %d",iVar1);
      }
    }
    else {
      _AMAuthInstallLog(3,"SetCertChain","Encode %d\n");
LAB_0028436f:
      _AMAuthInstallLog(3,"CreateTicket","SetCertChain %d",iVar1);
      lVar4 = local_40;
    }
  }
  uVar6 = 0xe;
  lVar5 = local_48;
LAB_00284394:
  _SafeRelease(local_78);
  _SafeRelease(lVar3);
  _SafeRelease(lVar4);
  _SafeRelease(local_50);
  _SafeRelease(lVar5);
  return uVar6;
}

