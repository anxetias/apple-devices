// rea decompile_all
// name: FUN_10000fc8a
// address: 0x10000fc8a
// body: available
// range: 0x10000fc8a-0x100010263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000ff38 to 0x100008fdb FUN_100008fdb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000ff72 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100010245 to 0x100010299 FUN_100010299 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000fc8a(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  void *pvVar14;
  cfstringStruct *pcVar15;
  char *pcVar16;
  undefined8 uVar17;
  long *plVar18;
  double dVar19;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  if (param_2 == 8) {
    iVar8 = FUN_100010331(*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x10));
    if (-1 < iVar8) {
      if (*(char *)(param_5 + 0x40) != '\x01') {
        return;
      }
      if (*(int *)(*(long *)(param_5 + 0x10) + 0x18) != 0) {
        return;
      }
      uVar17 = *(undefined8 *)(param_5 + 8);
      FUN_10000f83d(uVar17);
      FUN_100008fdb(uVar17);
      return;
    }
LAB_100010234:
    FUN_100010299(param_5);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  puVar1 = *(undefined8 **)(param_5 + 0x18);
  lVar9 = *(long *)(param_5 + 0x20);
  if (lVar9 == 0 || puVar1 == (undefined8 *)0x0) {
    if (DAT_100021030 < 3) {
      return;
    }
    pcVar15 = &cf__snullparam;
    uVar17 = 3;
    pcVar16 = (char *)0x0;
LAB_10000ff62:
    FUN_1000008d2(uVar17,pcVar16,pcVar15,"_recv_msg");
    return;
  }
  local_58 = *(undefined8 *)(param_5 + 0x10);
  uVar7 = *(uint *)(puVar1 + 3);
  if (uVar7 < *(uint *)(puVar1 + 1)) {
    do {
      iVar8 = *(int *)((long)puVar1 + 0x1c);
      if (iVar8 - 1U < uVar7 - 4) break;
      iVar4 = 4 - uVar7;
      if (iVar8 != 0) {
        iVar4 = iVar8 - (uVar7 - 4);
      }
      uVar6 = _AMDServiceConnectionReceive(lVar9,puVar1[2],iVar4);
      if ((int)uVar6 < 1) {
        lVar9 = _AMDServiceConnectionGetSecureIOContext(lVar9);
        if ((uVar6 == 0) && (lVar9 == 0)) {
          if (6 < DAT_100021030) {
            FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sconnectionclosed,"_recv_msg");
          }
          goto LAB_100010234;
        }
        piVar12 = ___error();
        if (*piVar12 != 0x23) {
          if (2 < DAT_100021030) {
            piVar12 = ___error();
            FUN_1000008d2(3,0,&cf__serrno__u,"_recv_msg",*piVar12);
          }
          goto LAB_100010234;
        }
        if (DAT_100021030 < 7) {
          return;
        }
        pcVar16 = "com.apple.usbmuxd.Bonjour";
        pcVar15 = &cf__sblocking;
        uVar17 = 7;
        goto LAB_10000ff62;
      }
      uVar7 = *(int *)(puVar1 + 3) + uVar6;
      *(uint *)(puVar1 + 3) = uVar7;
      puVar1[2] = puVar1[2] + (ulong)uVar6;
      if ((*(int *)((long)puVar1 + 0x1c) == 0) && (3 < uVar7)) {
        uVar6 = *(uint *)*puVar1;
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        *(uint *)((long)puVar1 + 0x1c) = uVar6;
        if ((0xffc < uVar6) && (2 < DAT_100021030)) {
          FUN_1000008d2(3,0,&cf__sSizeisbiggerthanmaxmessagesizeforhb_u>_u,"_recv_msg",uVar6,0x1000)
          ;
          uVar7 = *(uint *)(puVar1 + 3);
        }
      }
    } while (uVar7 < *(uint *)(puVar1 + 1));
  }
  iVar8 = *(int *)((long)puVar1 + 0x1c);
  if (uVar7 != iVar8 + 4U) {
    return;
  }
  if (iVar8 < 0) goto LAB_100010234;
  if (iVar8 == 0) {
    return;
  }
  if (param_5 == 0) goto LAB_1000101bd;
  plVar2 = *(long **)(param_5 + 0x10);
  plVar18 = *(long **)(param_5 + 0x18);
  plVar2[2] = 0;
  plVar2[3] = 0;
  lVar9 = _CFDataCreateWithBytesNoCopy
                    (0,*plVar18 + 4,iVar8,*(undefined8 *)PTR__kCFAllocatorNull_10001c020);
  if (lVar9 != 0) {
    local_48 = plVar18;
    local_40 = lVar9;
    local_38 = _CFPropertyListCreateWithData(0,lVar9,2,0,0);
    if (local_38 == 0) {
      _CFRelease(local_40);
      plVar18 = local_48;
    }
    else {
      local_50 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
      lVar10 = _CFDictionaryCreateMutable
                         (local_50,0,PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                          PTR__kCFTypeDictionaryValueCallBacks_10001c060);
      lVar9 = 0;
      if (lVar10 != 0) {
        lVar9 = _CFDictionaryGetValue(local_38,&cf_Command);
        if (lVar9 != 0) {
          lVar11 = _CFStringCompare(lVar9,&cf_Marco,0);
          if (lVar11 != 0) {
            lVar11 = _CFStringCompare(lVar9,&cf_SleepyTime,0);
            lVar9 = 0;
            if (lVar11 == 0) {
              if (6 < DAT_100021030) {
                FUN_1000008d2(7,0,&cf__sSleepyTime,"_handle_msg");
              }
              *(undefined1 *)(param_5 + 0x40) = 1;
              _CFDictionaryAddValue(lVar10,&cf_Command,&cf_NightNight);
LAB_100010100:
              lVar11 = _CFPropertyListCreateData(local_50,lVar10,100,0,0);
              lVar9 = 0;
              if (lVar11 != 0) {
                iVar8 = _CFDataGetLength(lVar11);
                *(int *)((long)plVar2 + 0x1c) = iVar8;
                lVar9 = lVar11;
                if ((0xfffff003 < iVar8 - 0xffdU) &&
                   (pvVar14 = (void *)_CFDataGetBytePtr(lVar11), pvVar14 != (void *)0x0)) {
                  _memcpy((void *)(*plVar2 + 4),pvVar14,(ulong)*(uint *)((long)plVar2 + 0x1c));
                  uVar7 = *(uint *)((long)plVar2 + 0x1c);
                  puVar3 = (uint *)*plVar2;
                  *puVar3 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                            uVar7 << 0x18;
                  *(int *)(plVar2 + 3) = *(int *)((long)plVar2 + 0x1c) + 4;
                  plVar2[2] = (long)puVar3;
                }
              }
            }
            goto LAB_10001017e;
          }
          if (6 < DAT_100021030) {
            FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sMarco,"_handle_msg");
          }
          lVar9 = _CFDictionaryGetValue(local_38,&cf_Interval);
          if (lVar9 != 0) {
            lVar11 = _CFGetTypeID(lVar9);
            lVar13 = _CFNumberGetTypeID();
            if ((lVar11 == lVar13) &&
               (cVar5 = _CFNumberGetValue(lVar9,0xd,&local_60), cVar5 != '\0')) {
              dVar19 = (double)_CFAbsoluteTimeGetCurrent();
              _CFRunLoopTimerSetNextFireDate
                        (dVar19 + local_60 + local_60,*(undefined8 *)(param_5 + 0x38));
              _CFDictionaryAddValue(lVar10,&cf_Command,&cf_Polo);
              lVar9 = *(long *)PTR__kCFBooleanTrue_10001c030;
              lVar11 = _CFDictionaryGetValue(local_38,&cf_SupportsSleepyTime);
              if ((lVar9 == lVar11) &&
                 ((*(char *)(*(long *)(param_5 + 8) + 0x130) == '\0' &&
                  (*(undefined1 *)(*(long *)(param_5 + 8) + 0x130) = 1, 6 < DAT_100021030)))) {
                FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sdevicesupportsSleepyTime,
                              "_handle_msg");
              }
              goto LAB_100010100;
            }
          }
        }
        lVar9 = 0;
      }
LAB_10001017e:
      _CFRelease(local_40);
      _CFRelease(local_38);
      if (lVar10 != 0) {
        _CFRelease(lVar10);
      }
      plVar18 = local_48;
      if (lVar9 != 0) {
        _CFRelease(lVar9);
      }
    }
  }
  plVar18[3] = 0;
  plVar18[2] = *plVar18;
LAB_1000101bd:
  iVar8 = FUN_100010331(*(undefined8 *)(param_5 + 0x20),local_58);
  if (iVar8 < 0) {
    FUN_100010299(param_5);
  }
  else if ((*(char *)(param_5 + 0x40) == '\x01') &&
          (*(int *)(*(long *)(param_5 + 0x10) + 0x18) == 0)) {
    uVar17 = *(undefined8 *)(param_5 + 8);
    FUN_10000f83d(uVar17);
    FUN_100008fdb(uVar17);
  }
  return;
}

