// rea decompile_all
// name: _AMAuthInstallMonetLocalCreateSignedTicket
// address: 0x295ebb
// body: available
// range: 0x295ebb-0x296a66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallMonetLocalCreateSignedTicket
              (long param_1,undefined8 param_2,char param_3,undefined8 param_4,long param_5,
              long param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  char *pcVar12;
  long lVar13;
  undefined8 uStackY_110;
  uint local_f4;
  long local_f0;
  uint local_e8 [4];
  undefined8 local_d8;
  long local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined4 local_84;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined4 local_64;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  char local_31;
  
  local_a0 = 0;
  local_f0 = 0;
  local_60 = 0;
  local_80 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  iVar2 = 99;
  local_d8 = param_4;
  local_d0 = param_6;
  local_31 = param_3;
  if ((iVar1 != 0x3b0e1) && (iVar1 != 0x7f0e1)) {
    local_78 = 0;
    if (((iVar1 == 0xe50e1) ||
        ((((iVar1 == 0x1440e1 || (iVar1 == 0x1720e1)) || (iVar1 == 0x19f0e1)) ||
         ((iVar1 == 0x1fe0e1 || (iVar1 == 0x2af0e1)))))) || (iVar1 == 0x9540e1)) goto LAB_00296007;
    uVar5 = _CFGetAllocator(param_1);
    uVar8 = 0;
    local_78 = _CFStringCreateWithFormat(uVar5,0,&cf____public,param_2);
    if (local_78 != 0) {
      iVar1 = _AMAuthInstallCryptoCreateSubjectPublicKeyInfoForKey(param_1,local_78,&local_a0);
      iVar2 = 0;
      if (iVar1 != 0) {
        lVar7 = 0;
        local_58 = 0;
        local_48 = 0;
        local_50 = 0;
        lVar13 = 0;
        lVar10 = 0;
        lVar6 = 0;
        goto LAB_00296653;
      }
      goto LAB_00296007;
    }
    local_78 = 0;
    lVar6 = 0;
LAB_002967f4:
    local_48 = 0;
    local_58 = 0;
    lVar7 = 0;
    uVar8 = 0;
    local_50 = 0;
    iVar1 = 2;
    lVar13 = 0;
    lVar10 = 0;
    goto LAB_00296653;
  }
  local_78 = 0;
LAB_00296007:
  iVar1 = iVar2;
  uVar5 = _CFGetAllocator(param_1);
  lVar6 = _CFStringCreateWithFormat(uVar5,0,&cf____private,param_2);
  if (lVar6 == 0) {
    lVar7 = 0;
    uVar8 = 0;
    local_58 = 0;
    local_48 = 0;
    local_50 = 0;
    iVar1 = 2;
    lVar13 = 0;
    lVar10 = 0;
    lVar6 = 0;
    goto LAB_00296653;
  }
  lVar7 = _DEREncoderCreate(0);
  if (lVar7 == 0) goto LAB_002967f4;
  local_40 = lVar7;
  lVar7 = _DEREncoderCreate(0);
  if (lVar7 == 0) {
    local_58 = 0;
    lVar7 = 0;
    uVar8 = 0;
    local_48 = 0;
    local_50 = 0;
LAB_0029690b:
    iVar1 = 2;
  }
  else {
    local_70 = lVar6;
    if ((local_31 == '\0') || (iVar2 = _DEREncoderAddData(lVar7,0,2,&local_31,1,0), iVar2 == 0)) {
      lVar6 = local_70;
      iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 4);
      uVar4 = iVar2 - 0x5e;
      if (uVar4 < 0xb) {
        if ((0x284U >> (uVar4 & 0x1f) & 1) != 0) {
LAB_002960f5:
          puVar11 = &_kSha256WithRsaEncryption;
          goto LAB_002960fc;
        }
        if ((0x401U >> (uVar4 & 0x1f) & 1) == 0) goto LAB_0029609c;
LAB_0029610d:
        puVar11 = &_kSha384WithEcdsaEncryption;
        uStackY_110 = 10;
      }
      else {
LAB_0029609c:
        if ((((iVar2 == 0x7f0e1) || (iVar2 == 0xe50e1)) || (iVar2 == 0x1440e1)) ||
           (((iVar2 == 0x1720e1 || (iVar2 == 0x19f0e1)) ||
            ((iVar2 == 0x1fe0e1 || (iVar2 == 0x2af0e1)))))) goto LAB_0029610d;
        if (((iVar2 == 0x7f50e1) || (iVar2 == 0x9540e1)) || (iVar2 == 0x9210e1)) goto LAB_002960f5;
        puVar11 = &_kSha1WithRsaEncryption;
LAB_002960fc:
        uStackY_110 = 0xb;
      }
      iVar2 = _DEREncoderAddData(lVar7,0,0x10,puVar11,uStackY_110,1);
      if (iVar2 == 0) {
        local_58 = 0;
        if ((local_d0 != 0) && (param_5 != 0)) {
          local_48 = 0;
          local_50 = 0;
          if (local_31 == '\0') goto LAB_00296328;
          local_e8[0] = local_e8[0] & 0xffffff00;
          local_90 = lVar7;
          lVar7 = _DEREncoderCreate(0);
          local_58 = lVar7;
          if (lVar7 == 0) {
            local_48 = 0;
            local_50 = 0;
            iVar1 = 2;
            lVar7 = local_90;
          }
          else {
            uVar5 = _CFDataCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
            _CFDataAppendBytes(uVar5,local_e8,1);
            uVar8 = _CFDataGetBytePtr(param_5);
            uVar9 = _CFDataGetLength(param_5);
            _CFDataAppendBytes(uVar5,uVar8,uVar9);
            uVar8 = _CFDataGetBytePtr(uVar5);
            local_50 = uVar5;
            uVar3 = _CFDataGetLength(uVar5);
            iVar1 = _DEREncoderAddData(lVar7,0,3,uVar8,uVar3,0);
            lVar6 = local_d0;
            if (iVar1 == 0) {
              uVar5 = _CFDataGetBytePtr(local_d0);
              uVar3 = _CFDataGetLength(lVar6);
              iVar1 = _DEREncoderAddData(lVar7,0,4,uVar5,uVar3,0);
              lVar6 = local_70;
              if (iVar1 != 0) {
                pcVar12 = "failed to add BER octet string to DER file";
                goto LAB_002969e2;
              }
              iVar1 = _DEREncoderCreateEncodedBuffer(lVar7,&local_b0,&local_c8);
              lVar7 = local_90;
              if (iVar1 != 0) {
                pcVar12 = "failed to create DER encoded buffer: encryptedContentsEncoder";
                local_48 = 0;
                goto LAB_00296a1f;
              }
              lVar10 = _DEREncoderCreate(0);
              if (lVar10 != 0) {
                iVar1 = _DEREncoderAddData(lVar10,0,0x10,local_b0,local_c8,1);
                local_48 = lVar10;
                if (iVar1 == 0) {
                  iVar1 = _DEREncoderCreateEncodedBuffer(lVar10,&local_98,&local_84);
                  if (iVar1 == 0) {
                    iVar1 = _DEREncoderAddData(lVar7,2,0,local_98,local_84,1);
                    if (iVar1 == 0) {
                      iVar1 = _DEREncoderAddData(local_40,2,0,local_98,local_84,1);
                      if (iVar1 == 0) goto LAB_00296328;
                      pcVar12 = "failed to add encrypted TlV to buffer";
                    }
                    else {
                      pcVar12 = "failed to add encrypted TlV to DER file";
                    }
                  }
                  else {
                    pcVar12 = "failed to create DER encoded buffer: encryptedTlvEncoder";
                  }
                }
                else {
                  pcVar12 = "failed to add BER sequence to DER file";
                }
                goto LAB_00296a1f;
              }
              local_48 = 0;
            }
            else {
              pcVar12 = "failed to add BER bit string to DER file";
LAB_002969e2:
              local_48 = 0;
              lVar6 = local_70;
              lVar7 = local_90;
LAB_00296a1f:
              _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateSignedTicket",pcVar12);
            }
            iVar1 = 2;
          }
          goto LAB_00296a37;
        }
        local_48 = 0;
        local_50 = 0;
LAB_00296328:
        uVar5 = local_d8;
        uVar8 = _CFDataGetBytePtr(local_d8);
        uVar3 = _CFDataGetLength(uVar5);
        lVar10 = local_40;
        iVar1 = _DEREncoderAddData(local_40,0,0x11,uVar8,uVar3,1);
        if (iVar1 != 0) {
          _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateSignedTicket",
                            "failed to add ticket body to DER file: toBeSignedEncoder");
          iVar1 = 2;
          uVar8 = 0;
          lVar13 = 0;
          goto LAB_00296653;
        }
        iVar1 = _DEREncoderCreateEncodedBuffer(lVar10,&local_80,&local_64);
        if (iVar1 == 0) {
          iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
          uVar4 = iVar1 - 0x5e;
          if (uVar4 < 0xb) {
            if ((0x284U >> (uVar4 & 0x1f) & 1) == 0) {
              if ((0x401U >> (uVar4 & 0x1f) & 1) == 0) goto LAB_0029638c;
              goto LAB_00296422;
            }
LAB_002963fc:
            iVar1 = _AMAuthInstallCryptoCreateRsaSignature_SHA256
                              (param_1,lVar6,local_80,local_64,&local_60);
          }
          else {
LAB_0029638c:
            if ((((iVar1 == 0x7f0e1) || (iVar1 == 0xe50e1)) || (iVar1 == 0x1440e1)) ||
               (((iVar1 == 0x1720e1 || (iVar1 == 0x19f0e1)) ||
                ((iVar1 == 0x1fe0e1 || (iVar1 == 0x2af0e1)))))) {
LAB_00296422:
              iVar1 = _AMAuthInstallCryptoCreateEcdsaSignature_SHA384
                                (param_1,lVar6,local_80,local_64,&local_60);
            }
            else {
              if (((iVar1 == 0x7f50e1) || (iVar1 == 0x9540e1)) || (iVar1 == 0x9210e1))
              goto LAB_002963fc;
              iVar1 = _AMAuthInstallCryptoCreateRsaSignature
                                (param_1,lVar6,local_80,local_64,&local_60);
            }
          }
          uVar5 = _CFDataGetBytePtr(local_60);
          uVar3 = _CFDataGetLength(local_60);
          _AMAuthInstallLogDumpMemory
                    (3,"AMAuthInstallMonetLocalCreateSignedTicket","bbticket signature",uVar5,uVar3)
          ;
          uVar5 = local_d8;
          if (iVar1 != 0) {
LAB_00296a37:
            uVar8 = 0;
            goto LAB_00296a39;
          }
          uVar8 = _CFDataGetBytePtr(local_d8);
          uVar3 = _CFDataGetLength(uVar5);
          iVar1 = _DEREncoderAddData(lVar7,0,0x11,uVar8,uVar3,1);
          if (iVar1 == 0) {
            uVar5 = _CFDataGetBytePtr(local_60);
            uVar3 = _CFDataGetLength(local_60);
            iVar1 = _DEREncoderAddData(lVar7,0,4,uVar5,uVar3,0);
            if (iVar1 == 0) {
              iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
              if ((((((iVar1 == 0x3b0e1) || (iVar1 == 0x7f0e1)) || (iVar1 == 0xe50e1)) ||
                   ((iVar1 == 0x1440e1 || (iVar1 == 0x1720e1)))) ||
                  ((iVar1 == 0x19f0e1 || ((iVar1 == 0x1fe0e1 || (iVar1 == 0x2af0e1)))))) ||
                 (iVar1 == 0x9540e1)) {
                _AMAuthInstallCryptoGetCertData(param_1,&cf_bb_monet_ticket_leafcert,&local_f0);
                if (local_f0 == 0) {
                  iVar1 = 0;
                  _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateSignedTicket",
                                    "Failed to fetch bb.monet.ticket.leafcert");
                }
                else {
                  uVar5 = _CFDataGetBytePtr();
                  uVar3 = _CFDataGetLength(local_f0);
                  iVar1 = 2;
                  iVar2 = _DEREncoderAddData(lVar7,2,1,uVar5,uVar3,1);
                  if (iVar2 == 0) {
LAB_00296583:
                    iVar1 = _DEREncoderCreateEncodedBuffer(lVar7,&local_c0,local_e8);
                    if (iVar1 == 0) {
                      uVar8 = _DEREncoderCreate(0);
                      iVar1 = _DEREncoderAddData(uVar8,0,0x10,local_c0,local_e8[0],1);
                      if (iVar1 == 0) {
                        iVar1 = _DEREncoderCreateEncodedBuffer(uVar8,&local_b8,&local_a8);
                        if (iVar1 == 0) {
                          uVar5 = _CFGetAllocator(param_1);
                          lVar6 = _CFDataCreate(uVar5,local_b8,local_a8);
                          lVar13 = 0;
                          if (lVar6 == 0) {
                            iVar1 = 2;
                            lVar10 = local_40;
                            lVar6 = local_70;
                          }
                          else {
                            _AMAuthInstallDebugWriteObject(param_1,lVar6,&cf_ticket,1);
                            uVar5 = _CFRetain(lVar6);
                            *param_7 = uVar5;
                            iVar1 = 0;
                            lVar13 = lVar6;
                            lVar10 = local_40;
                            lVar6 = local_70;
                          }
                          goto LAB_00296653;
                        }
                        pcVar12 = "failed to create DER encoded buffer: ticketBuffer";
                      }
                      else {
                        pcVar12 = "failed to ticket to DER file";
                      }
                      _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateSignedTicket",pcVar12);
                      goto LAB_0029690b;
                    }
                    pcVar12 = "failed to create DER encoded buffer: ticketContentsBuffer";
                    goto LAB_002968d0;
                  }
                  _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateSignedTicket",
                                    "failed to add ticket certificate to DER file");
                }
              }
              else {
                uVar4 = _CFDataGetLength(local_a0);
                local_f4 = uVar4;
                uVar5 = _CFDataGetBytePtr(local_a0);
                iVar2 = _DERDecoderInitialize(local_e8,uVar5,&local_f4,uVar4);
                iVar1 = 99;
                if ((iVar2 == 0) &&
                   (iVar2 = _DERDecoderGetDataAt(local_e8,0,0,0,&local_a8,&local_c4,0), iVar2 == 0))
                {
                  iVar1 = 2;
                  iVar2 = _DEREncoderAddData(lVar7,2,3,CONCAT44(uStack_a4,local_a8),local_c4,1);
                  if (iVar2 == 0) goto LAB_00296583;
                  _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateSignedTicket",
                                    "failed to add ticket sub puk to DER file");
                }
              }
              goto LAB_00296a37;
            }
            pcVar12 = "failed to add ticket signature to DER file";
          }
          else {
            pcVar12 = "failed to add ticket body to DER file: ticketContentsEncoder";
          }
        }
        else {
          pcVar12 = "failed to create DER encoded buffer: toBeSignedBuffer";
        }
