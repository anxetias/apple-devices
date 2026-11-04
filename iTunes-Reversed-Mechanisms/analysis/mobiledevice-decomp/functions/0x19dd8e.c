// rea decompile_all
// name: _ASRServerHandleConnectionWithProvider
// address: 0x19dd8e
// body: available
// range: 0x19dd8e-0x19e9ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19e9e8 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ASRServerHandleConnectionWithProvider
              (int param_1,void *param_2,code *param_3,undefined8 param_4,ulong param_5,
              code *param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  size_t sVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  void *pvVar20;
  ulong uVar21;
  ssize_t sVar22;
  int *piVar23;
  char *pcVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  undefined4 uVar29;
  undefined1 auVar31 [16];
  code *local_4c8;
  ulong local_4c0;
  undefined8 local_4b8;
  undefined4 local_4ac;
  undefined8 local_4a8;
  uint local_49c;
  int local_498;
  uint local_494;
  uint local_490;
  uint local_48c;
  void *local_488;
  long local_480;
  undefined8 local_478;
  code *local_470;
  long local_468;
  int local_45c;
  ulong local_458 [4];
  undefined1 local_438 [1024];
  long local_38;
  undefined1 auVar30 [16];
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_4b8 = 0;
  local_470 = _defaultProgress;
  if (param_3 != (code *)0x0) {
    local_470 = param_3;
  }
  local_4c0 = param_5;
  local_498 = param_1;
  local_488 = param_2;
  local_478 = param_4;
  (*local_470)(param_4,"Initialized communication with client",1);
  puVar3 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
  puVar2 = PTR__kCFTypeDictionaryKeyCallBacks_004411b0;
  uVar19 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar6 = _CFDictionaryCreate(uVar19,0,0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  lVar7 = _CFPropertyListCreateXMLData(uVar19,uVar6);
  _CFRelease(uVar6);
  lVar8 = _CFDictionaryCreateMutable(uVar19,0,puVar2,puVar3);
  local_4ac = 1;
  uVar6 = _CFNumberCreate(uVar19,3,&local_4ac);
  _CFDictionaryAddValue(lVar8,&cf_Version,uVar6);
  _CFRelease(uVar6);
  local_4ac = 1;
  uVar6 = _CFNumberCreate(uVar19,3,&local_4ac);
  _CFDictionaryAddValue(lVar8,&cf_StreamID,uVar6);
  _CFRelease(uVar6);
  local_4ac = 0x5aa;
  uVar6 = _CFNumberCreate(uVar19,3,&local_4ac);
  _CFDictionaryAddValue(lVar8,&cf_PacketPayloadSize,uVar6);
  _CFRelease(uVar6);
  local_4ac = 0x19;
  uVar6 = _CFNumberCreate(uVar19,3,&local_4ac);
  _CFDictionaryAddValue(lVar8,&cf_PacketsPerFEC,uVar6);
  _CFRelease(uVar6);
  local_4ac = 0x28;
  uVar6 = _CFNumberCreate(uVar19,3,&local_4ac);
  local_468 = lVar8;
  _CFDictionaryAddValue(lVar8,&cf_FECSliceStride,uVar6);
  _CFRelease(uVar6);
  uVar6 = _CFDictionaryCreateMutable
                    (uVar19,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  uVar9 = _CFNumberCreate(uVar19,4,&local_4c0);
  _CFDictionaryAddValue(uVar6,&cf_Size,uVar9);
  _CFRelease(uVar9);
  local_4ac = 1;
  uVar9 = _CFNumberCreate(uVar19,3,&local_4ac);
  _CFDictionaryAddValue(uVar6,&cf_Port,uVar9);
  _CFRelease(uVar9);
  if (local_488 != (void *)0x0) {
    uVar9 = _CFStringCreateWithCString(uVar19,local_488,0x8000100);
    _CFDictionaryAddValue(uVar6,&cf_Passphrase,uVar9);
    _CFRelease(uVar9);
  }
  lVar8 = local_468;
  _CFDictionaryAddValue(local_468,&cf_Payload,uVar6);
  _CFRelease(uVar6);
  lVar10 = _CFDataCreateMutable(uVar19,0);
  if (lVar10 == 0) {
    (*local_470)(local_478,"Could not allocate data for request",100);
    iVar5 = 0xc;
LAB_0019e86a:
    if (lVar8 != 0) {
      _CFRelease(lVar8);
    }
    if (lVar10 != 0) {
      _CFRelease(lVar10);
    }
    if (lVar7 != 0) {
      _CFRelease();
    }
    if (iVar5 == 0) {
      (*local_470)(local_478,"Finished",100);
    }
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      return iVar5;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  uVar1 = *(ulong *)PTR__kCFBooleanTrue_00441110;
  local_45c = 1;
  local_494 = 0;
  uVar21 = uVar1;
  pvVar15 = (void *)0x0;
  lVar12 = 0;
  iVar27 = local_498;
  local_4a8 = uVar19;
LAB_0019e0a1:
  local_48c = (uint)uVar21;
  sVar11 = (size_t)(int)local_48c;
  do {
    if (lVar12 != 0) {
      _CFRelease();
    }
    if (pvVar15 != (void *)0x0) {
      _CFRelease(pvVar15);
    }
    _CFDataSetLength(lVar10,0);
    lVar12 = _read(iVar27,local_438,0x400);
    uVar19 = local_4a8;
    while( true ) {
      if (lVar12 < 1) {
        if (-1 < lVar12) goto LAB_0019e7ab;
        piVar23 = ___error();
        iVar5 = 5;
        if (*piVar23 != 0) {
          iVar5 = *piVar23;
        }
        (*local_470)(local_478,"Could not read all of client request",100);
        goto LAB_0019e86a;
      }
      _CFDataAppendBytes(lVar10,local_438,lVar12);
      lVar12 = _CFDataGetLength(lVar10);
      if ((0 < lVar12) &&
         (lVar12 = _CFPropertyListCreateFromXMLData(uVar19,lVar10,0,0), lVar12 != 0)) break;
      lVar12 = _read(iVar27,local_438,0x400);
    }
    _CFRelease(lVar12);
    lVar12 = _CFDataGetLength(lVar10);
    if (lVar12 == 0) {
LAB_0019e7ab:
      iVar5 = 0;
      goto LAB_0019e86a;
    }
    lVar12 = _CFPropertyListCreateFromXMLData(uVar19,lVar10,0,&local_4b8);
    if (lVar12 == 0) {
      _CFShow(local_4b8);
      _CFRelease(local_4b8);
      (*local_470)(local_478,"Could not create request plist",100);
      iVar5 = 0x16;
      goto LAB_0019e86a;
    }
    lVar8 = _CFGetTypeID(lVar12);
    lVar13 = _CFDictionaryGetTypeID();
    if (lVar8 != lVar13) {
      (*local_470)(local_478,"Bad data received from client",local_45c);
      iVar5 = 0x16;
      lVar8 = local_468;
      goto LAB_0019e865;
    }
    lVar8 = _CFDictionaryGetCount(lVar12);
    if (lVar8 == 0) {
      iVar5 = 0;
      lVar8 = local_468;
      goto LAB_0019e865;
    }
    local_480 = lVar12;
    lVar12 = _CFDictionaryGetValue(lVar12,&cf_Command);
    if (lVar12 == 0) {
      (*local_470)(local_478,"Could not understand client request",100);
      iVar5 = 0x16;
      lVar12 = local_480;
      lVar8 = local_468;
      goto LAB_0019e865;
    }
    lVar13 = _CFStringCompare(lVar12,&cf_Initiate,0);
    lVar8 = local_468;
    if (lVar13 == 0) {
      lVar12 = _CFDictionaryGetValue(local_480,&cf_ChecksumChunks);
      if ((lVar12 == 0) || (cVar4 = _CFEqual(lVar12,uVar1), cVar4 == '\0')) {
        _CFDictionaryRemoveValue(lVar8,&cf_ChecksumChunkSize);
        _CFDictionaryRemoveValue(lVar8,&cf_ChecksumType);
        local_494 = 0;
      }
      else {
        local_4ac = 0x20000;
        uVar19 = _CFNumberCreate(local_4a8,3,&local_4ac);
        _CFDictionaryAddValue(lVar8,&cf_ChecksumChunkSize,uVar19);
        _CFRelease(uVar19);
        lVar12 = _CFDictionaryGetValue(local_480,&cf_ChecksumType);
        if (lVar12 == 0) {
          local_490 = 0;
        }
        else {
          _CFNumberGetValue(lVar12,9,&local_490);
          if (1 < local_490) {
            local_490 = 1;
          }
        }
        uVar19 = _CFNumberCreate(local_4a8,9,&local_490);
        _CFDictionaryAddValue(lVar8,&cf_ChecksumType,uVar19);
        uVar19 = _CFRelease(uVar19);
        local_494 = (uint)CONCAT71((int7)((ulong)uVar19 >> 8),1);
        if (local_490 == 1) {
          local_48c = 0x20;
          local_4c8 = (code *)PTR__CC_SHA256_00441298;
        }
        else if (local_490 == 0) {
          local_48c = 0x14;
          local_4c8 = (code *)PTR__CC_SHA1_00441290;
        }
      }
      pvVar15 = (void *)_CFPropertyListCreateXMLData(local_4a8);
      goto LAB_0019e6f7;
    }
    lVar14 = _CFStringCompare(lVar12,&cf_OOBData,0);
    lVar13 = local_480;
    if (lVar14 == 0) {
      local_458[0] = 0;
      local_49c = 0;
      lVar14 = _CFDictionaryGetValue(local_480,&cf_OOBOffset);
      lVar13 = _CFDictionaryGetValue(lVar13,&cf_OOBLength);
      iVar5 = 0x16;
      lVar12 = local_480;
      lVar8 = local_468;
      if (lVar14 == 0) goto LAB_0019e865;
      lVar17 = _CFGetTypeID(lVar14);
      lVar18 = _CFNumberGetTypeID();
      lVar12 = local_480;
      lVar8 = local_468;
      if ((lVar17 != lVar18) || (lVar13 == 0)) goto LAB_0019e865;
      lVar17 = _CFGetTypeID(lVar13);
      lVar18 = _CFNumberGetTypeID();
      lVar12 = local_480;
      lVar8 = local_468;
      if ((lVar17 != lVar18) ||
         ((cVar4 = _CFNumberGetValue(lVar14,4,local_458), lVar12 = local_480, lVar8 = local_468,
          cVar4 == '\0' ||
          (cVar4 = _CFNumberGetValue(lVar13,3,&local_49c), lVar8 = local_468, iVar27 = local_498,
          lVar12 = local_480, cVar4 == '\0')))) goto LAB_0019e865;
      iVar5 = 0x21;
      if ((CARRY8(local_458[0],(ulong)local_49c)) || (local_4c0 < local_458[0] + local_49c))
      goto LAB_0019e865;
      pvVar15 = (void *)_CFDataCreateMutable(local_4a8);
      if (pvVar15 == (void *)0x0) {
        iVar5 = 0xc;
        lVar12 = local_480;
        goto LAB_0019e865;
      }
      _CFDataSetLength(pvVar15,local_49c);
      local_488 = pvVar15;
      uVar19 = _CFDataGetMutableBytePtr(pvVar15);
      iVar5 = (*param_6)(param_7,uVar19,local_49c);
      pvVar15 = local_488;
      if (iVar5 == 0) goto LAB_0019e6ff;
      goto LAB_0019e9c7;
    }
    lVar12 = _CFStringCompare(lVar12,&cf_Payload,0);
    if (lVar12 != 0) break;
    (*local_470)(local_478,"Starting to send payload",5);
    sVar16 = sVar11 + 0x20000;
    if ((local_494 & 1) == 0) {
      sVar16 = 0x20000;
    }
    pvVar15 = _valloc(sVar16);
    uVar21 = local_4c0;
    if (pvVar15 == (void *)0x0) {
      piVar23 = ___error();
      iVar5 = *piVar23;
      (*local_470)(local_478,"Could not allocate buffer",100);
      lVar12 = local_480;
      goto LAB_0019e865;
    }
    local_488 = pvVar15;
    if (local_4c0 == 0) {
      local_45c = 5;
    }
    else {
      auVar30._8_4_ = (int)(local_4c0 >> 0x20);
      auVar30._0_8_ = local_4c0;
      auVar30._12_4_ = 0x45300000;
      uVar29 = (undefined4)local_4c0;
      local_45c = 5;
      uVar25 = 0;
      do {
        uVar26 = uVar21 - uVar25;
        if (0x1ffff < uVar26) {
          uVar26 = 0x20000;
        }
        iVar5 = (*param_6)(param_7,local_488,uVar26);
        if (iVar5 != 0) {
          pcVar24 = "Read failed";
LAB_0019e84b:
          (*local_470)(local_478,pcVar24,local_45c);
          lVar12 = local_480;
          lVar8 = local_468;
          goto LAB_0019e865;
        }
        auVar31._8_4_ = (int)(uVar25 >> 0x20);
        auVar31._0_8_ = uVar25;
        auVar31._12_4_ = 0x45300000;
        iVar5 = (int)(((((double)CONCAT44(0x43300000,(int)uVar25) - 4503599627370496.0) +
                       (auVar31._8_8_ - 1.9342813113834067e+25)) /
                      (((double)CONCAT44(0x43300000,uVar29) - 4503599627370496.0) +
                      (auVar30._8_8_ - 1.9342813113834067e+25))) * 94.0 + 5.0);
        if (local_45c < iVar5) {
          (*local_470)(local_478,"Sending payload",iVar5);
          local_45c = iVar5;
        }
        pvVar15 = local_488;
        uVar28 = uVar26;
        if ((local_494 & 1) != 0) {
          (*local_4c8)(local_488,uVar26 & 0xffffffff,local_458);
          _memcpy((void *)((long)pvVar15 + uVar26),local_458,sVar11);
          uVar28 = sVar11 + uVar26;
        }
        sVar16 = _write(local_498,local_488,uVar28);
        if (sVar16 == 0xffffffffffffffff) {
          piVar23 = ___error();
          iVar5 = 5;
          if (*piVar23 != 0) {
            iVar5 = *piVar23;
          }
          if (uVar25 == 0) {
            pcVar24 = "Client aborted connection";
          }
          else {
            pcVar24 = _strerror(iVar5);
          }
          goto LAB_0019e84b;
        }
        if (sVar16 != uVar28) {
          (*local_470)(local_478,"Short write",local_45c);
        }
        uVar25 = uVar25 + uVar26;
      } while (uVar25 < uVar21);
    }
    _free(local_488);
    pvVar15 = (void *)0x0;
    lVar12 = local_480;
    lVar8 = local_468;
    iVar27 = local_498;
  } while( true );
  pvVar15 = (void *)_CFRetain(lVar7);
LAB_0019e6f7:
  if (pvVar15 == (void *)0x0) {
    (*local_470)(local_478,"Unknown response type",local_45c);
    pvVar15 = (void *)0x0;
    uVar21 = (ulong)local_48c;
    lVar12 = local_480;
  }
  else {
LAB_0019e6ff:
    local_488 = pvVar15;
    pvVar20 = (void *)_CFDataGetBytePtr();
    lVar13 = _CFDataGetLength(local_488);
    uVar21 = (ulong)local_48c;
    pvVar15 = local_488;
    lVar12 = local_480;
    if (0 < lVar13) {
      pvVar15 = (void *)(lVar13 + (long)pvVar20);
      do {
        sVar22 = _write(iVar27,pvVar20,(long)pvVar15 - (long)pvVar20);
        if (sVar22 < 1) {
          piVar23 = ___error();
          iVar5 = 5;
          if (*piVar23 != 0) {
            iVar5 = *piVar23;
          }
          (*local_470)(local_478,"Could not write all the data",local_45c);
LAB_0019e9c7:
          _CFRelease(local_488);
          lVar12 = local_480;
LAB_0019e865:
          _CFRelease(lVar12);
          goto LAB_0019e86a;
        }
        pvVar20 = (void *)((long)pvVar20 + sVar22);
      } while (pvVar20 < pvVar15);
      uVar21 = (ulong)local_48c;
      pvVar15 = local_488;
      lVar12 = local_480;
    }
  }
  goto LAB_0019e0a1;
}

