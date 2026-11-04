// rea decompile_all
// name: _ClientHasData
// address: 0x19262c
// body: available
// range: 0x19262c-0x1935e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1935e3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ClientHasData(undefined8 param_1,long param_2,void *param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  void *pvVar10;
  long lVar11;
  int *piVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  dispatch_queue_t queue;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  bool bVar19;
  bool bVar20;
  cfstringStruct *pcVar21;
  char local_68;
  char local_67;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_2 == 2) {
    pcVar13 = (char *)((long)param_3 + 0x58);
LAB_00192667:
    bVar3 = *(byte *)((long)param_3 + 0x15e);
    bVar1 = *(byte *)((long)param_3 + 0x15f);
    if (bVar3 != bVar1) {
      lVar7 = _RPSocketRead(*(undefined8 *)((long)param_3 + 0x10),pcVar13 + bVar1,bVar3 - bVar1);
      if (lVar7 == 0) {
        lVar7 = *(long *)((long)param_3 + 0x20);
        if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
           (2 < *(int *)(lVar7 + 0x10))) {
          uVar14 = _baseName(
                            "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                            );
          _LogMsg(3,lVar7,uVar14,0x14d,"ClientHasDataHelper",0,
                  &cf_shortreadfrom__instate_d_needed_d_got_d,*(undefined8 *)((long)param_3 + 0x10),
                  *(undefined4 *)((long)param_3 + 0x158),*(undefined1 *)((long)param_3 + 0x15e),
                  *(undefined1 *)((long)param_3 + 0x15f));
        }
        goto LAB_0019347c;
      }
      if (lVar7 == -1) {
        lVar7 = *(long *)((long)param_3 + 0x20);
        if (((lVar7 == 0) && (lVar7 = _getDefaultLogCtx(), lVar7 == 0)) ||
           (*(int *)(lVar7 + 0x10) < 3)) goto LAB_0019347c;
        uVar16 = _baseName(
                          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                          );
        piVar12 = ___error();
        pcVar13 = _strerror(*piVar12);
        uVar14 = _CFStringCreateWithCString(0,pcVar13,0x8000100);
        pcVar21 = &cf_read;
        uVar17 = 0x148;
        goto LAB_00192dea;
      }
      bVar3 = (char)lVar7 + *(char *)((long)param_3 + 0x15f);
      *(byte *)((long)param_3 + 0x15f) = bVar3;
      if (bVar3 != *(byte *)((long)param_3 + 0x15e)) goto LAB_00193485;
    }
    *(undefined1 *)((long)param_3 + 0x15f) = 0;
    switch(*(undefined4 *)((long)param_3 + 0x158)) {
    case 1:
      if (*pcVar13 == '\x05') {
        lVar7 = *(long *)((long)param_3 + 0x20);
        if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
           (6 < *(int *)(lVar7 + 0x10))) {
          uVar14 = _baseName(
                            "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                            );
          _LogMsg(7,lVar7,uVar14,0x169,"ClientHasDataHelper",0,&cf_gotversion_d_nmethods_d,
                  *(undefined1 *)((long)param_3 + 0x58),*(undefined1 *)((long)param_3 + 0x59));
        }
        *(undefined4 *)((long)param_3 + 0x158) = 2;
        *(undefined1 *)((long)param_3 + 0x15e) = *(undefined1 *)((long)param_3 + 0x59);
        goto LAB_00192667;
      }
      if ((*pcVar13 == -0x56) && (*(char *)((long)param_3 + 0x59) == -0x45)) {
        lVar11 = _RPSocketReadDictionary(*(undefined8 *)((long)param_3 + 0x10));
        lVar7 = *(long *)((long)param_3 + 0x20);
        if (lVar11 == 0) {
          if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
             (2 < *(int *)(lVar7 + 0x10))) {
            uVar14 = _baseName(
                              "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                              );
            _LogMsg(3,lVar7,uVar14,0xa4,"HandleControlRequest",0,&cf_RPSocketReadDictionaryfailed);
          }
        }
        else {
          if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
             (6 < *(int *)(lVar7 + 0x10))) {
            uVar14 = _baseName(
                              "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                              );
            _LogMsg(7,lVar7,uVar14,0xa8,"HandleControlRequest",0,&cf_controlrequest___,lVar11);
          }
          lVar7 = _CFDictionaryCreateMutable
                            (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          lVar15 = _CFDictionaryGetValue(lVar11,&cf_Command);
          if (lVar15 == 0) {
            lVar15 = *(long *)((long)param_3 + 0x20);
            if (((lVar15 != 0) || (lVar15 = _getDefaultLogCtx(), lVar15 != 0)) &&
               (2 < *(int *)(lVar15 + 0x10))) {
              uVar14 = _baseName(
                                "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                                );
              pcVar21 = &cf_nocommand;
              uVar16 = 0xae;
              goto LAB_001935b5;
            }
          }
          else {
            cVar5 = _CFEqual(lVar15,&cf_Ping);
            if (cVar5 == '\0') {
              lVar15 = *(long *)((long)param_3 + 0x20);
              if (((lVar15 != 0) || (lVar15 = _getDefaultLogCtx(), lVar15 != 0)) &&
                 (2 < *(int *)(lVar15 + 0x10))) {
                uVar14 = _baseName(
                                  "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                                  );
                pcVar21 = &cf_invalidcommand__;
                uVar16 = 0xb7;
                goto LAB_001935b5;
              }
            }
            else {
              _RPSocketSetName(*(undefined8 *)((long)param_3 + 0x10),&cf_Pinger___,
                               *(undefined8 *)((long)param_3 + 0x48));
              _CFDictionarySetValue(lVar7,&cf_Pong,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
              cVar5 = _RPSocketWriteDictionary(*(undefined8 *)((long)param_3 + 0x10),lVar7);
              if ((cVar5 == '\0') &&
                 (((lVar15 = *(long *)((long)param_3 + 0x20), lVar15 != 0 ||
                   (lVar15 = _getDefaultLogCtx(), lVar15 != 0)) && (2 < *(int *)(lVar15 + 0x10)))))
              {
                uVar14 = _baseName(
                                  "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                                  );
                pcVar21 = &cf_RPSocketWriteDictionaryfailed;
                uVar16 = 0xbc;
LAB_001935b5:
                _LogMsg(3,lVar15,uVar14,uVar16,"HandleControlRequest",0,pcVar21);
              }
            }
          }
          _CFRelease(lVar11);
          if (lVar7 != 0) {
            _CFRelease(lVar7);
          }
        }
        _RPSocketInvalidate(*(undefined8 *)((long)param_3 + 0x10));
        goto LAB_0019347c;
      }
      lVar7 = *(long *)((long)param_3 + 0x20);
      if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
         (2 < *(int *)(lVar7 + 0x10))) {
        uVar14 = _baseName(
                          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                          );
        cVar5 = *pcVar13;
        uVar16 = 0x165;
LAB_00193271:
        _LogMsg(3,lVar7,uVar14,uVar16,"ClientHasDataHelper",0,&cf_invalidversion_d,cVar5);
      }
      break;
    case 2:
      lVar7 = *(long *)((long)param_3 + 0x20);
      if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
         (6 < *(int *)(lVar7 + 0x10))) {
        uVar14 = _baseName(
                          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                          );
        _LogMsg(7,lVar7,uVar14,0x172,"ClientHasDataHelper",0,&cf_got_dmethods_,
                *(undefined1 *)((long)param_3 + 0x15e));
      }
      if (*(char *)((long)param_3 + 0x15e) == '\0') {
        if (*(long *)((long)param_3 + 0x28) == 0) {
          bVar2 = false;
          goto LAB_00192af6;
        }
LAB_00192b2b:
        lVar7 = *(long *)((long)param_3 + 0x20);
        if ((lVar7 == 0) && (lVar7 = _getDefaultLogCtx(), lVar7 == 0)) {
          cVar5 = '\x02';
          iVar6 = 3;
          cVar4 = -1;
        }
        else {
          cVar5 = '\x02';
          iVar6 = 3;
          cVar4 = -1;
          if (2 < *(int *)(lVar7 + 0x10)) {
            uVar14 = _baseName(
                              "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                              );
            _LogMsg(3,lVar7,uVar14,0x183,"ClientHasDataHelper",0,
                    &cf_clientdoesn_tsupportuser_passauth);
          }
        }
      }
      else {
        uVar18 = 0;
        bVar2 = false;
        do {
          bVar20 = bVar2;
          lVar7 = *(long *)((long)param_3 + 0x20);
          if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
             (6 < *(int *)(lVar7 + 0x10))) {
            uVar14 = _baseName(
                              "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                              );
            _LogMsg(7,lVar7,uVar14,0x174,"ClientHasDataHelper",0,&cf__d,pcVar13[uVar18]);
          }
          bVar19 = *(char *)((long)param_3 + uVar18 + 0x58) == '\x02';
          bVar2 = (bool)(bVar20 | bVar19);
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(byte *)((long)param_3 + 0x15e));
        if (*(long *)((long)param_3 + 0x28) == 0) {
LAB_00192af6:
          cVar4 = (*(long *)((long)param_3 + 0x30) != 0) * '\x02';
          bVar20 = *(long *)((long)param_3 + 0x30) == 0;
          iVar6 = (uint)bVar20 * 4 + 3;
          cVar5 = bVar20 * '\x03' + '\x02';
          if ((!bVar20) && (!bVar2)) goto LAB_00192b2b;
        }
        else {
          if (!bVar20 && !bVar19) goto LAB_00192b2b;
          iVar6 = 3;
          cVar4 = '\x02';
          cVar5 = '\x02';
        }
      }
      local_68 = '\x05';
      local_67 = cVar4;
      cVar4 = _RPSocketWrite(*(undefined8 *)((long)param_3 + 0x10),&local_68,2);
      if (cVar4 == '\0') {
        lVar7 = *(long *)((long)param_3 + 0x20);
        if (((lVar7 == 0) && (lVar7 = _getDefaultLogCtx(), lVar7 == 0)) ||
           (*(int *)(lVar7 + 0x10) < 3)) goto LAB_0019347c;
        uVar16 = _baseName(
                          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                          );
        piVar12 = ___error();
        pcVar13 = _strerror(*piVar12);
        uVar14 = _CFStringCreateWithCString(0,pcVar13,0x8000100);
        pcVar21 = &cf_writepreferredmethod;
        uVar17 = 0x18d;
        goto LAB_00192dea;
      }
      *(int *)((long)param_3 + 0x158) = iVar6;
      *(char *)((long)param_3 + 0x15e) = cVar5;
      goto LAB_00192667;
    case 3:
      if (*pcVar13 == '\x01') {
        *(undefined4 *)((long)param_3 + 0x158) = 4;
        *(char *)((long)param_3 + 0x15e) = *(char *)((long)param_3 + 0x59);
        if (*(char *)((long)param_3 + 0x59) == '\0') {
          bVar3 = 0;
          goto switchD_001926d5_caseD_4;
        }
        goto LAB_00192667;
      }
      lVar7 = *(long *)((long)param_3 + 0x20);
      if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
         (2 < *(int *)(lVar7 + 0x10))) {
        uVar14 = _baseName(
                          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                          );
        cVar5 = *pcVar13;
        uVar16 = 0x198;
        goto LAB_00193271;
      }
      break;
    case 4:
switchD_001926d5_caseD_4:
      uVar18 = (ulong)bVar3;
      pvVar10 = _malloc(uVar18 + 1);
      *(void **)((long)param_3 + 0x38) = pvVar10;
      _memcpy(pvVar10,pcVar13,uVar18);
      *(undefined1 *)((long)pvVar10 + uVar18) = 0;
      lVar7 = *(long *)((long)param_3 + 0x20);
      if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
         (6 < *(int *)(lVar7 + 0x10))) {
        uVar14 = _baseName(
                          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                          );
        _LogMsg(7,lVar7,uVar14,0x1aa,"ClientHasDataHelper",0,&cf_user__s_,
                *(undefined8 *)((long)param_3 + 0x38));
      }
      *(undefined4 *)((long)param_3 + 0x158) = 5;
      *(undefined1 *)((long)param_3 + 0x15e) = 1;
      goto LAB_00192667;
    case 5:
      *(undefined4 *)((long)param_3 + 0x158) = 6;
      *(char *)((long)param_3 + 0x15e) = *(char *)((long)param_3 + 0x58);
      if (*(char *)((long)param_3 + 0x58) == '\0') {
        bVar3 = 0;
        goto switchD_001926d5_caseD_6;
      }
      goto LAB_00192667;
    case 6:
switchD_001926d5_caseD_6:
      uVar18 = (ulong)bVar3;
      pvVar10 = _malloc(uVar18 + 1);
      *(void **)((long)param_3 + 0x40) = pvVar10;
      _memcpy(pvVar10,pcVar13,uVar18);
      *(undefined1 *)((long)pvVar10 + uVar18) = 0;
      lVar7 = *(long *)((long)param_3 + 0x20);
      if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
         (6 < *(int *)(lVar7 + 0x10))) {
        uVar14 = _baseName(
                          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                          );
        _LogMsg(7,lVar7,uVar14,0x1c1,"ClientHasDataHelper",0,&cf_pass__s_,
                *(undefined8 *)((long)param_3 + 0x40));
      }
      if ((*(char **)((long)param_3 + 0x28) == (char *)0x0) ||
         (iVar6 = _strcmp(*(char **)((long)param_3 + 0x28),*(char **)((long)param_3 + 0x38)),
         iVar6 == 0)) {
        if ((*(char **)((long)param_3 + 0x30) == (char *)0x0) ||
           (iVar6 = _strcmp(*(char **)((long)param_3 + 0x30),*(char **)((long)param_3 + 0x40)),
           iVar6 == 0)) {
          _SendAuthReply(param_3,1);
          *(undefined4 *)((long)param_3 + 0x158) = 7;
          *(undefined1 *)((long)param_3 + 0x15e) = 5;
          goto LAB_00192667;
        }
        lVar7 = *(long *)((long)param_3 + 0x20);
        if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
           (2 < *(int *)(lVar7 + 0x10))) {
          uVar14 = _baseName(
                            "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                            );
          pcVar21 = &cf_wrongpassword;
          uVar16 = 0x8d;
          goto LAB_001933f2;
        }
      }
      else {
        lVar7 = *(long *)((long)param_3 + 0x20);
        if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
           (2 < *(int *)(lVar7 + 0x10))) {
          uVar14 = _baseName(
                            "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                            );
          pcVar21 = &cf_wrongusername;
          uVar16 = 0x88;
LAB_001933f2:
          _LogMsg(3,lVar7,uVar14,uVar16,"CheckAuth",0,pcVar21);
        }
      }
      _SendAuthReply(param_3,0);
      goto LAB_0019347c;
    case 7:
      if (*pcVar13 != '\x05') {
        lVar7 = *(long *)((long)param_3 + 0x20);
        if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
           (2 < *(int *)(lVar7 + 0x10))) {
          uVar14 = _baseName(
                            "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                            );
          cVar5 = *pcVar13;
          uVar16 = 0x1d0;
          goto LAB_00193271;
        }
        break;
      }
      if (*(char *)((long)param_3 + 0x59) != '\x01') {
        lVar7 = *(long *)((long)param_3 + 0x20);
        if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
           (2 < *(int *)(lVar7 + 0x10))) {
          uVar14 = _baseName(
                            "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                            );
          _LogMsg(3,lVar7,uVar14,0x1d5,"ClientHasDataHelper",0,&cf_invalidcommand_d,
                  *(undefined1 *)((long)param_3 + 0x59));
        }
        uVar14 = 7;
        goto LAB_00193477;
      }
      cVar5 = *(char *)((long)param_3 + 0x5b);
      *(char *)((long)param_3 + 0x160) = cVar5;
      if (cVar5 == '\x04') {
        *(undefined1 *)((long)param_3 + 0x58) = *(undefined1 *)((long)param_3 + 0x5c);
        *(undefined2 *)((long)param_3 + 0x15e) = 0x110;
      }
      else if (cVar5 == '\x03') {
        *(undefined1 *)((long)param_3 + 0x15e) = *(undefined1 *)((long)param_3 + 0x5c);
      }
      else {
        if (cVar5 != '\x01') {
          lVar7 = *(long *)((long)param_3 + 0x20);
          if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
             (2 < *(int *)(lVar7 + 0x10))) {
            uVar14 = _baseName(
                              "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                              );
            _LogMsg(3,lVar7,uVar14,0x1ec,"ClientHasDataHelper",0,&cf_invalidatyp_d,
                    *(undefined1 *)((long)param_3 + 0x160));
          }
          uVar14 = 8;
          goto LAB_00193477;
        }
        *(undefined1 *)((long)param_3 + 0x58) = *(undefined1 *)((long)param_3 + 0x5c);
        *(undefined2 *)((long)param_3 + 0x15e) = 0x104;
      }
      *(undefined4 *)((long)param_3 + 0x158) = 8;
      lVar7 = *(long *)((long)param_3 + 0x20);
      if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
         (6 < *(int *)(lVar7 + 0x10))) {
        uVar14 = _baseName(
                          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                          );
        _LogMsg(7,lVar7,uVar14,0x1f2,"ClientHasDataHelper",0,&cf_gotconnectcommand_atyp_d,
                *(undefined1 *)((long)param_3 + 0x160));
      }
      goto LAB_00192667;
    case 8:
      cVar5 = *(char *)((long)param_3 + 0x160);
      if (cVar5 == '\x04') {
LAB_0019283f:
        iVar6 = 0x1e;
        if (cVar5 == '\x01') {
          iVar6 = 2;
        }
        pcVar8 = _inet_ntop(iVar6,pcVar13,&local_68,0x2e);
        if (pcVar8 != (char *)0x0) {
          sVar9 = _strlen(&local_68);
          uVar14 = _CFStringCreateWithBytes(0,&local_68,sVar9,0x8000100,1);
          *(undefined8 *)((long)param_3 + 0x50) = uVar14;
        }
LAB_0019288c:
        lVar11 = *(long *)((long)param_3 + 0x50);
      }
      else {
        if (cVar5 != '\x03') {
          if (cVar5 == '\x01') goto LAB_0019283f;
          goto LAB_0019288c;
        }
        lVar11 = _CFStringCreateWithBytes(0,pcVar13,bVar3,0x8000100,1);
        *(long *)((long)param_3 + 0x50) = lVar11;
      }
      lVar7 = *(long *)((long)param_3 + 0x20);
      if (lVar11 != 0) goto code_r0x00192c5a;
      if (((lVar7 == 0) && (lVar7 = _getDefaultLogCtx(), lVar7 == 0)) ||
         (*(int *)(lVar7 + 0x10) < 3)) goto LAB_0019347c;
      uVar16 = _baseName(
                        "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                        );
      pcVar21 = &cf_failedtogethostname;
      uVar17 = 0x20a;
      uVar14 = 0;
      goto LAB_00192dea;
    case 9:
      goto switchD_001926d5_caseD_9;
    default:
      lVar7 = *(long *)((long)param_3 + 0x20);
      if (((lVar7 == 0) && (lVar7 = _getDefaultLogCtx(), lVar7 == 0)) ||
         (*(int *)(lVar7 + 0x10) < 3)) goto LAB_0019347c;
      uVar16 = _baseName(
                        "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                        );
      uVar17 = 0x224;
      uVar14 = 0;
      pcVar21 = &cf_unknownstate_d;
      goto LAB_00192dea;
    }
    uVar14 = 1;
LAB_00193477:
    _SendReply(param_3,uVar14);
    goto LAB_0019347c;
  }
  lVar7 = *(long *)((long)param_3 + 0x20);
  if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) && (2 < *(int *)(lVar7 + 0x10))) {
    uVar16 = _baseName(
                      "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                      );
    pcVar21 = &cf_unknowneventtype_lu;
    uVar17 = 0x140;
    uVar14 = 0;
LAB_00192dea:
    _LogMsg(3,lVar7,uVar16,uVar17,"ClientHasDataHelper",uVar14,pcVar21);
  }
LAB_0019347c:
  _RPSocketInvalidate(*(undefined8 *)((long)param_3 + 0x10));
LAB_00193485:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
switchD_001926d5_caseD_9:
  *(ushort *)((long)param_3 + 0x15c) =
       *(ushort *)((long)param_3 + 0x58) << 8 | *(ushort *)((long)param_3 + 0x58) >> 8;
  lVar7 = *(long *)((long)param_3 + 0x20);
  if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) && (6 < *(int *)(lVar7 + 0x10))) {
    uVar14 = _baseName(
                      "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                      );
    _LogMsg(7,lVar7,uVar14,0x217,"ClientHasDataHelper",0,&cf_gotport_d,
            *(undefined2 *)((long)param_3 + 0x15c));
  }
  _RPSocketSuspend(*(undefined8 *)((long)param_3 + 0x10));
  _RPSocketSetClient(*(undefined8 *)((long)param_3 + 0x10),0,0);
  _CFRetain();
  queue = _dispatch_get_global_queue(0,0);
  _dispatch_async_f(queue,param_3,_CreateHostSocket);
  goto LAB_00193485;
code_r0x00192c5a:
  if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) && (6 < *(int *)(lVar7 + 0x10))) {
    uVar14 = _baseName(
                      "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                      );
    _LogMsg(7,lVar7,uVar14,0x20e,"ClientHasDataHelper",0,&cf_gothost__,
            *(undefined8 *)((long)param_3 + 0x50));
  }
  *(undefined1 *)((long)param_3 + 0x15e) = 2;
  *(undefined4 *)((long)param_3 + 0x158) = 9;
  goto LAB_00192667;
}

