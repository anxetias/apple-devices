// rea decompile_all
// name: _uarpPlatformEndpointRecvMessage
// address: 0x18411c
// body: available
// range: 0x18411c-0x1850f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _uarpPlatformEndpointRecvMessage(long param_1,uint *param_2,short *param_3,uint param_4)

{
  long lVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 local_64;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulong local_50;
  uint local_44;
  ulong local_40;
  ulong local_38;
  
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  uVar15 = (ulong)param_4;
  if (param_3 == (short *)0x0 || (param_2 == (uint *)0x0 || param_1 == 0)) {
    return 0x1e;
  }
  _UARPLayer2LogPacket();
  if (param_4 < 6) {
    return 9;
  }
  sVar3 = _uarpNtohs(*param_3);
  *param_3 = sVar3;
  sVar3 = _uarpNtohs(param_3[1]);
  param_3[1] = sVar3;
  sVar3 = _uarpNtohs(param_3[2]);
  param_3[2] = sVar3;
  *(short *)(param_2 + 0xf) = sVar3;
  if ((ushort)param_3[1] + 6 != param_4) {
    return 9;
  }
  *(undefined1 *)(param_1 + 0x244) = 1;
  iVar9 = 1;
  switch(*param_3) {
  case 0:
    if (*(int *)(param_1 + 0x228) != 0) {
      uVar6 = (ushort)param_2[0x1c];
      local_38 = uVar15;
      if (uVar6 != 0) {
        uVar16 = 0;
        do {
          lVar14 = *(long *)(*(long *)(param_2 + 0x1e) + uVar16 * 8);
          if (lVar14 != 0) {
            sVar3 = _uarpNtohs(**(undefined2 **)(lVar14 + 0x10));
            if (sVar3 == 0) {
              _UARPLayer2WatchdogCancel(param_1,param_2);
              _uarpTransmitQueuePendingEntryComplete(param_1,param_2,lVar14);
              break;
            }
            uVar6 = (ushort)param_2[0x1c];
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar6);
      }
      *(undefined8 *)((long)param_2 + 0x8a) = 0;
      *(undefined8 *)((long)param_2 + 0x92) = 0;
      *(undefined8 *)((long)param_2 + 0x9a) = 0;
      *(undefined8 *)((long)param_2 + 0xa2) = 0;
      if ((*(int *)(param_1 + 0x228) == 1) ||
         (((*(int *)(param_1 + 0x228) == 2 &&
           (cVar2 = _uarpPlatformEndpointIsMessageTypePending(param_1,param_2,1), cVar2 == '\0')) &&
          (*(long *)(param_1 + 0x128) != 0)))) {
        _uarpSendVersionDiscoveryRequest(param_1,param_2,(short)param_2[3]);
      }
      uVar15 = local_38;
      iVar9 = 0;
      if (*(char *)((long)param_2 + 0xe) == '\x01') {
        _uarpPlatformReOfferFirmware(param_1,param_2);
      }
      break;
    }
    _uarpPlatformEndpointSendSyncMsg(param_1,param_2);
  case 0x1e:
switchD_001841ea_caseD_1e:
    iVar9 = 0;
    break;
  case 1:
    iVar9 = 9;
    if (param_4 < 8) break;
    iVar9 = _uarpNtohs(param_3[3]);
    if ((ushort)*(int *)(param_1 + 0xc) <= (ushort)iVar9) {
      iVar9 = *(int *)(param_1 + 0xc);
    }
    uVar11 = iVar9 + (uint)((short)iVar9 == 0);
    *(short *)(param_2 + 0xc) = (short)uVar11;
    _UARPLayer2ProtocolVersion(param_1,param_2,uVar11 & 0xffff);
    _uarpSendVersionDiscoveryResponse(param_1,param_2,(short)param_2[0xc]);
    goto switchD_001841ea_caseD_1e;
  case 2:
    iVar9 = 9;
    if (9 < param_4) {
      sVar3 = _uarpNtohs(param_3[3]);
      param_3[3] = sVar3;
      iVar9 = 2;
      if (sVar3 == 0) {
        local_38 = uVar15;
        uVar7 = _uarpNtohs(param_3[4]);
        uVar6 = 1;
        if (1 < uVar7) {
          uVar6 = uVar7;
        }
        uVar7 = 4;
        if (uVar6 < 4) {
          uVar7 = uVar6;
        }
        *(ushort *)(param_2 + 0xc) = uVar7;
        uVar6 = (ushort)param_2[0x1c];
        if (uVar6 != 0) {
          uVar15 = 0;
          do {
            lVar14 = *(long *)(*(long *)(param_2 + 0x1e) + uVar15 * 8);
            if (lVar14 != 0) {
              sVar3 = _uarpNtohs(**(undefined2 **)(lVar14 + 0x10));
              if (sVar3 == 1) {
                _UARPLayer2WatchdogCancel(param_1,param_2);
                _uarpTransmitQueuePendingEntryComplete(param_1,param_2,lVar14);
                break;
              }
              uVar6 = (ushort)param_2[0x1c];
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar6);
        }
        _UARPLayer2ProtocolVersion(param_1,param_2,(short)param_2[0xc]);
        iVar9 = 0;
        uVar15 = local_38;
      }
    }
    break;
  case 3:
    iVar9 = 9;
    if (param_4 < 10) break;
    uVar16 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,4,0x10,0);
    if (uVar16 == 0) goto LAB_00184ec3;
    lVar14 = *(long *)(uVar16 + 0x10);
    local_38 = lVar14 + 8;
    local_40 = uVar16;
    uVar10 = _uarpNtohl(*(undefined4 *)(param_3 + 3));
    *(undefined4 *)(lVar14 + 8) = uVar10;
    *(int *)(lVar14 + 0xc) = *(int *)(local_40 + 0x18) + -0x10;
    uVar16 = _uarpCallbackUpdateInformationTLV(param_1,param_2,local_38);
    local_38 = CONCAT62((int6)(uVar16 >> 0x10),0x10);
    if ((int)uVar16 == 0) {
      local_38 = (ulong)*(ushort *)(lVar14 + 0xc);
      local_50 = local_50 & 0xffffffff00000000;
      uVar4 = _uarpNtohs(*(ushort *)(lVar14 + 0xc) + 10);
      *(undefined2 *)(lVar14 + 2) = uVar4;
      uVar10 = _uarpNtohl(*(undefined4 *)(lVar14 + 8));
      *(undefined4 *)(lVar14 + 8) = uVar10;
      uVar10 = _uarpNtohl(*(undefined4 *)(lVar14 + 0xc));
      *(undefined4 *)(lVar14 + 0xc) = uVar10;
      local_38 = (ulong)((int)local_38 + 0x10);
      uVar16 = local_50;
    }
    uVar4 = _uarpNtohs(uVar16 & 0xffff);
    *(undefined2 *)(lVar14 + 6) = uVar4;
    *(short *)(local_40 + 0x1c) = (short)local_38;
    uVar16 = local_40;
    goto LAB_00184da5;
  case 4:
    iVar9 = 9;
    if ((param_4 < 8) || (uVar4 = _uarpNtohs(param_3[3]), param_4 < 0x10)) break;
    local_38 = CONCAT62(local_38._2_6_,uVar4);
    uVar10 = _uarpNtohl(*(undefined4 *)(param_3 + 4));
    local_40 = CONCAT44(local_40._4_4_,uVar10);
    uVar11 = _uarpNtohl(*(undefined4 *)(param_3 + 6));
    iVar9 = 8;
    if ((0xffffffef < uVar11) || (iVar9 = 9, param_4 < uVar11 + 0x10)) break;
    _uarpPlatformResponseAccessoryInfo
              (param_1,param_2,local_38 & 0xffff,local_40 & 0xffffffff,uVar11,param_3 + 8);
    goto switchD_001841ea_caseD_1e;
  case 5:
    iVar9 = 9;
    if (param_4 < 0x24) break;
    _uarpTagStructUnpack32(*(undefined4 *)(param_3 + 3),&local_64);
    uVar4 = _uarpNtohs(param_3[5]);
    local_38 = CONCAT62(local_38._2_6_,uVar4);
    uVar4 = _uarpNtohs(param_3[6]);
    local_40 = CONCAT62(local_40._2_6_,uVar4);
    _uarpVersionEndianSwap(param_3 + 7,&local_60);
    uVar10 = _uarpNtohl(*(undefined4 *)(param_3 + 0xf));
    local_50 = CONCAT44(local_50._4_4_,uVar10);
    uVar4 = _uarpNtohs(param_3[0x11]);
    local_44 = CONCAT22(local_44._2_2_,uVar4);
    lVar14 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,0xd,0x24,0);
    iVar9 = 0xb;
    if (lVar14 == 0) break;
    lVar1 = *(long *)(lVar14 + 0x10);
    uVar10 = _uarpTagStructPack32(&local_64);
    *(undefined4 *)(lVar1 + 6) = uVar10;
    uVar5 = (undefined2)local_38;
    uVar4 = _uarpNtohs();
    *(undefined2 *)(lVar1 + 10) = uVar4;
    uVar4 = (ushort)local_40;
    uVar8 = _uarpNtohs();
    *(undefined2 *)(lVar1 + 0xc) = uVar8;
    _uarpVersionEndianSwap(&local_60,lVar1 + 0xe);
    uVar10 = _uarpNtohl(local_50 & 0xffffffff);
    *(undefined4 *)(lVar1 + 0x1e) = uVar10;
    uVar8 = _uarpNtohs((undefined2)local_44);
    *(undefined2 *)(lVar1 + 0x22) = uVar8;
    iVar9 = _uarpTransmitBuffer2(param_1,param_2,lVar14);
    if (iVar9 != 0) break;
    lVar14 = _uarpPlatformAssetFindByAssetID(param_1,param_2,0,uVar4);
    if ((lVar14 != 0) && (iVar9 = 0, *(int *)(lVar14 + 8) == 0)) break;
    lVar14 = _uarpPlatformFindPreparedAsset(param_1,param_2,uVar4,uVar5,&local_64,&local_60);
    if (lVar14 == 0) {
      lVar14 = _uarpPlatformCreateRxAsset(param_1,param_2);
      iVar9 = 0xb;
      if (lVar14 == 0) break;
    }
    *(undefined8 *)(lVar14 + 0x1c4) = 0xffffffffffffffff;
    uVar6 = _uarpNtohs(param_3[0x11]);
    *(uint *)(lVar14 + 0x1c0) = (uint)uVar6;
    *(ushort *)(lVar14 + 0x2c) = (ushort)local_40;
    *(undefined2 *)(lVar14 + 0x2e) = (undefined2)local_38;
    *(undefined4 *)(lVar14 + 0x30) = local_64;
    *(uint *)(lVar14 + 0x34) = local_60;
    *(undefined4 *)(lVar14 + 0x38) = uStack_5c;
    *(undefined4 *)(lVar14 + 0x3c) = uStack_58;
    *(undefined4 *)(lVar14 + 0x40) = uStack_54;
    uVar10 = _uarpNtohl(*(undefined4 *)(param_3 + 0xf));
    *(undefined4 *)(lVar14 + 0x44) = uVar10;
    if ((*(ushort *)(lVar14 + 0x2e) & 1) == 0) {
      iVar9 = 0x16;
      if ((*(ushort *)(lVar14 + 0x2e) & 2) == 0) break;
      _UARPLayer2DynamicAssetOffered(param_1,param_2,lVar14);
    }
    else {
      _UARPLayer2SuperBinaryOffered(param_1,param_2,lVar14);
    }
    goto switchD_001841ea_caseD_1e;
  case 6:
    iVar9 = 9;
    if (param_4 < 0xe) break;
    local_38 = uVar15;
    uVar6 = _uarpNtohs(param_3[6]);
    uVar11 = (uint)uVar6;
    if (*param_2 < (uint)uVar6) {
      uVar11 = *param_2;
    }
    local_60 = CONCAT22(local_60._2_2_,(short)uVar11);
    uVar10 = _uarpNtohl(*(undefined4 *)(param_3 + 4));
    uVar4 = _uarpNtohs(param_3[3]);
    local_40 = CONCAT62(local_40._2_6_,uVar4);
    uVar15 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,7,(uVar11 & 0xffff) + 0x12,0);
    if (uVar15 != 0) {
      lVar14 = *(long *)(uVar15 + 0x10);
      uVar16 = local_40 & 0xffff;
      local_40 = uVar15;
      uVar4 = _uarpPlatformAssetDataRequest
                        (param_1,param_2,uVar16,uVar11 & 0xffff,uVar10,lVar14 + 0x12,&local_60);
      uVar4 = _uarpNtohs(uVar4);
      *(undefined2 *)(lVar14 + 6) = uVar4;
      *(short *)(lVar14 + 8) = param_3[3];
      *(undefined4 *)(lVar14 + 10) = *(undefined4 *)(param_3 + 4);
      *(short *)(lVar14 + 0xe) = param_3[6];
      uVar4 = _uarpNtohs((short)local_60);
      *(undefined2 *)(lVar14 + 0x10) = uVar4;
      sVar3 = (short)local_60 + 0x12;
      uVar4 = _uarpNtohs((local_60 & 0xffff) + 0xc & 0xffff);
      *(undefined2 *)(lVar14 + 2) = uVar4;
      *(short *)(local_40 + 0x1c) = sVar3;
      iVar9 = _uarpTransmitBuffer2(param_1,param_2);
      uVar15 = local_38;
      break;
    }
    goto LAB_00184ee1;
  case 7:
    iVar9 = 9;
    if (param_4 < 0x12) break;
    uVar4 = _uarpNtohs(param_3[4]);
    uVar16 = _uarpPlatformAssetFindByAssetID(param_1,param_2,0,uVar4);
    if (uVar16 != 0) {
      local_38 = uVar16;
      uVar4 = _uarpNtohs(param_3[3]);
      local_40 = CONCAT62(local_40._2_6_,uVar4);
      uVar12 = _uarpNtohl(*(undefined4 *)(param_3 + 5));
      local_50 = CONCAT44(local_50._4_4_,uVar12);
      uVar4 = _uarpNtohs(param_3[7]);
      local_44 = CONCAT22(local_44._2_2_,uVar4);
      uVar6 = _uarpNtohs(param_3[8]);
      if (uVar6 + 0x12 <= param_4) {
        iVar13 = _uarpPlatformAssetResponseData
                           (param_1,local_38,local_40 & 0xffff,param_3 + 9,local_50 & 0xffffffff,
                            (undefined2)local_44,CONCAT44(uVar10,(uint)uVar6));
        iVar9 = 0;
        if (iVar13 != 0x1d) {
          iVar9 = iVar13;
        }
      }
      break;
    }
    goto LAB_00184eec;
  case 8:
    iVar9 = 9;
    if (param_4 < 8) break;
    uVar4 = _uarpNtohs(param_3[3]);
    lVar14 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,0xe,8,0);
    if (lVar14 != 0) {
      local_38 = CONCAT62(local_38._2_6_,uVar4);
      *(short *)(*(long *)(lVar14 + 0x10) + 6) = param_3[3];
      iVar9 = _uarpTransmitBuffer2(param_1,param_2,lVar14);
      if (iVar9 == 0) {
        if (((local_38 & 1) == 0) || ((char)param_2[0xe] != '\x01')) {
          iVar9 = 0x21;
          if (((local_38 & 2) != 0) && ((char)param_2[0xe] == '\0')) {
            *(undefined1 *)(param_2 + 0xe) = 1;
            iVar9 = _uarpPlatformDataTransferResume(param_1,param_2);
          }
        }
        else {
          *(undefined1 *)(param_2 + 0xe) = 0;
          iVar9 = _UARPLayer2DataTransferPause(param_1,param_2);
        }
      }
      break;
    }
    goto LAB_00184ec3;
  case 9:
    iVar9 = 9;
    if (param_4 < 10) break;
    uVar4 = _uarpNtohs(param_3[3]);
    uVar5 = _uarpNtohs(param_3[4]);
    local_40 = CONCAT62(local_40._2_6_,uVar5);
    uVar16 = _uarpPlatformAssetFindByAssetID(param_1,param_2,1,uVar4);
    if (uVar16 != 0) {
      local_60 = *(uint *)(uVar16 + 0x30);
      local_44 = (uint)*(ushort *)(uVar16 + 0x2e);
      local_50 = uVar16;
      lVar14 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,0xf,10,0);
      if (lVar14 != 0) {
        lVar1 = *(long *)(lVar14 + 0x10);
        local_38 = uVar15;
        uVar4 = _uarpNtohs(uVar4);
        *(undefined2 *)(lVar1 + 6) = uVar4;
        local_40 = CONCAT44(local_40._4_4_,(uint)(ushort)local_40);
        uVar4 = _uarpNtohs();
        *(undefined2 *)(lVar1 + 8) = uVar4;
        iVar9 = _uarpTransmitBuffer2(param_1,param_2,lVar14);
        uVar15 = local_38;
        if ((((iVar9 == 0) &&
             (iVar9 = _UARPLayer2AssetProcessingNotification2(param_1,param_2,local_50),
             uVar15 = local_38, iVar9 == 0)) && (iVar9 = 0, (local_44 & 2) != 0)) &&
           ((*(long *)(param_2 + 0x14) != 0 &&
            (cVar2 = _uarpAssetTagCompare(&local_60), cVar2 != '\0')))) {
          if ((short)param_2[7] == 1) {
            uVar16 = 0;
          }
          else {
            uVar15 = 0;
            do {
              *(undefined4 *)(*(long *)(param_2 + 0x14) + uVar15 * 4) =
                   *(undefined4 *)(*(long *)(param_2 + 0x14) + 4 + uVar15 * 4);
              uVar15 = uVar15 + 1;
              uVar16 = (ulong)((ushort)param_2[7] - 1);
            } while (uVar15 < uVar16);
          }
          *(undefined4 *)(*(long *)(param_2 + 0x14) + uVar16 * 4) = 0;
          cVar2 = _uarpAssetTagIsValid();
          uVar15 = local_38;
          iVar9 = 0;
          if (cVar2 != '\0') {
            _UARPLayer2AssetSolicitation(param_1,param_2,*(undefined8 *)(param_2 + 0x14));
            uVar15 = local_38;
            iVar9 = 0;
          }
        }
        break;
      }
      goto LAB_00184ec3;
    }
    goto switchD_001841ea_caseD_1e;
  case 10:
    uVar10 = _UARPLayer2ApplyStagedAssets(param_1,param_2,&local_60);
    local_40 = CONCAT44(local_40._4_4_,uVar10);
    uVar16 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,0xb,10,0);
    iVar9 = 0xb;
    if (uVar16 == 0) break;
    lVar14 = *(long *)(uVar16 + 0x10);
    local_38 = uVar15;
    uVar4 = _uarpNtohs(local_40 & 0xffff);
    *(undefined2 *)(lVar14 + 6) = uVar4;
    uVar4 = _uarpNtohs((short)local_60);
    *(undefined2 *)(lVar14 + 8) = uVar4;
    uVar15 = local_38;
