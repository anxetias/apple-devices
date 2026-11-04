// rea decompile_all
// name: _initConnectionTypes
// address: 0xd0680
// body: available
// range: 0xd0680-0xd0906 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd0902 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _initConnectionTypes(__AMRestoreModeDevice*, __CFDictionary const*) */

void _initConnectionTypes(__AMRestoreModeDevice *param_1,__CFDictionary *param_2)

{
  addrinfo *paVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  __CFDictionary *p_Var9;
  bool bVar10;
  byte bVar11;
  addrinfo local_498;
  addrinfo *local_468;
  short local_45a;
  char local_458 [1064];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_2 == (__CFDictionary *)0x0) {
    *(undefined2 *)(param_1 + 0x7c) = 0x101;
    bVar10 = false;
    pcVar8 = (cfstringStruct *)0x0;
    p_Var9 = (__CFDictionary *)param_1;
LAB_000d070d:
    if (_ipv6MayStarveDueTo99053849()::once != -1) {
      _initConnectionTypes((__AMRestoreModeDevice *)p_Var9,(__CFDictionary *)pcVar8);
    }
    bVar11 = _ipv6MayStarveDueTo99053849()::ipv6MayStarve ^ 1;
  }
  else {
    lVar5 = _CFDictionaryGetValue(param_2,&cf_DisableRestoreModeUSBMux);
    lVar7 = *(long *)PTR__kCFBooleanTrue_00441110;
    lVar6 = _CFDictionaryGetValue(param_2,&cf_DisableRestoreModeIPv6);
    param_1[0x7c] = (__AMRestoreModeDevice)(lVar5 != lVar7);
    bVar10 = lVar6 == lVar7;
    param_1[0x7d] = (__AMRestoreModeDevice)!bVar10;
    pcVar8 = &cf_HostHasFixFor99053849;
    p_Var9 = param_2;
    lVar5 = _CFDictionaryGetValue();
    if (lVar5 == 0) goto LAB_000d070d;
    bVar11 = lVar5 == lVar7;
  }
  param_1[0x7e] = (__AMRestoreModeDevice)(bVar11 & 1);
  uVar3 = _CFDictionaryGetInt64Value(param_2,(__CFString *)&cf_RestoreModeIPv6SendBuffer);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  uVar3 = _CFDictionaryGetInt64Value(param_2,(__CFString *)&cf_RestoreModeIPv6RecvBuffer);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  if (param_2 == (__CFDictionary *)0x0) {
    local_45a = 0;
    if (!bVar10) {
LAB_000d0887:
      local_45a = 0;
      if (*(int *)(param_1 + 0x4c) != 0) {
        bVar11 = _AMRestoreIPv6AddressForLocationID
                           (*(int *)(param_1 + 0x4c),param_1 + 0x54,&local_45a);
        if (((local_45a != 0 & bVar11) == 1) && (*(short *)(param_1 + 0x50) == 0)) {
          *(short *)(param_1 + 0x50) = local_45a;
          goto LAB_000d08c8;
        }
        if (bVar11 != 0) goto LAB_000d08c8;
      }
    }
  }
  else {
    lVar7 = _CFDictionaryGetValue(param_2,&cf_RestoreModeIPv6Address);
    local_45a = 0;
    if (!bVar10) {
      if (lVar7 == 0) goto LAB_000d0887;
      lVar5 = _CFGetTypeID(lVar7);
      lVar6 = _CFStringGetTypeID();
      if (lVar5 == lVar6) {
        ___bzero(local_458 + 0x20,0x401);
        cVar2 = _CFStringGetCString(lVar7,local_458 + 0x20,0x401,0x8000100);
        if (cVar2 != '\0') {
          local_458[0x10] = '\0';
          local_458[0x11] = '\0';
          local_458[0x12] = '\0';
          local_458[0x13] = '\0';
          local_458[0x14] = '\0';
          local_458[0x15] = '\0';
          local_458[0x16] = '\0';
          local_458[0x17] = '\0';
          local_458[0x18] = '\0';
          local_458[0x19] = '\0';
          local_458[0x1a] = '\0';
          local_458[0x1b] = '\0';
          local_458[0x1c] = '\0';
          local_458[0x1d] = '\0';
          local_458[0x1e] = '\0';
          local_458[0x1f] = '\0';
          local_458[0] = '\0';
          local_458[1] = '\0';
          local_458[2] = '\0';
          local_458[3] = '\0';
          local_458[4] = '\0';
          local_458[5] = '\0';
          local_458[6] = '\0';
          local_458[7] = '\0';
          local_458[8] = '\0';
          local_458[9] = '\0';
          local_458[10] = '\0';
          local_458[0xb] = '\0';
          local_458[0xc] = '\0';
          local_458[0xd] = '\0';
          local_458[0xe] = '\0';
          local_458[0xf] = '\0';
          _snprintf(local_458,0x20,"%d",0xf27e);
          local_468 = (addrinfo *)0x0;
          local_498.ai_addrlen = 0;
          local_498._20_4_ = 0;
          local_498.ai_next = (addrinfo *)0x0;
          local_498.ai_canonname = (char *)0x0;
          local_498.ai_addr = (sockaddr *)0x0;
          local_498.ai_flags = 0x1600;
          local_498.ai_family = 0x1e;
          local_498.ai_socktype = 1;
          local_498.ai_protocol = 0;
          iVar4 = _getaddrinfo(local_458 + 0x20,local_458,&local_498,&local_468);
          paVar1 = local_468;
          if (iVar4 == 0) {
            if ((ulong)local_468->ai_addrlen < 0x1d) {
              _memcpy(param_1 + 0x54,local_468->ai_addr,(ulong)local_468->ai_addrlen);
              _freeaddrinfo(paVar1);
              goto LAB_000d08c8;
            }
            _freeaddrinfo(local_468);
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
LAB_000d08c8:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

