// rea decompile_all
// name: _queryDeviceCapabilities
// address: 0xd0907
// body: available
// range: 0xd0907-0xd0b52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000d0a97) */
/* _queryDeviceCapabilities(__AMRestoreModeDevice*, int, __CFDictionary const**) */

undefined8
_queryDeviceCapabilities(__AMRestoreModeDevice *param_1,int param_2,__CFDictionary **param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  __CFDictionary *p_Var4;
  long lVar5;
  long lVar6;
  long lVar7;
  __CFDictionary *p_Var8;
  undefined4 extraout_var;
  undefined4 uVar9;
  __CFDictionary **extraout_RDX;
  __CFDictionary **extraout_RDX_00;
  __CFDictionary **extraout_RDX_01;
  __CFDictionary **pp_Var10;
  bool bVar11;
  cfstringStruct *pcVar12;
  int iVar13;
  size_t sStack_58;
  int iStack_4c;
  __CFDictionary **pp_Stack_48;
  code *pcStack_40;
  
  pcStack_40 = (code *)0xd094e;
  uVar3 = _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&_RAMROD_REQUEST,
                              &_RAMROD_QUERY_TYPE,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  pcStack_40 = (code *)0xd095c;
  iVar2 = _ramrod_send_message(param_2,uVar3);
  pcStack_40 = (code *)0xd0967;
  _CFRelease(uVar3);
  if (iVar2 != 0) {
    pcStack_40 = (code *)0xd0989;
    _AMRLog(3,&cf__s_failedtosendmessage__d,"_copyDeviceTypeResponse",iVar2);
LAB_000d0989:
    pcStack_40 = (code *)0xd099c;
    _AMRLog(3,&cf__queryDeviceCapabilities__copyDeviceTypeResponsereturnedNULL);
    return 9;
  }
  pcStack_40 = (code *)0xd09ae;
  p_Var4 = (__CFDictionary *)_ramrod_receive_message(param_2);
  if (p_Var4 == (__CFDictionary *)0x0) goto LAB_000d0989;
  pcVar12 = &cf_Type;
  pcStack_40 = (code *)0xd09cf;
  iVar2 = 0x45afd0;
  cVar1 = _CFEqual();
  if (cVar1 == '\0') {
    pcStack_40 = (code *)0xd0b4e;
    _queryDeviceCapabilities((__AMRestoreModeDevice *)pcVar12,iVar2,extraout_RDX);
    pp_Var10 = extraout_RDX_01;
LAB_000d0b4e:
    pcStack_40 = ____ZL27_ipv6MayStarveDueTo99053849v_block_invoke;
    _queryDeviceCapabilities((__AMRestoreModeDevice *)pcVar12,iVar2,pp_Var10);
    iStack_4c = 0;
    sStack_58 = 8;
    bVar11 = false;
    pp_Stack_48 = param_3;
    pcStack_40 = (code *)&stack0xfffffffffffffff8;
    uVar3 = ___isPlatformVersionAtLeast(1,0xd,1);
    if ((int)uVar3 == 0) {
      iVar2 = _sysctlbyname("net.classq.fq_codel.radar_99053849",&iStack_4c,&sStack_58,(void *)0x0,0
                           );
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 != 0);
      bVar11 = iStack_4c == 0 || iVar2 != 0;
    }
    _ipv6MayStarveDueTo99053849()::ipv6MayStarve = bVar11;
    return uVar3;
  }
  pcVar12 = &cf_Type;
  pcStack_40 = (code *)0xd09e6;
  iVar2 = 0x45afd0;
  cVar1 = _CFEqual();
  pp_Var10 = extraout_RDX_00;
  if (cVar1 == '\0') goto LAB_000d0b4e;
  pcStack_40 = (code *)0xd09fd;
  lVar5 = _CFDictionaryGetValue(p_Var4,&cf_Type);
  if (lVar5 == 0) {
    pcVar12 = &cf_Noservicenameinresponse;
  }
  else {
    pcStack_40 = (code *)0xd0a0d;
    lVar6 = _CFGetTypeID(lVar5);
    pcStack_40 = (code *)0xd0a15;
    lVar7 = _CFStringGetTypeID();
    if (lVar6 == lVar7) {
      pcStack_40 = (code *)0xd0a2c;
      cVar1 = _CFEqual(lVar5,&cf_com_apple_mobile_restored);
      uVar9 = 1;
      if (cVar1 == '\0') {
        pcStack_40 = (code *)0xd0a47;
        cVar1 = _CFEqual(lVar5,&cf_com_apple_mobile_ramrod);
        uVar9 = 2;
        if (cVar1 != '\0') goto LAB_000d0a50;
        pcStack_40 = (code *)0xd0aaa;
        cVar1 = _CFEqual(lVar5,&cf_com_apple_mobile_lockdown);
        *(uint *)(param_1 + 0x88) = (uint)(cVar1 != '\0') * 3;
        iVar2 = 0;
        iVar13 = 0x7fffffff;
      }
      else {
LAB_000d0a50:
        *(undefined4 *)(param_1 + 0x88) = uVar9;
        iVar13 = 10;
        pcStack_40 = (code *)0xd0a74;
        iVar2 = _CFDictionaryGetInt64Value(p_Var4,(__CFString *)&cf_RestoreProtocolVersion);
      }
      *(int *)(param_1 + 0x130) = iVar2;
      param_1[0x134] = (__AMRestoreModeDevice)(iVar13 < iVar2);
      pcStack_40 = (code *)0xd0aeb;
      _AMRLog(6,&cf_connectedtoservice__,lVar5);
      pcStack_40 = (code *)0xd0b05;
      _AMRLog(7,&cf_usingprotocolversion_d,*(undefined4 *)(param_1 + 0x130));
      pcStack_40 = (code *)0xd0b20;
      _AMRLog(7,&cf_supportsvaluequeries__d,param_1[0x134]);
      goto LAB_000d0b20;
    }
    pcVar12 = &cf_servicenameinresponsewasnottheexpectedCFType;
  }
  pcStack_40 = (code *)0xd0a92;
  _AMRLog(3,pcVar12);
LAB_000d0b20:
  if (param_3 != (__CFDictionary **)0x0) {
    pcStack_40 = (code *)0xd0b2d;
    p_Var8 = (__CFDictionary *)_CFRetain(p_Var4);
    *param_3 = p_Var8;
  }
  pcStack_40 = (code *)0xd0b38;
  _CFRelease(p_Var4);
  return 0;
}