LAB_00184da5:
    iVar9 = _uarpTransmitBuffer2(param_1,param_2,uVar16);
    break;
  case 0xb:
    iVar9 = 8;
    if (9 < param_4) {
      uVar4 = _uarpNtohs(param_3[3]);
      uVar5 = _uarpNtohs(param_3[4]);
      iVar9 = _UARPLayer2ApplyStagedAssetsResponse(param_1,param_2,uVar5,uVar4);
    }
    break;
  case 0xc:
    iVar9 = 9;
    if (param_4 < 8) break;
    uVar4 = _uarpNtohs(param_3[3]);
    lVar14 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,0x10,8,0);
    if (lVar14 == 0) goto LAB_00184ec3;
    local_38 = CONCAT62(local_38._2_6_,uVar4);
    *(short *)(*(long *)(lVar14 + 0x10) + 6) = param_3[3];
    iVar9 = _uarpTransmitBuffer2(param_1,param_2,lVar14);
    if (iVar9 != 0) break;
    _uarpPlatformAssetRescinded(param_1,param_2,local_38 & 0xffff);
    goto switchD_001841ea_caseD_1e;
  case 0xd:
    bVar18 = param_4 < 0x24;
    goto LAB_00184761;
  case 0xe:
    iVar9 = 8;
    if (7 < param_4) {
      uVar6 = _uarpNtohs(param_3[3]);
      if ((uVar6 & 1) == 0) {
        iVar9 = 0x1a;
        if ((uVar6 & 2) != 0) {
          iVar9 = _UARPLayer2DataTransferResumeAck(param_1,param_2);
        }
      }
      else {
        iVar9 = _UARPLayer2DataTransferPauseAck(param_1,param_2);
      }
    }
    break;
  case 0xf:
    iVar9 = 8;
    if (9 < param_4) {
      uVar4 = _uarpNtohs(param_3[3]);
      uVar5 = _uarpNtohs(param_3[4]);
      local_38 = CONCAT62(local_38._2_6_,uVar5);
      uVar16 = _uarpPlatformAssetFindByAssetID(param_1,param_2,0,uVar4);
      iVar9 = 0;
      if (uVar16 != 0) {
        uVar17 = local_38 & 0xffff;
        local_38 = uVar16;
        iVar9 = _UARPLayer2AssetProcessingNotificationAck(param_1,param_2,uVar16,uVar17);
        *(undefined1 *)(local_38 + 0x48) = 1;
      }
    }
    break;
  case 0x10:
    iVar9 = 8;
    if (param_4 < 8) break;
    sVar3 = _uarpNtohs(param_3[3]);
    if (sVar3 == -1) {
      _UARPLayer2RescindAllAssetsAck(param_1,param_2,0);
      iVar9 = 0;
      break;
    }
    lVar14 = _uarpPlatformAssetFindByAssetID(param_1,param_2,0,sVar3);
    if (lVar14 != 0) {
      _UARPLayer2AssetRescindedAck(param_1,param_2,lVar14);
      iVar9 = 0;
      break;
    }
