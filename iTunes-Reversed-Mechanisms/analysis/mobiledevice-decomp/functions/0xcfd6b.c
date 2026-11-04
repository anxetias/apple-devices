// rea decompile_all
// name: __block_handleAsyncURLRequest
// address: 0xcfd6b
// body: available
// range: 0xcfd6b-0xd067f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* __block_handleAsyncURLRequest(__CFDictionary const*) */

int __block_handleAsyncURLRequest(__CFDictionary *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  size_t sVar13;
  void *pvVar14;
  __CFDictionary *p_Var15;
  cfstringStruct *pcVar16;
  size_t sVar17;
  undefined4 local_bc;
  __CFDictionary *local_b8;
  __AMRestoreModeDevice *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  long local_98;
  int local_8c;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  void *local_50;
  void *local_48;
  long local_40;
  int local_34;
  
  puVar2 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
  puVar1 = PTR__kCFTypeDictionaryKeyCallBacks_004411b0;
  local_34 = 0;
  local_a8 = 3;
  local_a4 = 0x3c;
  local_78 = 0;
  local_98 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_8c = 0;
  uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_80 = _CFDictionaryCreateMutable
                       (uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  local_b0 = (__AMRestoreModeDevice *)_CFDictionaryGetValue(param_1,&cf_device);
  uVar6 = _CFDictionaryGetValue(param_1,&cf_message);
  _CFDictionaryGetValue(param_1,&cf_options);
  local_b8 = param_1;
  uVar7 = _CFDictionaryGetValue(param_1,&cf_msgArgs);
  local_70 = uVar8;
  uVar8 = _CFDictionaryCreateMutable(uVar8,0,puVar1,puVar2);
  lVar9 = _CFDictionaryGetValue(uVar6,&cf_DataPort);
  if (lVar9 == 0) {
LAB_000d05e0:
    local_34 = 10;
    iVar4 = -1;
LAB_000cff58:
    local_68 = 0;
LAB_000cff80:
    local_40 = 0;
    local_48 = (void *)0x0;
    local_50 = (void *)0x0;
    local_60 = 0;
  }
  else {
    lVar10 = _CFGetTypeID(lVar9);
    lVar11 = _CFNumberGetTypeID();
    if (lVar10 != lVar11) goto LAB_000d05e0;
    local_bc = 0;
    _CFNumberGetValue(lVar9,9,&local_bc);
    iVar4 = _AMRestoreModeDeviceConnectToPortInternal(local_b0,(ushort)local_bc,0.0,0);
    if (iVar4 < 0) {
      local_34 = 2;
      goto LAB_000cff58;
    }
    lVar9 = _CFDictionaryGetValue(uVar7,&cf_SerializedRequest);
    if (lVar9 == 0) {
      local_40 = _CFDictionaryGetValue(uVar7,&cf_RequestMethod);
      lVar9 = _CFGetTypeID(local_40);
      lVar10 = _CFStringGetTypeID();
      if ((lVar9 != lVar10) || (lVar9 = _CFDictionaryGetValue(uVar7,&cf_RequestURL), lVar9 == 0))
      goto LAB_000d05f2;
      lVar10 = _CFGetTypeID(lVar9);
      lVar11 = _CFStringGetTypeID();
      if (lVar10 != lVar11) {
        local_34 = 10;
        goto LAB_000cff58;
      }
      local_54 = iVar4;
      uVar6 = _CFURLCreateWithString(local_70,lVar9,0);
      lVar9 = _CFDictionaryGetValue(uVar7,&cf_RequestBody);
      local_68 = uVar6;
      if (lVar9 == 0) {
LAB_000d0031:
        lVar10 = _CFDictionaryGetValue(uVar7,&cf_RequestAdditionalHeaders);
        if (lVar10 != 0) {
          lVar11 = _CFGetTypeID(lVar10);
          lVar12 = _CFDictionaryGetTypeID();
          if (lVar11 != lVar12) goto LAB_000d063b;
        }
        lVar11 = _CFHTTPMessageCreateRequest
                           (local_70,local_40,uVar6,*(undefined8 *)PTR__kCFHTTPVersion1_1_004413e8);
        if (lVar11 != 0) {
          if (lVar9 != 0) {
            _CFHTTPMessageSetBody(lVar11,lVar9);
          }
          uVar6 = local_80;
          iVar4 = local_54;
          local_40 = lVar11;
          if ((lVar10 != 0) && (lVar9 = _CFDictionaryGetCount(lVar10), iVar4 = local_54, 0 < lVar9))
          {
            sVar13 = _CFDictionaryGetCount(lVar10);
            pvVar14 = _calloc(sVar13,8);
            local_48 = _calloc(sVar13,8);
            local_50 = pvVar14;
            _CFDictionaryGetKeysAndValues(lVar10,pvVar14,local_48);
            if (0 < (long)sVar13) {
              sVar17 = 0;
              do {
                uVar8 = *(undefined8 *)((long)local_50 + sVar17 * 8);
                uVar6 = *(undefined8 *)((long)local_48 + sVar17 * 8);
                lVar9 = _CFGetTypeID(uVar8);
                lVar10 = _CFStringGetTypeID();
                if (lVar9 == lVar10) {
                  lVar9 = _CFGetTypeID(uVar6);
                  lVar10 = _CFStringGetTypeID();
                  if (lVar9 != lVar10) {
                    pcVar16 = &
                              cf_URLRequest_Devicesentnon_stringvalueinadditionalHeaders_ignoringentry
                    ;
                    goto LAB_000d0167;
                  }
                  _CFHTTPMessageSetHeaderFieldValue(local_40,uVar8,uVar6);
                }
                else {
                  pcVar16 = &cf_URLRequest_Devicesentnon_stringkeyinadditionalHeaders_ignoringentry;
LAB_000d0167:
                  _AMRLog(4,pcVar16);
                }
                sVar17 = sVar17 + 1;
              } while (sVar13 != sVar17);
            }
            _free(local_50);
            _free(local_48);
            uVar6 = local_80;
            iVar4 = local_54;
          }
          goto LAB_000d0190;
        }
        local_34 = 0x12;
        iVar4 = local_54;
      }
      else {
        lVar10 = _CFGetTypeID(lVar9);
        lVar11 = _CFDataGetTypeID();
        if (lVar10 == lVar11) goto LAB_000d0031;
LAB_000d063b:
        local_34 = 10;
        iVar4 = local_54;
      }
      goto LAB_000cff80;
    }
    lVar10 = _CFGetTypeID(lVar9);
    lVar11 = _CFDataGetTypeID();
    if (lVar10 == lVar11) {
      local_40 = _CFHTTPMessageCreateEmpty(*(undefined8 *)PTR__kCFAllocatorNull_004410f8,1);
      if (local_40 == 0) {
        local_34 = 0x12;
        goto LAB_000d0602;
      }
      uVar6 = _CFDataGetBytePtr(lVar9);
      uVar7 = _CFDataGetLength(lVar9);
      cVar3 = _CFHTTPMessageAppendBytes(local_40,uVar6,uVar7);
      if (cVar3 == '\0') {
        local_50 = (void *)0x0;
        _AMRLog(4,&cf_URLRequest_devicesentrawrequestdatathatcouldnotbeunserialized_);
        local_34 = 10;
        local_48 = (void *)0x0;
        local_60 = 0;
        local_68 = 0;
      }
      else {
        local_68 = 0;
        uVar6 = local_80;
LAB_000d0190:
        uVar7 = local_70;
        uVar8 = _CFDictionaryCreateMutable
                          (local_70,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        local_50 = (void *)_CFNumberCreate(uVar7,3,&local_a8);
        _CFDictionarySetValue(uVar8,&cf_MaxAttempts);
        local_48 = (void *)_CFNumberCreate(uVar7,3,&local_a4);
        _CFDictionarySetValue(uVar8,&cf_Timeout);
        local_60 = _AMSupportCreateSetFromCFIndexArray
                             (&__block_handleAsyncURLRequest(__CFDictionary_const*)::
                               validResponseRange,6);
        _CFDictionaryAddValue(uVar8,&cf_ValidResponses);
        iVar5 = _AMSupportHttpSendSync(local_40,uVar8,&local_78,&local_98,&local_88,&local_a0);
        local_8c = iVar5;
        if (iVar5 == 0) {
LAB_000d02a7:
          lVar9 = _CFNumberCreate(local_70,0xe,&local_88);
          if (lVar9 != 0) {
            if (local_78 == 0) {
              local_78 = _CFDataCreate(local_70,0,0);
            }
            _CFDictionarySetValue(uVar6,&cf_ResponseBody,local_78);
            _CFDictionarySetValue(uVar6,&cf_ResponseStatus,lVar9);
            if (iVar5 != 0) {
              uVar7 = _CFNumberCreate(local_70,9,&local_8c);
              _CFDictionarySetValue(uVar6,&cf_ResponseError,uVar7);
            }
            if (local_98 != 0) {
              _CFDictionarySetValue(uVar6,&cf_ResponseHeaders);
            }
            _CFDictionarySetValue
                      (uVar6,&cf_ResponseBodyDone,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
            _ramrod_send_message(iVar4,uVar6);
            goto LAB_000d0449;
          }
          local_34 = 0x12;
        }
        else {
          lVar9 = 0;
          do {
            if (*(int *)((long)&DAT_0032b6d0 + lVar9) == iVar5) {
              local_88 = 0;
              goto LAB_000d02a7;
            }
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x24);
          local_34 = iVar5;
          _AMRLog(3,&cf_URLRequest_____failedwitherror___,local_68,local_a0);
        }
      }
    }
    else {
LAB_000d05f2:
      local_34 = 10;
LAB_000d0602:
      local_50 = (void *)0x0;
      local_48 = (void *)0x0;
      local_60 = 0;
      local_68 = 0;
      local_40 = 0;
    }
  }
  uVar6 = local_70;
  p_Var15 = (__CFDictionary *)
            _CFDictionaryCreateMutable
                      (local_70,3,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  _CFDictionarySetValue(p_Var15,&cf_MsgType,&cf_StatusMsg);
  uVar6 = _CFNumberCreate(uVar6,9,&local_34);
  _CFDictionarySetValue(p_Var15,&cf_Status,uVar6);
  _CFDictionarySetValue(p_Var15,&cf_Successful,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
  _send_internal_message(local_b0,p_Var15);
  _CFRelease(p_Var15);
  _CFRelease(uVar6);
  lVar9 = 0;
  uVar6 = local_80;
LAB_000d0449:
  if (local_78 != 0 && local_88 != 0) {
    lVar10 = _CFGetTypeID();
    lVar11 = _CFDataGetTypeID();
    if (lVar10 == lVar11) {
      lVar10 = _CFDataGetLength(local_78);
      if (lVar10 < 0x400 && local_88 - 400U < 0xffffffffffffff38) {
        lVar10 = _CFStringCreateFromExternalRepresentation(local_70,local_78,0x8000100);
        if (lVar10 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = _CFStringCreateMutableCopy(0,0,lVar10);
          _CFStringTrimWhitespace(uVar7);
          _CFRelease(lVar10);
        }
        uVar6 = local_80;
        _AMRLog(3,&cf_URLRequest_ServerResponse_ld_____,local_88,uVar7,local_98);
        _AMSupportSafeRelease(uVar7);
      }
      else {
        _AMRLog(3,&cf_URLRequest_ServerResponse_ld__bodylength_lu_,local_88,lVar10);
      }
    }
  }
  if (-1 < iVar4) {
    _AMRLog(6,&cf_sock_3d__s,iVar4,"closed");
    _close(iVar4);
  }
  _AMSupportSafeRelease(lVar9);
  _AMSupportSafeRelease(uVar6);
  _AMSupportSafeRelease(local_50);
  _AMSupportSafeRelease(local_48);
  _AMSupportSafeRelease(local_60);
  _AMSupportSafeRelease(local_68);
  _AMSupportSafeRelease(uVar8);
  _AMSupportSafeRelease(local_98);
  _AMSupportSafeRelease(local_78);
  _AMSupportSafeRelease(local_40);
  _AMSupportSafeRelease(local_b8);
  _AMSupportSafeRelease(local_a0);
  return local_34;
}

