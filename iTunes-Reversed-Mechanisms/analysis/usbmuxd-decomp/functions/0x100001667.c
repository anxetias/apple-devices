// rea decompile_all
// name: FUN_100001667
// address: 0x100001667
// body: available
// range: 0x100001667-0x100001c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100001667(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined1 local_30 [12];
  int local_24;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
  lVar4 = _CFURLCreateFromFileSystemRepresentation
                    (uVar1,"/Library/Preferences/com.apple.usbmuxd.plist",0x2c,0);
  if (lVar4 == 0) goto LAB_1000017b7;
  lVar5 = _CFReadStreamCreateWithFile(uVar1,lVar4);
  _CFRelease(lVar4);
  if (lVar5 == 0) goto LAB_1000017b7;
  cVar2 = _CFReadStreamOpen(lVar5);
  lVar4 = lVar5;
  if (cVar2 == '\0') {
LAB_1000017b2:
    _CFRelease(lVar4);
LAB_1000017b7:
    DAT_100021294 = 0;
    if (DAT_100022b48 != 0) {
      _CFRelease();
      DAT_100022b48 = 0;
      FUN_100004fd6();
    }
    FUN_100001fa3(5);
    DAT_100022b54 = 0;
    DAT_1000212a4 = 0;
    DAT_1000212a0 = 0;
    DAT_10002128c = 0;
    return;
  }
  lVar4 = _CFPropertyListCreateWithStream(uVar1,lVar5,0,0,local_30,0);
  _CFRelease(lVar5);
  if (lVar4 == 0) goto LAB_1000017b7;
  lVar5 = _CFGetTypeID(lVar4);
  lVar6 = _CFDictionaryGetTypeID();
  if (lVar5 != lVar6) goto LAB_1000017b2;
  lVar5 = _CFDictionaryGetValue(lVar4,&cf_ProtocolVersion);
  if (lVar5 == 0) {
LAB_100001837:
    DAT_100021294 = 0;
  }
  else {
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFNumberGetTypeID();
    if (lVar6 != lVar7) {
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sProtocolVersionisnotanumber,"parse_settings_file");
      }
      goto LAB_100001837;
    }
    cVar2 = _CFNumberGetValue(lVar5,3,&DAT_100021294);
    if (2 < DAT_100021294 || cVar2 == '\0') {
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sProtocolVersion_ldisinvalid,"parse_settings_file");
      }
      goto LAB_100001837;
    }
    if (3 < DAT_100021030) {
      FUN_1000008d2(4,0,&cf__sExplicitlyrequestingversion_ld,"parse_settings_file");
    }
  }
  lVar5 = _CFDictionaryGetValue(lVar4,&cf_BlackList);
  if (lVar5 == 0) {
LAB_1000018dd:
    if (DAT_100022b48 != 0) {
      _CFRelease();
      DAT_100022b48 = 0;
      goto LAB_1000018f9;
    }
  }
  else {
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFArrayGetTypeID();
    if (lVar6 != lVar7) {
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sBlackListisnotanarray,"parse_settings_file");
      }
      goto LAB_1000018dd;
    }
    if (DAT_100022b48 != 0) {
      _CFRelease();
    }
    DAT_100022b48 = lVar5;
    _CFRetain(lVar5);
    if (4 < DAT_100021030) {
      FUN_1000008d2(5,0,&cf__sBlackListineffect,"parse_settings_file");
    }
LAB_1000018f9:
    FUN_100004fd6();
  }
  DAT_1000212a8 = FUN_10000205a(lVar4,&cf_DisallowNCMMode);
  uVar9 = DAT_100021034;
  local_24 = 0;
  lVar5 = _CFDictionaryGetValue(lVar4,&cf_WirelessPairingEnabled);
  if (lVar5 != 0) {
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFNumberGetTypeID();
    if (((lVar6 != lVar7) || (cVar2 = _CFNumberGetValue(lVar5,3,&local_24), cVar2 == '\0')) ||
       (uVar9 = 1, local_24 == 0)) {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFBooleanGetTypeID();
      if (lVar6 == lVar7) {
        cVar2 = _CFBooleanGetValue(lVar5);
        uVar9 = 1;
        if (cVar2 != '\0') goto LAB_100001992;
      }
      uVar9 = 0;
    }
  }