LAB_00184eec:
    iVar9 = 0x11;
    break;
  case 0x11:
    iVar9 = 9;
    if (param_4 < 10) break;
    lVar14 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,0x12,0xe,0);
    if (lVar14 == 0) goto LAB_00184ec3;
    lVar1 = *(long *)(lVar14 + 0x10);
    local_38 = uVar15;
    uVar10 = _uarpNtohl(0);
    *(undefined4 *)(lVar1 + 6) = uVar10;
    *(undefined4 *)(lVar1 + 10) = *(undefined4 *)(param_3 + 3);
    iVar9 = _uarpTransmitBuffer2(param_1,param_2,lVar14);
    uVar15 = local_38;
    if (iVar9 != 0) break;
    local_60 = *(uint *)(param_3 + 3);
    iVar9 = _uarpAssetQueueSolicitation(param_1,param_2);
    uVar15 = local_38;
    if (iVar9 == 1) {
      _UARPLayer2AssetSolicitation(param_1,param_2,&local_60);
      uVar15 = local_38;
    }
    else if (iVar9 == 2) {
      _uarpSendDynamicAssetPreProcessingStatus(param_1,param_2,&local_60,2,0xd00);
    }
    goto switchD_001841ea_caseD_1e;
  case 0x12:
    bVar18 = param_4 < 0xe;
