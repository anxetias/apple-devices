// rea decompile_all
// name: _AMAuthInstallMonetLocalCreateProvisioningTicket
// address: 0x296a67
// body: available
// range: 0x296a67-0x297401 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2973fd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallMonetLocalCreateProvisioningTicket(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  int iVar14;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  char local_139;
  char local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_168 = 0;
  local_180 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  if (((param_1 == 0) || (lVar12 = *(long *)(param_1 + 0x30), lVar12 == 0)) ||
     ((*(long *)(lVar12 + 0x28) == 0 && (*(long *)(lVar12 + 0x20) == 0)))) {
LAB_002971ab:
    lVar12 = 0;
    lVar7 = 0;
    lVar11 = 0;
  }
  else {
    local_148 = *(long *)(param_1 + 0xe8);
    lVar12 = 0;
    if (local_148 == 0) goto LAB_002971ab;
    lVar2 = *(long *)(param_1 + 0xf0);
    lVar11 = 0;
    lVar7 = 0;
    if (lVar2 == 0) goto LAB_0029739f;
    local_139 = *(char *)(param_1 + 0x100);
    local_150 = *(long *)(param_1 + 0x108);
    local_160 = *(long *)(param_1 + 0x110);
    lVar3 = *(long *)(param_1 + 0x118);
    cVar1 = *(char *)(param_1 + 0x120);
    lVar7 = _DEREncoderCreate(1);
    if (lVar7 == 0) goto LAB_002971ab;
    uVar8 = _CFDataGetBytePtr(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
    uVar4 = _CFDataGetLength(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
    iVar5 = _DEREncoderAddData(lVar7,2,0x3f,uVar8,uVar4,0);
    if (iVar5 == 0) {
      iVar5 = _DEREncoderAddInt32AsData(lVar7,2,0x40,*(undefined4 *)(*(long *)(param_1 + 0x30) + 4))
      ;
      if (iVar5 != 0) {
        pcVar13 = "failed to add chipID to DER file";
        goto LAB_00297390;
      }
      uVar8 = _CFDataGetBytePtr(lVar2);
      uVar4 = _CFDataGetLength(lVar2);
      local_158 = lVar7;
      iVar5 = _DEREncoderAddData(lVar7,2,0x4b,uVar8,uVar4,0);
      lVar12 = local_148;
      if (iVar5 != 0) {
        pcVar13 = "failed to add nonce to DER file";
LAB_002973e5:
        lVar12 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateProvisioningTicket",pcVar13);
        lVar11 = 0;
        lVar7 = local_158;
        goto LAB_0029739f;
      }
      if ((local_139 == '\0') || (cVar1 == '\x01')) {
        uVar8 = _CFDataGetBytePtr(local_148);
        uVar4 = _CFDataGetLength(lVar12);
        lVar7 = local_158;
        iVar5 = _DEREncoderAddData(local_158,2,0x3ec,uVar8,uVar4,0);
        if (iVar5 != 0) {
          pcVar13 = "failed to add activation encryption key to DER file";
          goto LAB_00297390;
        }
        if (*(long *)(param_1 + 0xf8) != 0) {
          uVar8 = _CFDataGetBytePtr();
          uVar4 = _CFDataGetLength(*(undefined8 *)(param_1 + 0xf8));
          iVar5 = _DEREncoderAddData(local_158,2,0x3ea,uVar8,uVar4,0);
          if (iVar5 != 0) {
            pcVar13 = "failed to add default carrier key to DER file";
            goto LAB_002973e5;
          }
        }
      }
      lVar12 = *(long *)(param_1 + 0x30);
      if (*(long *)(lVar12 + 0x20) != 0) {
        uVar9 = _CFGetAllocator(param_1);
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
        if (local_139 == '\0') {
          iVar5 = _AMAuthInstallMonetCreateReversedMEIDFromString(uVar9,uVar8,&local_168);
        }
        else {
          iVar5 = _AMAuthInstallMonetCreateMEIDFromString(uVar9,uVar8,&local_168);
        }
        lVar7 = local_158;
        if (iVar5 == 0) {
          if (local_168 != 0) {
            uVar8 = _CFDataGetBytePtr();
            uVar4 = _CFDataGetLength(local_168);
            iVar14 = 0;
            iVar5 = _DEREncoderAddData(lVar7,2,0x3eb,uVar8,uVar4,0);
            if (iVar5 != 0) {
              pcVar13 = "failed to add default MEID to DER file";
              goto LAB_00297390;
            }
            lVar12 = *(long *)(param_1 + 0x30);
            goto LAB_00296d72;
          }
          pcVar13 = "failed to convert MEID to data\n";
LAB_00297263:
          iVar5 = 3;
          _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateProvisioningTicket",pcVar13);
        }
LAB_0029726d:
        uVar8 = 0;
        lVar11 = 0;
        local_148 = 0;
        local_150 = 0;
        goto LAB_002970e8;
      }
      iVar14 = 99;
      lVar7 = local_158;
LAB_00296d72:
      if (*(long *)(lVar12 + 0x28) != 0) {
        uVar8 = _CFGetAllocator(param_1);
        iVar5 = _AMAuthInstallMonetCreateMEIDFromString
                          (uVar8,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28),&local_180);
        if (iVar5 != 0) goto LAB_0029726d;
        if (local_180 == 0) {
          pcVar13 = "failed to convert IMEI to data\n";
          goto LAB_00297263;
        }
        uVar8 = _CFDataGetBytePtr();
        uVar4 = _CFDataGetLength(local_180);
        iVar14 = 0;
        iVar5 = _DEREncoderAddData(lVar7,2,0x3ed,uVar8,uVar4,0);
        if (iVar5 != 0) {
          pcVar13 = "failed to add default IMEI to DER file";
          goto LAB_00297390;
        }
      }
      if (local_150 != 0) {
        _CFStringGetCString(local_150,local_138,0x100,0x8000100);
        sVar10 = _strlen(local_138);
        iVar5 = _DEREncoderAddData(lVar7,2,0x3ee,local_138,(int)sVar10 + 1,0);
        if (iVar5 != 0) {
          pcVar13 = "failed to add default carrier ID to DER file";
          goto LAB_00297390;
        }
      }
      iVar5 = _DEREncoderCreateEncodedBuffer(lVar7,&local_1b0,&local_174);
      if (iVar5 != 0) {
        pcVar13 = "failed to create DER encoded buffer: contentsEncoder";
        goto LAB_00297390;
      }
      if (local_139 == '\0') {
        uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar9 = *(undefined8 *)PTR__kCFAllocatorNull_004410f8;
        local_150 = 0;
        local_148 = 0;
        lVar11 = 0;
        iVar5 = iVar14;
LAB_00297088:
        uVar8 = _CFDataCreateWithBytesNoCopy(uVar8,local_1b0,local_174,uVar9);
        if (iVar5 == 0) {
          iVar5 = _AMAuthInstallMonetLocalCreateSignedTicket
                            (param_1,&cf_bb_monet_ticket_provisioning,local_139,uVar8,local_190,
                             local_188,param_2);
          lVar7 = local_158;
          goto LAB_002970e8;
        }
        pcVar13 = "allocate CFData buffer\n";
LAB_00297373:
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateProvisioningTicket",pcVar13);
        lVar7 = local_158;
        goto LAB_002970e8;
      }
      if ((local_160 == 0) || (lVar3 == 0)) {
LAB_002972cb:
        iVar5 = 1;
LAB_00297305:
        local_148 = 0;
        local_150 = 0;
        lVar11 = 0;
        uVar8 = 0;
        goto LAB_002970e8;
      }
      if (*(long *)(*(long *)(param_1 + 0x30) + 0x48) == 0) {
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateProvisioningTicket",
                          "encryptedSessionKey is NULL, cannot add encrypted section\n");
        goto LAB_002972cb;
      }
      lVar11 = _DEREncoderCreate(1);
      lVar12 = local_148;
      if (lVar11 == 0) {
        iVar5 = 2;
        goto LAB_00297305;
      }
      uVar8 = _CFDataGetBytePtr(local_148);
      uVar4 = _CFDataGetLength(lVar12);
      iVar5 = 2;
      iVar6 = _DEREncoderAddData(lVar11,2,0x3ec,uVar8,uVar4,0);
      if (iVar6 == 0) {
        if (*(long *)(param_1 + 0xf8) != 0) {
          uVar8 = _CFDataGetBytePtr();
          uVar4 = _CFDataGetLength(*(undefined8 *)(param_1 + 0xf8));
          iVar6 = _DEREncoderAddData(lVar11,2,0x3ea,uVar8,uVar4,0);
          if (iVar6 != 0) goto LAB_002971b5;
        }
        local_160 = lVar11;
        iVar6 = _DEREncoderCreateEncodedBuffer(lVar11,&local_1a8,&local_170);
        if (iVar6 == 0) {
          lVar12 = _DEREncoderCreate(0);
          if (lVar12 == 0) {
            local_148 = 0;
            local_150 = 0;
          }
          else {
            iVar5 = _DEREncoderAddData(lVar12,0,0x11,local_1a8,local_170,1);
            lVar11 = local_160;
            if ((iVar5 != 0) ||
               (iVar5 = _DEREncoderCreateEncodedBuffer(lVar12,&local_1a0,&local_16c),
               lVar11 = local_160, iVar5 != 0)) goto LAB_0029739f;
            uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            uVar9 = *(undefined8 *)PTR__kCFAllocatorNull_004410f8;
            local_150 = lVar12;
            local_148 = _CFDataCreateWithBytesNoCopy(uVar8,local_1a0,local_16c,uVar9);
            if (iVar14 == 0) {
              iVar5 = _AMAuthInstallCryptoDecryptSessionKey
                                (param_1,&cf_bb_monet_ticket_provisioning,
                                 *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48),&local_198);
              lVar11 = local_160;
              if (iVar5 == 0) {
                iVar5 = _AMAuthInstallCryptoEncryptWithWrappedKeyAndIVPrependIV
                                  (param_1,local_198,*(undefined8 *)(param_1 + 0x110),lVar3,
                                   local_148,&local_190,&local_188);
                goto LAB_00297088;
              }
              pcVar13 = "failed to decrypt session key\n";
              uVar8 = 0;
              goto LAB_00297373;
            }
            _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateProvisioningTicket",
                              "allocate CFData contents to encrypt");
            lVar7 = local_158;
            iVar5 = iVar14;
          }
          uVar8 = 0;
          lVar11 = local_160;
          goto LAB_002970e8;
        }
        lVar12 = 0;
        lVar11 = local_160;
      }
      else {
LAB_002971b5:
        lVar12 = 0;
      }
    }
    else {
      pcVar13 = "failed to add snum to DER file";
LAB_00297390:
      lVar12 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateProvisioningTicket",pcVar13);
      lVar11 = 0;
    }
  }
LAB_0029739f:
  uVar8 = 0;
  iVar5 = 3;
  local_150 = lVar12;
  _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateProvisioningTicket",
                    "AMAuthInstallMonetLocalCreateProvisioningTicket failed to create DER file");
  local_148 = 0;
LAB_002970e8:
  _SafeFree(local_1b0);
  _DEREncoderDestroy(lVar7);
  _SafeFree(local_1a8);
  _DEREncoderDestroy(lVar11);
  _SafeFree(local_1a0);
  _DEREncoderDestroy(local_150);
  _SafeRelease(local_168);
  _SafeRelease(local_180);
  _SafeRelease(local_188);
  _SafeRelease(local_148);
  _SafeRelease(0);
  _SafeRelease(local_198);
  _SafeRelease(local_190);
  _SafeRelease(uVar8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

