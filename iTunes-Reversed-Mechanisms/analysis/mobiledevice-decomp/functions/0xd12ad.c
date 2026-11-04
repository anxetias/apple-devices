// rea decompile_all
// name: _performRestore
// address: 0xd12ad
// body: available
// range: 0xd12ad-0xd1dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _performRestore(__AMRestoreModeDevice*, __CFDictionary*, __CFError**) */

undefined8
_performRestore(__AMRestoreModeDevice *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  pthread_mutex_t *ppVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  dispatch_object_t dVar10;
  undefined8 uVar11;
  __CFError *p_Var12;
  pthread_cond_t *ppVar13;
  dispatch_object_t dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  dispatch_object_t dVar18;
  _os_object_s *p_Var19;
  __CFDictionary *p_Var20;
  _os_object_s *p_Var21;
  dispatch_object_t *context;
  dispatch_object_t dVar22;
  code *work;
  __CFString *p_Var23;
  dispatch_object_t dVar24;
  bool bVar25;
  dispatch_object_t local_98;
  undefined8 uStack_90;
  __CFString *local_88;
  dispatch_object_t local_80;
  dispatch_object_t local_78;
  dispatch_object_t local_70;
  __CFError **local_68;
  pthread_cond_t *local_60;
  dispatch_object_t local_58;
  dispatch_object_t local_50;
  dispatch_object_t local_48;
  dispatch_object_t local_40;
  _os_object_s local_36;
  char local_35;
  int local_34;
  
  local_78 = (dispatch_object_t)param_2;
  pcVar5 = (cfstringStruct *)_CFDictionaryGetValue(param_2,&cf_GreymatterDevelopment);
  dVar10 = *(dispatch_object_t *)PTR__kCFBooleanTrue_00441110;
  local_70 = dVar10;
  if (pcVar5 == (cfstringStruct *)dVar10._os_obj) {
    lVar6 = _CFDictionaryGetValue(local_78._os_obj,&cf_DataOnlyOverlayRootsToInstall);
    if (lVar6 == 0) {
      uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar9 = _CFArrayCreateMutable(uVar11,1,PTR__kCFTypeArrayCallBacks_004411a8);
    }
    else {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFArrayGetTypeID();
      if (lVar7 != lVar8) {
        _AMRLog(3,&cf_DataOnlyOverlayRootsToInstallmustbeanarray);
        return 0;
      }
      uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar7 = _CFArrayGetCount(lVar6);
      uVar9 = _CFArrayCreateMutableCopy(uVar11,lVar7 + 1,lVar6);
    }
    dVar14 = local_78;
    dVar10._os_obj =
         (_os_object_s *)_CFDictionaryGetValue(local_78._os_obj,&cf_SourceRestoreBundlePath);
    uVar11 = _CFStringCreateWithFormat(uVar11,0,&cf____GreyMatter);
    _AMRLog(6,&cf_AppendingGreymatterbundleroottoroots___,uVar11);
    _CFArrayAppendValue(uVar9,uVar11);
    _CFDictionarySetValue(dVar14._os_obj,&cf_DataOnlyOverlayRootsToInstall,uVar9);
    _CFRelease(uVar11);
    _CFRelease(uVar9);
  }
  if (*(int *)(param_1 + 0x130) < 10) {
    p_Var12 = (__CFError *)
              _AMRCreateErrorWithUnderlyingError
                        ((__CFString *)&MACH_HEADER.cputype,0x45d510,(__CFString *)0x0,
                         (__CFError *)dVar10._os_obj);
    iVar4 = 4;
    goto LAB_000d18c0;
  }
  local_58._0_4_ = 0xf;
  uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  dVar10 = (dispatch_object_t)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
  local_68 = param_3;
  ppVar13 = (pthread_cond_t *)
            _CFDictionaryCreateMutable(uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
  if (ppVar13 == (pthread_cond_t *)0x0) {
    p_Var23 = (__CFString *)((long)&MACH_HEADER.ncmds + 2);
    param_3 = local_68;
  }
  else {
    _CFDictionarySetValue(ppVar13,&cf_Request,&cf_StartRestore);
    uVar9 = _CFNumberCreate(uVar11,9,&local_58);
    _CFDictionarySetValue(ppVar13,&cf_RestoreProtocolVersion,uVar9);
    _CFRelease(uVar9);
    dVar14 = local_78;
    uVar9 = _CFGetAllocator(local_78._os_obj);
    dVar14._os_obj = (_os_object_s *)_CFDictionaryCreateMutableCopy(uVar9,0,dVar14._os_obj);
    if (dVar14._os_obj == (_os_object_s *)0x0) {
      p_Var23 = (__CFString *)((long)&MACH_HEADER.ncmds + 2);
      param_3 = local_68;
    }
    else {
      local_60 = ppVar13;
      lVar6 = _CFDictionaryGetValue(dVar14._os_obj,&cf_SystemImage);
      dVar24 = local_70;
      dVar18 = *(dispatch_object_t *)PTR__kCFBooleanFalse_00441108;
      dVar22 = local_70;
      if (lVar6 == 0) {
        dVar22 = dVar18;
      }
      local_48._os_obj = dVar14._os_obj;
      _CFDictionarySetValue(dVar14._os_obj,&cf_SystemImage,dVar22._os_obj);
      lVar6 = _CFDictionaryGetValue(local_48._os_obj,&cf_RootToInstall);
      dVar14 = local_48;
      if (lVar6 != 0) {
        dVar18 = dVar24;
      }
      _CFDictionarySetValue(local_48._os_obj,&cf_RootToInstall,dVar18._os_obj);
      dVar18 = (dispatch_object_t)((dispatch_object_t *)(param_1 + 0x138))->_os_obj;
      lVar6 = _CFDictionaryGetValue(dVar14._os_obj,&cf_ClearNVRAM);
      if ((lVar6 == 0) || (cVar3 = _CFBooleanGetValue(lVar6), cVar3 == '\0')) {
        lVar6 = _CFDictionaryGetValue(dVar14._os_obj,&cf_ClearPersistentBootArgs);
        if (lVar6 != 0) goto LAB_000d157a;
        ppVar13 = local_60;
        if ((cfstringStruct *)dVar18._os_obj == (cfstringStruct *)0x0) {
          dVar18._os_obj = (_os_object_s *)0x0;
          goto LAB_000d15c5;
        }
LAB_000d15b5:
        local_40._os_obj = (_os_object_s *)_CFStringCreateCopy(uVar11,dVar18._os_obj);
      }
      else {
        lVar6 = _CFDictionaryGetValue(dVar14._os_obj,&cf_ClearPersistentBootArgs);
        dVar18._os_obj = (_os_object_s *)0x0;
        ppVar13 = local_60;
        if (lVar6 != 0) {
LAB_000d157a:
          ppVar13 = local_60;
          cVar3 = _CFBooleanGetValue(lVar6);
          if (((cfstringStruct *)dVar18._os_obj != (cfstringStruct *)0x0) && (cVar3 != '\x01'))
          goto LAB_000d15b5;
        }
LAB_000d15c5:
        local_40._os_obj = (_os_object_s *)_CFStringCreateWithCString(uVar11,"",0x8000100);
      }
      lVar6 = _CFDictionaryGetValue(dVar14._os_obj,&cf_PersistantBootArgsModifications);
      dVar24 = local_40;
      local_80 = dVar18;
      local_50 = (dispatch_object_t)param_1;
      if (lVar6 != 0) {
        local_98._os_obj = (_os_object_s *)0x0;
        uStack_90 = 0;
        dVar10._os_obj = (_os_object_s *)_CFStringGetLength(local_40._os_obj);
        local_35 = _CFStringFindWithOptions
                             (dVar24._os_obj,&cf_debug_0x14,0,dVar10._os_obj,1,&local_98);
        lVar7 = _CFArrayGetCount(lVar6);
        dVar14 = local_48;
        ppVar13 = local_60;
        if (0 < lVar7) {
          lVar7 = 0;
          do {
            uVar9 = _CFArrayGetValueAtIndex(lVar6,lVar7);
            lVar8 = _CFArrayGetCount(uVar9);
            pcVar5 = &cf___;
            if (lVar8 < 2) {
LAB_000d1757:
              _CFRelease(local_40._os_obj);
              local_40 = (dispatch_object_t)pcVar5;
            }
            else {
              uVar15 = _CFArrayGetValueAtIndex(uVar9,0);
              uVar16 = _CFArrayGetValueAtIndex(uVar9,1);
              lVar8 = _CFStringCompare(uVar15,&cf_Add,0);
              if (lVar8 == 0) {
                lVar8 = _CFArrayGetCount(uVar9);
                if (lVar8 < 3) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = _CFArrayGetValueAtIndex(uVar9,2);
                }
                param_1 = (__AMRestoreModeDevice *)local_50;
                dVar10._os_obj = (_os_object_s *)_CFStringGetLength(uVar16);
                lVar8 = _CFStringCompareWithOptions(uVar16,&cf_debug,0,dVar10._os_obj,1);
                if ((lVar8 != 0) || (local_35 != '\x01')) {
                  pcVar5 = (cfstringStruct *)
                           _AMRestoreCreateBootArgsByAddingArg(local_40._os_obj,uVar16,uVar9);
                  goto LAB_000d1757;
                }
              }
              else {
                lVar8 = _CFStringCompare(uVar15,&cf_Remove,0);
                if (lVar8 == 0) {
                  pcVar5 = (cfstringStruct *)
                           _AMRestoreCreateBootArgsByRemovingArg(local_40._os_obj,uVar16);
                  param_1 = (__AMRestoreModeDevice *)local_50;
                  goto LAB_000d1757;
                }
                _AMRLog(4,&cf_unexpectedboot_argsoperation____,uVar15);
                param_1 = (__AMRestoreModeDevice *)local_50;
              }
            }
            lVar7 = lVar7 + 1;
            lVar8 = _CFArrayGetCount(lVar6);
            dVar14 = local_48;
            ppVar13 = local_60;
          } while (lVar7 < lVar8);
        }
      }
      param_3 = local_68;
      dVar18 = local_80;
      lVar6 = _CFDictionaryGetValue(dVar14._os_obj,&cf_SetBootPartition);
      dVar14 = local_40;
      if (lVar6 != 0) {
        local_98._os_obj = local_98._os_obj & 0xffffffff00000000;
        _CFNumberGetValue(lVar6,9,&local_98);
        dVar18 = local_40;
        if (local_98._0_4_ == 0) {
          dVar14._os_obj =
               (_os_object_s *)_AMRestoreCreateBootArgsByRemovingArg(local_40._os_obj,&cf_rd);
          _CFRelease(dVar18._os_obj);
          dVar18 = local_80;
        }
        else {
          _AMRLog(4,&cf_unexpectedbootpartition_____ignoring,lVar6);
          dVar14 = local_40;
          dVar18 = local_80;
        }
      }
      dVar24 = dVar14;
      if ((cfstringStruct *)dVar18._os_obj == (cfstringStruct *)0x0) {
        dVar24 = (dispatch_object_t)&cf___;
        dVar18 = dVar14;
      }
      lVar6 = _CFStringCompare(dVar18._os_obj,dVar24._os_obj,0);
      dVar18 = local_48;
      if (lVar6 == 0) {
LAB_000d184c:
        _CFRelease(dVar14._os_obj);
      }
      else if ((cfstringStruct *)dVar14._os_obj != (cfstringStruct *)0x0) {
        _CFDictionarySetValue(local_48._os_obj,&cf_PersistentBootArgs,dVar14._os_obj);
        goto LAB_000d184c;
      }
      _CFDictionaryRemoveValue(dVar18._os_obj,&cf_DevicePasscodeData);
      _CFDictionarySetValue(dVar18._os_obj,&cf_BasebandUpdaterOutputPath,local_70._os_obj);
      _CFDictionarySetValue(ppVar13,&cf_RestoreOptions,dVar18._os_obj);
      _CFRelease(dVar18._os_obj);
      iVar4 = _ramrod_send_message(*(undefined4 *)(param_1 + 0x78),ppVar13);
      p_Var23 = (__CFString *)((long)&MACH_HEADER.cpusubtype + 1);
      if (iVar4 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x78);
        puVar17 = operator_new(0x38);
        *puVar17 = &PTR____cxa_pure_virtual_004459a8;
        *(undefined4 *)(puVar17 + 1) = 1;
        uVar9 = _CFRetain(param_1);
        puVar17[2] = uVar9;
        uVar9 = _CFRetain(local_78._os_obj);
        puVar17[3] = uVar9;
        *puVar17 = &PTR_ReceiveMessage_00445a08;
        *(undefined4 *)(puVar17 + 4) = uVar2;
        *(undefined1 *)((long)puVar17 + 0x24) = 0;
        puVar17[5] = 0;
        puVar17[6] = 0;
        *(undefined8 **)(param_1 + 0x70) = puVar17;
        *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
        _CFRelease(ppVar13);
        local_34 = 0;
        local_58._os_obj = (_os_object_s *)0x0;
        local_88 = (__CFString *)0x0;
        local_36 = (_os_object_s)0x0;
        local_40._os_obj = (_os_object_s *)_dispatch_group_create();
        local_70._os_obj = (_os_object_s *)_createRestoreLoopDispatchQueue(param_1,"restore");
        local_48._os_obj = (_os_object_s *)_createRestoreLoopDispatchQueue(param_1,"async-restore");
        dVar18._os_obj = (_os_object_s *)_createRestoreLoopDispatchQueue(param_1,"socket");
        local_98._os_obj = dVar18._os_obj;
        uStack_90 = _CFRetain(local_50._os_obj);
        dVar14 = local_50;
        _dispatch_async_f((dispatch_queue_t)dVar18._os_obj,&local_98,_receive_socket_message);
        ppVar1 = (pthread_mutex_t *)(dVar14._os_obj + 0x1c8);
        local_60 = (pthread_cond_t *)(dVar14._os_obj + 0x208);
        do {
          _pthread_mutex_lock(ppVar1);
          lVar6 = _CFArrayGetCount(*(long *)(dVar14._os_obj + 0x238));
          if (lVar6 == 0) {
            _pthread_cond_wait(local_60,ppVar1);
          }
          lVar6 = _CFArrayGetCount(*(long *)(dVar14._os_obj + 0x238));
          if (lVar6 < 1) {
            _pthread_mutex_unlock(ppVar1);
LAB_000d1a74:
            dVar10 = (dispatch_object_t)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
            p_Var20 = (__CFDictionary *)
                      _CFDictionaryCreateMutable
                                (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
            _CFDictionarySetValue(p_Var20,&cf_MsgType,&cf___Internal_DeviceDisconnect);
            p_Var19 = (_os_object_s *)_make_internal_message(dVar14._os_obj,p_Var20);
            _CFRelease(p_Var20);
          }
          else {
            p_Var19 = (_os_object_s *)_CFArrayGetValueAtIndex(*(long *)(dVar14._os_obj + 0x238),0);
            _CFArrayRemoveValueAtIndex(*(long *)(dVar14._os_obj + 0x238),0);
            _pthread_mutex_unlock(ppVar1);
            if (p_Var19 == (_os_object_s *)0x0) goto LAB_000d1a74;
          }
          p_Var21 = (_os_object_s *)_CFDictionaryGetValue(*(long *)(p_Var19 + 8),&cf_MsgType);
          lVar6 = _CFStringCompare(p_Var21,&cf___Internal_RestoreResult,0);
          dVar18 = local_40;
          if (lVar6 == 0) goto LAB_000d1b7e;
          _dispatch_group_enter((dispatch_group_t)local_40._os_obj);
          context = _calloc(1,0x40);
          context->_os_obj = (_os_object_s *)dVar14;
          context[1] = local_78;
          context[2]._os_obj = p_Var19;
          context[3]._os_obj = p_Var21;
          context[4]._os_obj = (_os_object_s *)dVar18;
          context[5]._os_obj = (_os_object_s *)&local_58;
          context[6]._os_obj = (_os_object_s *)&local_88;
          context[7]._os_obj = &local_36;
          cVar3 = _CFEqual(p_Var21,&cf_AsyncDataRequestMsg);
          if (cVar3 == '\0') {
            work = __block_restoreLoop_MessageHandler;
            dVar10 = local_70;
          }
          else {
            work = __block_restoreLoop_AsyncMessageHandler;
            dVar10 = local_48;
          }
          _dispatch_async_f((dispatch_queue_t)dVar10._os_obj,context,work);
          dVar10 = dVar14;
          dVar14 = local_50;
        } while( true );
      }
    }
    _CFRelease(ppVar13);
  }
  iVar4 = (int)p_Var23;
  p_Var12 = (__CFError *)
            _AMRCreateErrorWithUnderlyingError
                      (p_Var23,0x45d530,(__CFString *)0x0,(__CFError *)dVar10._os_obj);
LAB_000d18c0:
  if (p_Var12 == (__CFError *)0x0) {
    p_Var12 = (__CFError *)
              _AMRCreateErrorWithUnderlyingError
                        ((__CFString *)(long)iVar4,0,(__CFString *)0x0,(__CFError *)dVar10._os_obj);
  }
  if (param_3 == (__CFError **)0x0) {
    _CFRelease(p_Var12);
  }
  else {
    *param_3 = p_Var12;
  }
  return 0;
LAB_000d1b7e:
  lVar6 = _CFDictionaryGetValue(*(long *)(p_Var19 + 8),&cf_Result);
  if (lVar6 == 0) {
    local_34 = 0;
  }
  else {
    _CFNumberGetValue(lVar6,9,&local_34);
  }
  lVar6 = _CFDictionaryGetValue(*(long *)(p_Var19 + 8),&cf_Done);
  if (lVar6 == 0) {
    bVar25 = true;
  }
  else {
    cVar3 = _CFBooleanGetValue(lVar6);
    bVar25 = cVar3 == '\0';
  }
  lVar6 = _CFDictionaryGetValue(*(long *)(p_Var19 + 8));
  if (lVar6 != 0) {
    _CFBooleanGetValue(lVar6);
  }
  if (local_34 == 0) {
    pcVar5 = (cfstringStruct *)0x0;
  }
  else {
    pcVar5 = (cfstringStruct *)_CFDictionaryGetValue(*(long *)(p_Var19 + 8));
    if (pcVar5 == *(cfstringStruct **)PTR__kCFNull_00441158) {
      pcVar5 = &cf_Unknown___;
    }
    else {
      _CFRetain(pcVar5);
    }
  }
  local_50 = (dispatch_object_t)pcVar5;
  (**(code **)(*(long *)p_Var19 + 8))(p_Var19);
  if (bVar25) {
    (**(code **)(**(long **)(dVar14._os_obj + 0x70) + 0x28))();
  }
  p_Var12 = (__CFError *)0x0;
  _dispatch_sync_f((dispatch_queue_t)local_98._os_obj,(void *)0x0,__block_restoreLoop_Noop);
  _dispatch_release(local_98);
  dVar18 = local_48;
  local_98._os_obj = (_os_object_s *)0x0;
  _dispatch_sync_f((dispatch_queue_t)local_48._os_obj,(void *)0x0,__block_restoreLoop_Noop);
  dVar14 = local_70;
  _dispatch_sync_f((dispatch_queue_t)local_70._os_obj,(void *)0x0,__block_restoreLoop_Noop);
  dVar24 = local_40;
  _dispatch_group_wait((dispatch_group_t)local_40._os_obj,0xffffffffffffffff);
  _dispatch_release(dVar24);
  _dispatch_release(dVar18);
  _dispatch_release(dVar14);
  dVar14 = local_50;
  if (local_34 != 0) {
    if ((cfstringStruct *)local_58._os_obj == (cfstringStruct *)0x0) {
      if ((cfstringStruct *)local_50._os_obj == (cfstringStruct *)0x0) {
        local_58._os_obj = (_os_object_s *)&cf_Failedtohandlemessage;
      }
      else {
        local_58._os_obj =
             (_os_object_s *)
             _CFStringCreateWithFormat(uVar11,0,&cf_Failedtohandlemessagetype__,local_50._os_obj);
      }
    }
    uVar9 = _AMRestoreErrorTranslation(local_34);
    dVar10 = local_58;
    dVar18._os_obj =
         (_os_object_s *)_CFStringCreateWithFormat(uVar11,0,&cf_______,local_58._os_obj,uVar9);
    _AMSupportSafeRelease(uVar9);
    if ((cfstringStruct *)dVar18._os_obj != (cfstringStruct *)0x0) {
      _CFRelease(local_58._os_obj);
      local_58._os_obj = dVar18._os_obj;
    }
    p_Var12 = (__CFError *)
              _AMRCreateErrorWithUnderlyingError
                        ((__CFString *)(long)local_34,(long)local_58,local_88,
                         (__CFError *)dVar10._os_obj);
  }
  if ((cfstringStruct *)dVar14._os_obj != (cfstringStruct *)0x0) {
    _CFRelease(dVar14._os_obj);
  }
  if ((cfstringStruct *)local_58._os_obj != (cfstringStruct *)0x0) {
    _CFRelease();
  }
  param_3 = local_68;
  if (local_88 != (__CFString *)0x0) {
    _CFRelease();
  }
  if (local_34 == 0) {
    return 1;
  }
  iVar4 = _CFErrorGetCode(p_Var12);
  if (iVar4 == 0) {
    return 1;
  }
  goto LAB_000d18c0;
}