LAB_00184761:
    iVar9 = (uint)bVar18 << 3;
    break;
  case 0x13:
    iVar9 = 8;
    if (param_4 < 0xc) break;
    local_38 = uVar15;
    uVar4 = _uarpNtohs(param_3[5]);
    local_40 = CONCAT62(local_40._2_6_,uVar4);
    uVar11 = *(uint *)(param_3 + 3);
    local_60 = uVar11;
    lVar14 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,0x14,0xc,0);
    if (lVar14 != 0) {
      lVar1 = *(long *)(lVar14 + 0x10);
      *(uint *)(lVar1 + 6) = uVar11;
      local_40 = CONCAT44(local_40._4_4_,(uint)(ushort)local_40);
      uVar4 = _uarpNtohs();
      *(undefined2 *)(lVar1 + 10) = uVar4;
      iVar9 = _uarpTransmitBuffer2(param_1,param_2,lVar14);
      uVar15 = local_38;
      uVar16 = local_40;
      if (iVar9 == 0) {
        lVar14 = _uarpPlatformAssetFindByTag(param_1,param_2,0,&local_60);
        if (lVar14 == 0) {
          iVar9 = 3;
        }
        else {
          *(undefined1 *)(lVar14 + 0x48) = 1;
          iVar9 = _UARPLayer2AssetPreProcessingNotification
                            (param_1,param_2,lVar14,uVar16 & 0xffffffff);
        }
      }
      break;
    }
