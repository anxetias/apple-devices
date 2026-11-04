// rea decompile_all
// name: _MDRemotePairingRunLoopSourcePerform
// address: 0x13fb72
// body: available
// range: 0x13fb72-0x13ff10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _MDRemotePairingRunLoopSourcePerform(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_48;
  char *local_40;
  long local_38;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Invalid input.";
  }
  else {
    lVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"eventFIFO");
    if ((lVar5 != 0) &&
       (lVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note"),
       puVar2 = PTR__objc_msgSend_00441098, lVar5 != 0)) {
      local_40 = "device";
      local_48 = "action";
      local_38 = param_1;
      do {
        lVar5 = local_38;
        uVar6 = (*(code *)puVar2)(local_38,"eventFIFO");
        _objc_sync_enter(uVar6);
        uVar7 = (*(code *)puVar2)(lVar5,"eventFIFO");
        uVar7 = (*(code *)puVar2)(uVar7,"lastObject");
        lVar5 = (*(code *)PTR__objc_retain_004410a8)(uVar7);
        uVar7 = (*(code *)puVar2)(local_38,"eventFIFO");
        (*(code *)puVar2)(uVar7,"removeLastObject");
        uVar7 = (*(code *)puVar2)(local_38,"eventFIFO");
        lVar8 = (*(code *)puVar2)(uVar7,"count");
        _objc_sync_exit(uVar6);
        if (lVar5 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Failed to get event from event FIFO queue.";
          lVar5 = 0;
          param_1 = local_38;
          goto LAB_0013fe4e;
        }
        lVar9 = (*(code *)puVar2)(local_38,"note");
        pcVar11 = local_48;
        if (*(char *)(lVar9 + 0x79) == '\x01') {
          lVar9 = (*(code *)puVar2)(local_38,"note");
          if (*(long *)(lVar9 + 0x80) == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar11 = "Callback is NULL while callbacks are enabled.";
            param_1 = local_38;
            goto LAB_0013fe4e;
          }
          iVar3 = (*(code *)puVar2)(lVar5,pcVar11);
          lVar9 = local_38;
          if (iVar3 == 1) {
            lVar10 = (*(code *)puVar2)(local_38,"note");
            pcVar11 = local_40;
            uVar6 = (*(code *)puVar2)(lVar5,local_40);
            _CFArrayAppendValue(*(undefined8 *)(lVar10 + 0x18),uVar6);
          }
          else {
            iVar3 = (*(code *)puVar2)(lVar5,pcVar11);
            lVar9 = local_38;
            pcVar11 = local_40;
            if (iVar3 == 2) {
              uVar6 = (*(code *)puVar2)(lVar5,local_40);
              uVar7 = (*(code *)puVar2)(lVar9,"note");
              __AMDeviceDetachPairedDevices(uVar6,uVar7);
              uVar6 = (*(code *)puVar2)(lVar9,"note");
              uVar7 = (*(code *)puVar2)(lVar5,pcVar11);
              _AMDeviceNotificationRemoveDevice(uVar6,uVar7);
            }
          }
          local_68 = (*(code *)puVar2)(lVar5,pcVar11);
          local_58 = (*(code *)puVar2)(lVar9,"note");
          pcVar11 = local_48;
          uVar4 = (*(code *)puVar2)(lVar5,local_48);
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
          lVar10 = (*(code *)puVar2)(lVar9,"note");
          pcVar1 = *(code **)(lVar10 + 0x80);
          lVar9 = (*(code *)puVar2)(lVar9,"note");
          (*pcVar1)(&local_68,*(undefined8 *)(lVar9 + 0x88));
          iVar3 = (*(code *)puVar2)(lVar5,pcVar11);
          if (iVar3 != 1) {
            uVar6 = (*(code *)puVar2)(lVar5,local_40);
            _CFRelease(uVar6);
          }
        }
        (*(code *)PTR__objc_release_004410a0)(lVar5);
      } while (lVar8 != 0);
      lVar5 = 0;
      param_1 = local_38;
      goto LAB_0013fe68;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Run loop source not initialized.";
  }
  lVar5 = 0;
LAB_0013fe4e:
  __os_log_internal(0,_md_log_log,0x10,pcVar11);
LAB_0013fe68:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  (*(code *)puVar2)(param_1);
  return;
}

