// rea decompile_all
// name: _AMDevicePowerAssertionCreate
// address: 0x102977
// body: available
// range: 0x102977-0x103181 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDevicePowerAssertionCreate
               (double param_1,undefined8 *param_2,long param_3,long param_4,long param_5,
               int *param_6)

{
  undefined4 uVar1;
  double dVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  FILE *pFVar10;
  long lVar11;
  int *piVar12;
  undefined7 uVar13;
  double local_70;
  undefined8 *local_68;
  long local_60;
  long local_58;
  int *local_50;
  long local_48;
  long local_40;
  double local_38;
  
  local_48 = 0;
  local_70 = param_1;
  local_68 = param_2;
  local_50 = param_6;
  if (param_2 == (undefined8 *)0x0) {
    pFVar10 = *(FILE **)PTR____stderrp_004412c0;
    pcVar9 = "targetDevice";
    uVar8 = 0xc9;
LAB_00102b64:
    _fprintf(pFVar10,"AssertMacros: %s, %s file: %s, line: %d, value: %lld\n",pcVar9,"",
             "/AppleInternal/Library/BuildRoots/4~Cas5ugDaQMIzDaoWWieHjb4V3vYNqmtWBIIo9FA/Library/Caches/com.apple.xbs/Sources/MobileDevice/Source/AMDevicePowerAssertion.c"
             ,uVar8,0);
    iVar3 = -0x17fffff9;
LAB_00102bb0:
    lVar5 = 0;
    piVar12 = (int *)0x0;
    local_38 = 0.0;
    lVar6 = 0;
    lVar11 = 0;
LAB_00102bc0:
    if (local_50 != (int *)0x0) {
      *local_50 = iVar3;
    }
    lVar4 = 0;
  }
  else {
    local_38 = param_1;
    if (param_3 == 0) {
      pFVar10 = *(FILE **)PTR____stderrp_004412c0;
      pcVar9 = "assertionType";
      uVar8 = 0xca;
      goto LAB_00102b64;
    }
    if (param_4 == 0) {
      pFVar10 = *(FILE **)PTR____stderrp_004412c0;
      pcVar9 = "name";
      uVar8 = 0xcb;
      goto LAB_00102b64;
    }
    if ((param_1 <= 0.0) || (1200.0 < param_1)) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(local_38,0,_md_log_log,0x10);
      iVar3 = -0x17fffff9;
      goto LAB_00102bb0;
    }
    lVar4 = *(long *)PTR__kCFAllocatorDefault_004410e8;
    local_60 = param_4;
    _pthread_once((pthread_once_t *)&_AMDevicePowerAssertionGetTypeID_registerOnce,
                  __registerPowerAssertionClass);
    local_40 = lVar4;
    lVar4 = __CFRuntimeCreateInstance(lVar4,__AMDevicePowerAssertionTypeID,0x78);
    if (lVar4 == 0) {
      iVar3 = -0x17fffffd;
      goto LAB_00102bb0;
    }
    *(undefined8 *)(lVar4 + 0x74) = 0;
    *(undefined8 *)(lVar4 + 0x7c) = 0;
    *(undefined8 *)(lVar4 + 100) = 0;
    *(undefined8 *)(lVar4 + 0x6c) = 0;
    *(undefined8 *)(lVar4 + 0x54) = 0;
    *(undefined8 *)(lVar4 + 0x5c) = 0;
    *(undefined8 *)(lVar4 + 0x44) = 0;
    *(undefined8 *)(lVar4 + 0x4c) = 0;
    *(undefined8 *)(lVar4 + 0x34) = 0;
    *(undefined8 *)(lVar4 + 0x3c) = 0;
    *(undefined8 *)(lVar4 + 0x24) = 0;
    *(undefined8 *)(lVar4 + 0x2c) = 0;
    *(undefined8 *)(lVar4 + 0x14) = 0;
    *(undefined8 *)(lVar4 + 0x1c) = 0;
    *(undefined4 *)(lVar4 + 0x84) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 0x72776f70;
    local_58 = param_5;
    __mutex_init(lVar4 + 0x18);
    lVar5 = _AMDeviceCreateCopy(param_2);
    lVar11 = lVar4;
    if (lVar5 == 0) {
      lVar5 = 0;
      _fprintf(*(FILE **)PTR____stderrp_004412c0,
               "AssertMacros: %s, %s file: %s, line: %d, value: %lld\n",
               "tmpDevice = AMDeviceCreateCopy(targetDevice)","",
               "/AppleInternal/Library/BuildRoots/4~Cas5ugDaQMIzDaoWWieHjb4V3vYNqmtWBIIo9FA/Library/Caches/com.apple.xbs/Sources/MobileDevice/Source/AMDevicePowerAssertion.c"
               ,0xdf,0);
      iVar3 = -0x17fffffd;
LAB_00102fb5:
      piVar12 = (int *)0x0;
      local_38 = 0.0;
LAB_00102b1f:
      lVar6 = 0;
      goto LAB_00102bc0;
    }
    iVar3 = _AMDeviceConnect(lVar5);
    if (iVar3 != 0) {
      _fprintf(*(FILE **)PTR____stderrp_004412c0,
               "AssertMacros: %s, %s file: %s, line: %d, value: %lld\n",
               "amdErr = AMDeviceConnect(tmpDevice) == 0 ","",
               "/AppleInternal/Library/BuildRoots/4~Cas5ugDaQMIzDaoWWieHjb4V3vYNqmtWBIIo9FA/Library/Caches/com.apple.xbs/Sources/MobileDevice/Source/AMDevicePowerAssertion.c"
               ,0xe0,(long)iVar3);
      goto LAB_00102fb5;
    }
    iVar3 = _AMDeviceStartSession(lVar5);
    if (iVar3 != 0) {
      local_38 = 0.0;
      _fprintf(*(FILE **)PTR____stderrp_004412c0,
               "AssertMacros: %s, %s file: %s, line: %d, value: %lld\n",
               "amdErr = AMDeviceStartSession(tmpDevice) == 0 ","",
               "/AppleInternal/Library/BuildRoots/4~Cas5ugDaQMIzDaoWWieHjb4V3vYNqmtWBIIo9FA/Library/Caches/com.apple.xbs/Sources/MobileDevice/Source/AMDevicePowerAssertion.c"
               ,0xe2,(long)iVar3);
LAB_00102b1c:
      piVar12 = (int *)CONCAT71((int7)((ulong)param_2 >> 8),1);
      goto LAB_00102b1f;
    }
    param_2 = (undefined8 *)(lVar4 + 0x58);
    iVar3 = _AMDeviceSecureStartService(lVar5,&cf_com_apple_mobile_assertion_agent,0,param_2);
    lVar6 = local_40;
    if (iVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_38 = 0.0;
      __os_log_internal(0,_md_log_log,0x10,
                        "Could not start power assertion service on device %d: 0x%x.",
                        *(undefined4 *)(lVar5 + 0x10),iVar3);
      goto LAB_00102b1c;
    }
    local_38 = (double)_CFDictionaryCreateMutable
                                 (local_40,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    uVar13 = (undefined7)((ulong)param_2 >> 8);
    if (local_38 == 0.0) {
      local_38 = 0.0;
      _fprintf(*(FILE **)PTR____stderrp_004412c0,
               "AssertMacros: %s, %s file: %s, line: %d, value: %lld\n",
               "tmpRequest = CFDictionaryCreateMutable(kCFAllocatorDefault, 0, &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks)"
               ,"",
               "/AppleInternal/Library/BuildRoots/4~Cas5ugDaQMIzDaoWWieHjb4V3vYNqmtWBIIo9FA/Library/Caches/com.apple.xbs/Sources/MobileDevice/Source/AMDevicePowerAssertion.c"
               ,0xea,0);
      piVar12 = (int *)CONCAT71(uVar13,1);
      iVar3 = -0x17fffffd;
      goto LAB_00102b1f;
    }
    local_40 = _CFNumberCreate(lVar6,0xd,&local_70);
    dVar2 = local_38;
    if (local_40 == 0) {
      _fprintf(*(FILE **)PTR____stderrp_004412c0,
               "AssertMacros: %s, %s file: %s, line: %d, value: %lld\n",
               "tmpTimeoutNum = CFNumberCreate(kCFAllocatorDefault, kCFNumberDoubleType, &timeout)",
               "",
               "/AppleInternal/Library/BuildRoots/4~Cas5ugDaQMIzDaoWWieHjb4V3vYNqmtWBIIo9FA/Library/Caches/com.apple.xbs/Sources/MobileDevice/Source/AMDevicePowerAssertion.c"
               ,0xeb,0);
      lVar6 = 0;
      piVar12 = (int *)CONCAT71(uVar13,1);
      iVar3 = -0x17fffffd;
      goto LAB_00102bc0;
    }
    _CFDictionarySetValue(local_38,&cf_CommandKey,&cf_CommandCreateAssertion);
    _CFDictionarySetValue(dVar2,&cf_AssertionTypeKey,param_3);
    _CFDictionarySetValue(dVar2,&cf_AssertionNameKey,local_60);
    if (local_58 != 0) {
      _CFDictionarySetValue(dVar2,&cf_AssertionDetailKey);
    }
    _CFDictionarySetValue(dVar2,&cf_AssertionTimeoutKey,local_40);
    iVar3 = _AMDServiceConnectionSendMessage(*param_2,dVar2,200);
    if (iVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = *(undefined4 *)(lVar5 + 0x10);
      pcVar9 = "Could not send message to power assertion service on device %d: 0x%x.";
LAB_00102dab:
      __os_log_internal(0,_md_log_log,0x10,pcVar9,uVar1,iVar3);
LAB_00102dbd:
      piVar12 = (int *)CONCAT71(uVar13,1);
      lVar6 = local_40;
      goto LAB_00102bc0;
    }
    iVar3 = _AMDServiceConnectionReceiveMessage(*param_2,&local_48,0);
    if (iVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = *(undefined4 *)(lVar5 + 0x10);
      pcVar9 = "Could not receive message from power assertion service on device %d: 0x%x.";
      goto LAB_00102dab;
    }
    if (local_48 == 0) {
      pFVar10 = *(FILE **)PTR____stderrp_004412c0;
      pcVar9 = "tmpResponse";
      uVar8 = 0x100;
LAB_00103156:
      _fprintf(pFVar10,"AssertMacros: %s, %s file: %s, line: %d, value: %lld\n",pcVar9,"",
               "/AppleInternal/Library/BuildRoots/4~Cas5ugDaQMIzDaoWWieHjb4V3vYNqmtWBIIo9FA/Library/Caches/com.apple.xbs/Sources/MobileDevice/Source/AMDevicePowerAssertion.c"
               ,uVar8,0);
      iVar3 = -0x17ffffed;
      goto LAB_00102dbd;
    }
    lVar6 = _CFGetTypeID();
    lVar7 = _CFDictionaryGetTypeID();
    if (lVar6 != lVar7) {
      pFVar10 = *(FILE **)PTR____stderrp_004412c0;
      pcVar9 = "CFGetTypeID(tmpResponse) == CFDictionaryGetTypeID()";
      uVar8 = 0x101;
      goto LAB_00103156;
    }
    lVar7 = _CFDictionaryGetValue(local_48,&cf_ErrorKey);
    lVar6 = local_58;
    if (lVar7 != 0) {
      iVar3 = -0x17fffff9;
      goto LAB_00102dbd;
    }
    uVar8 = _CFRetain(local_60);
    *(undefined8 *)(lVar4 + 0x60) = uVar8;
    if (lVar6 != 0) {
      uVar8 = _CFRetain(lVar6);
      *(undefined8 *)(lVar4 + 0x68) = uVar8;
    }
    uVar8 = _CFRetain(lVar5);
    *(undefined8 *)(lVar4 + 0x70) = uVar8;
    *(double *)(lVar4 + 0x78) = local_70;
    uVar8 = _CFAbsoluteTimeGetCurrent();
    *(undefined8 *)(lVar4 + 0x80) = uVar8;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,"Created power assertion %@",lVar4);
    piVar12 = (int *)CONCAT71(uVar13,1);
    lVar11 = 0;
    lVar6 = local_40;
  }
  if (local_48 != 0) {
    local_50 = piVar12;
    _CFRelease();
    piVar12 = local_50;
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_38 != 0.0) {
    _CFRelease();
  }
  if ((char)piVar12 == '\x01' && lVar5 != 0) {
    _AMDeviceDisconnect(lVar5);
  }
  else if (lVar5 == 0) goto LAB_00102c4b;
  _CFRelease(lVar5);
LAB_00102c4b:
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  return lVar4;
}