LAB_00184ee1:
    uVar15 = local_38;
    iVar9 = 0xb;
    break;
  case 0x14:
    iVar9 = 8;
    if (param_4 < 0xc) break;
    uVar4 = _uarpNtohs(param_3[5]);
    local_60 = *(uint *)(param_3 + 3);
    lVar14 = _uarpPlatformAssetFindByTag(param_1,param_2,1);
    if (lVar14 != 0) {
      *(undefined1 *)(lVar14 + 0x48) = 1;
      iVar9 = _UARPLayer2AssetPreProcessingNotificationAck(param_1,param_2,lVar14,uVar4);
      if (iVar9 != 3) break;
    }
    goto switchD_001841ea_caseD_1e;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    break;
  case 0x1d:
    uVar16 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,0x1e,8,0);
    if (uVar16 != 0) {
      lVar14 = *(long *)(uVar16 + 0x10);
      local_40 = uVar16;
      local_38 = uVar15;
      uVar4 = _uarpNtohs(0);
      *(undefined2 *)(lVar14 + 6) = uVar4;
      iVar9 = _uarpTransmitBuffer2(param_1,param_2,local_40);
      uVar15 = local_38;
      if (iVar9 == 0) {
        _fUarpLayer3NoFirmwareUpdateAvailable(param_1,param_2);
        uVar15 = local_38;
        iVar9 = 0;
      }
      break;
    }
LAB_00184ec3:
    iVar9 = 0xb;
    break;
  default:
    if ((*param_3 == -1) && (iVar9 = 8, 10 < param_4)) {
      local_38 = (long)param_3 + 0xb;
      local_40 = CONCAT44(local_40._4_4_,param_4 - 0xb);
      uVar4 = _uarpNtohs(*(undefined2 *)((long)param_3 + 9));
      iVar9 = _UARPLayer2VendorSpecificRecvMessage
                        (param_1,param_2,param_3 + 3,uVar4,local_38,local_40 & 0xffffffff);
    }
  }
  sVar3 = _uarpNtohs(*param_3);
  *param_3 = sVar3;
  sVar3 = _uarpNtohs(param_3[1]);
  param_3[1] = sVar3;
  sVar3 = _uarpNtohs(param_3[2]);
  param_3[2] = sVar3;
  _uarpTransmitQueueProcessRecv(param_1,param_2,param_3,uVar15 & 0xffffffff);
  *(undefined1 *)(param_1 + 0x244) = 0;
  _uarpTransmitQueueService(param_1,param_2);
  _uarpPlatformGarbageCollection(param_1,param_2);
  return iVar9;
}

