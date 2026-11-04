// rea decompile_all
// name: MDRemotePairingBrowser::initWithNotificationRef:withError:
// address: 0x14200a
// body: available
// range: 0x14200a-0x14236d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID MDRemotePairingBrowser::initWithNotificationRef_withError_
             (ID param_1,SEL param_2,_AMDeviceNotificationContext *param_3,int *param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  dispatch_queue_attr_t attr;
  dispatch_queue_t pdVar6;
  dispatch_group_t pdVar7;
  int iVar8;
  char *pcVar9;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *local_a8;
  undefined1 local_a0 [8];
  objc_super local_98;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  int *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  local_98.super_class = &objc::class_t::MDRemotePairingBrowser;
  local_98.receiver = param_1;
  local_58 = param_4;
  IVar2 = _objc_msgSendSuper2(&local_98,"init");
  if (IVar2 == 0) {
    iVar8 = 0xe8000001;
    goto LAB_001422f8;
  }
  if (param_3 == (_AMDeviceNotificationContext *)0x0) {
    iVar8 = 0xe8000007;
    pcVar9 = "Invalid argument.";
  }
  else {
    uVar3 = _CFRetain(param_3);
    *(undefined8 *)(IVar2 + 0x10) = uVar3;
    if (_RemotePairingLibrary_sOnce != -1) {
      _dispatch_once(&_RemotePairingLibrary_sOnce,&___block_literal_global_398);
    }
    iVar8 = 0xe800000f;
    if (_RemotePairingLibrary_sLib == 0) {
      pcVar9 = "RemotePairing is not available.";
    }
    else {
      uVar3 = _objc_alloc(&objc::class_t::MDRemotePairingRunLoopSource);
      puVar1 = PTR__objc_msgSend_00441098;
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(IVar2,"note");
      lVar5 = (*(code *)puVar1)(uVar3,"initWithNotificationRef:",uVar4);
      *(long *)(IVar2 + 0x20) = lVar5;
      if (lVar5 == 0) {
        pcVar9 = "Failed to create runloop source.";
      }
      else {
        attr = (dispatch_queue_attr_t)_dispatch_queue_attr_make_with_autorelease_frequency(0,1);
        pdVar6 = _dispatch_queue_create("com.apple.mobiledevice.remotepairing.discovery",attr);
        *(dispatch_queue_t *)(IVar2 + 0x38) = pdVar6;
        if (pdVar6 == (dispatch_queue_t)0x0) {
          pcVar9 = "Failed to create queue.";
        }
        else {
          lVar5 = (*_getRPConnectableDeviceBrowserClass)();
          if (lVar5 == 0) {
            pcVar9 = "RemotePairing is not supported on this platform.";
            goto LAB_001422d1;
          }
          *(undefined1 *)(IVar2 + 8) = 1;
          pdVar7 = _dispatch_group_create();
          *(dispatch_group_t *)(IVar2 + 0x28) = pdVar7;
          if (pdVar7 == (dispatch_group_t)0x0) {
            pcVar9 = "Failed to create dispatch group.";
          }
          else {
            uVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
            lVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"init");
            *(long *)(IVar2 + 0x30) = lVar5;
            if (lVar5 != 0) {
              _objc_initWeak(local_38,IVar2);
              uVar3 = (*(code *)PTR__objc_msgSend_00441098)(IVar2,"browseCurrentCompleteGroup");
              _objc_initWeak(local_40,uVar3);
              uVar3 = (*_getRPConnectableDeviceBrowserClass)();
              local_50 = _objc_alloc(uVar3);
              local_48 = (*(code *)PTR__objc_msgSend_00441098)(IVar2,"discoveryQueue");
              puVar1 = PTR___NSConcreteStackBlock_004412a8;
              local_c0 = PTR___NSConcreteStackBlock_004412a8;
              local_b8 = 0xc2000000;
              local_b0 = 
              ___60__MDRemotePairingBrowser_initWithNotificationRef_withError___block_invoke;
              local_a8 = &___block_descriptor_40_e8_32w_e29_v16__0__RPConnectableDevice_8l;
              _objc_copyWeak(local_a0,local_38);
              local_88 = puVar1;
              local_80 = 0xc2000000;
              local_78 = 
              ___60__MDRemotePairingBrowser_initWithNotificationRef_withError___block_invoke_318;
              local_70 = &___block_descriptor_48_e8_32w40w_e17_v16__0__NSError_8l;
              _objc_copyWeak(local_68,local_40);
              _objc_copyWeak(local_60,local_38);
              lVar5 = (*(code *)PTR__objc_msgSend_00441098)
                                (local_50,"initWithTargetQueue:onDeviceDiscovered:onCancel:",
                                 local_48,&local_c0,&local_88);
              _objc_destroyWeak(local_60);
              _objc_destroyWeak(local_68);
              _objc_destroyWeak(local_a0);
              _objc_destroyWeak(local_40);
              _objc_destroyWeak(local_38);
              if (lVar5 != 0) {
                uVar3 = (*(code *)PTR__objc_retain_004410a8)(lVar5);
                *(undefined8 *)(IVar2 + 0x18) = uVar3;
                (*(code *)PTR__objc_release_004410a0)(lVar5);
                return IVar2;
              }
              iVar8 = 0xe8000001;
              pcVar9 = "Failed to allocate remote device browser.";
              goto LAB_001422d1;
            }
            pcVar9 = "Failed to create array.";
          }
        }
      }
      iVar8 = 0xe8000003;
    }
  }
LAB_001422d1:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar9);
LAB_001422f8:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(0);
  (*(code *)puVar1)(IVar2);
  if (local_58 != (int *)0x0) {
    *local_58 = iVar8;
  }
  return 0;
}