LAB_002968d0:
        uVar8 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateSignedTicket",pcVar12);
        goto LAB_0029690b;
      }
      local_58 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateSignedTicket",
                        "failed to add ticket algorithm ID to DER file");
      uVar8 = 0;
      local_48 = 0;
      local_50 = 0;
    }
    else {
      uVar8 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallMonetLocalCreateSignedTicket",
                        "failed to add version to DER file");
      iVar1 = 2;
      local_58 = 0;
      local_48 = 0;
      local_50 = 0;
      lVar6 = local_70;
    }
  }
LAB_00296a39:
  lVar13 = 0;
  lVar10 = local_40;
LAB_00296653:
  _DEREncoderDestroy(lVar10);
  _DEREncoderDestroy(lVar7);
  _DEREncoderDestroy(uVar8);
  _DEREncoderDestroy(local_58);
  _DEREncoderDestroy(local_48);
  _SafeRelease(local_a0);
  _SafeRelease(local_78);
  _SafeRelease(lVar6);
  _SafeRelease(local_60);
  _SafeRelease(lVar13);
  _SafeRelease(local_50);
  _SafeFree(local_80);
  _SafeFree(local_c0);
  _SafeFree(local_b8);
  _SafeFree(local_b0);
  _SafeFree(local_98);
  return iVar1;
}