LAB_100001992:
  DAT_100021034 = uVar9;
  DAT_1000212ab = FUN_10000205a(lVar4,&cf_DisallowNetwork);
  if ((DAT_1000212ab != '\0') && (4 < DAT_100021030)) {
    FUN_1000008d2(5,0,&cf__sIndirect_network_connectionsdisallowed,"parse_settings_file");
  }
  DAT_1000212ac = FUN_10000205a(lVar4,&cf_AllowNCMBonjour);
  if ((DAT_1000212ac != '\0') && (4 < DAT_100021030)) {
    FUN_1000008d2(5,0,&cf__sBonjourallowedoverNCM_,"parse_settings_file");
  }
  iVar3 = FUN_100000f31(lVar4,&cf_DebugLevel,5);
  if ((5 < iVar3) && (cVar2 = FUN_10000205a(lVar4,&cf_DebugTesting), cVar2 != '\0')) {
    iVar3 = 6;
  }
  FUN_100001fa3(iVar3);
  DAT_10002128c = DAT_10002128c & 0x7fffffff;
  cVar2 = FUN_10000205a(lVar4,&cf_LogPackets);
  uVar8 = DAT_10002128c | 0x80000000;
  if (cVar2 == '\0') {
    uVar8 = DAT_10002128c;
  }
  DAT_10002128c = uVar8 & 0xbfffffff;
  cVar2 = FUN_10000205a(lVar4,&cf_DumpCorrupt);
  if (cVar2 != '\0') {
    DAT_10002128c = DAT_10002128c | 0x40000000;
  }
  DAT_100021290 = FUN_10000205a(lVar4,&cf_LogNotifications);
  if ((DAT_100021290 != '\0') && (4 < DAT_100021030)) {
    FUN_1000008d2(5,0,&cf__sLoggingattach_detachnotifications,"parse_settings_file");
  }
  DAT_1000212aa = FUN_10000205a(lVar4,&cf_DisallowTCP);
  DAT_10002128c = DAT_10002128c & 0xdfffffff;
  cVar2 = FUN_10000205a(lVar4,&cf_TestTooNew);
  if (cVar2 != '\0') {
    DAT_10002128c = DAT_10002128c | 0x20000000;
  }
  DAT_100022b54 = FUN_10000205a(lVar4,&cf_DontCleanup);
  DAT_1000212a0 = FUN_100000f31(lVar4,&cf_DropPacketsIn,0);
  DAT_1000212a4 = FUN_100000f31(lVar4,&cf_DropPacketsOut,0);
  if (4 < DAT_100021030 && 0 < DAT_1000212a0) {
    FUN_1000008d2(5,0,&cf_TESTING_drop1in_dinputpackets);
  }
  if ((0 < DAT_1000212a4) && (4 < DAT_100021030)) {
    FUN_1000008d2(5,0,&cf_TESTING_drop1in_doutputpackets,DAT_1000212a4);
  }
  if ((DAT_100022b55 == '\0') && (cVar2 = FUN_10000205a(lVar4,&cf_USBKDPSupport), cVar2 != '\0')) {
    DAT_100022b55 = '\x01';
    FUN_10000b959();
  }
  DAT_10002128c = DAT_10002128c & 0xefffffff;
  cVar2 = FUN_10000205a(lVar4,&cf_LogBonjourActivity);
  if (cVar2 != '\0') {
    DAT_10002128c = DAT_10002128c | 0x10000000;
  }
  _CFRelease(lVar4);
  return;
}

