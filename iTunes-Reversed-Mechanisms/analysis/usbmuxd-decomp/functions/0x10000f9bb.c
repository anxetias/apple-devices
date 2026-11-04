// rea decompile_all
// name: FUN_10000f9bb
// address: 0x10000f9bb
// body: available
// range: 0x10000f9bb-0x10000fc89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000f9bb(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  cVar2 = FUN_100010271();
  if (cVar2 != '\0') {
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__s,"start_heartbeat");
    }
    if (param_1 == 0) {
      if (2 < DAT_100021030) {
        puVar4 = (undefined8 *)0x0;
        FUN_1000008d2(3,0,&cf__s_Heartbeatservicewasn_tstarted_ignoringfornow___,"start_heartbeat");
        goto LAB_10000fc6a;
      }
    }
    else {
      uVar3 = _AMDServiceConnectionGetSocket(param_1);
      local_58 = 0;
      puStack_50 = (undefined8 *)0x0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      puVar4 = _malloc(0x48);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[8] = 0;
        puVar4[1] = param_2;
        puVar5 = _malloc(0x20);
        puVar4[3] = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          pvVar6 = _malloc(0x1000);
          *puVar5 = pvVar6;
          if (pvVar6 != (void *)0x0) {
            *(undefined4 *)(puVar5 + 1) = 0x1000;
            puVar5[2] = pvVar6;
            puVar5[3] = 0;
            puVar5 = _malloc(0x20);
            puVar4[2] = puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              pvVar6 = _malloc(0x1000);
              *puVar5 = pvVar6;
              if (pvVar6 != (void *)0x0) {
                *(undefined4 *)(puVar5 + 1) = 0x1000;
                puVar5[2] = 0;
                puVar5[3] = 0;
                _CFRetain(param_1);
                puVar4[4] = param_1;
                *(undefined1 *)(puVar4 + 8) = 0;
                local_58 = 0;
                local_38 = 0;
                local_48 = 0;
                uStack_40 = 0;
                puStack_50 = puVar4;
                FUN_10000de27(uVar3,0);
                uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
                lVar7 = _CFSocketCreateWithNative(uVar10,uVar3,9,FUN_10000fc8a,&local_58);
                puVar4[5] = lVar7;
                if (lVar7 != 0) {
                  uVar8 = _CFSocketGetSocketFlags(lVar7);
                  _CFSocketSetSocketFlags(puVar4[5],uVar8 & 0xffffffffffffff7f);
                  lVar7 = _CFSocketCreateRunLoopSource(uVar10,puVar4[5],0);
                  puVar4[6] = lVar7;
                  if (lVar7 != 0) {
                    uVar9 = _CFRunLoopGetCurrent();
                    uVar1 = *(undefined8 *)PTR__kCFRunLoopCommonModes_10001c040;
                    _CFRunLoopAddSource(uVar9,puVar4[6],uVar1);
                    local_80 = 0;
                    local_70 = 0;
                    uStack_68 = 0;
                    local_60 = 0;
                    local_78 = puVar4;
                    dVar11 = (double)_CFAbsoluteTimeGetCurrent();
                    lVar7 = _CFRunLoopTimerCreate
                                      (dVar11 + 30.0,0,uVar10,0,0,FUN_100010264,&local_80);
                    puVar4[7] = lVar7;
                    if (lVar7 != 0) {
                      uVar10 = _CFRunLoopGetCurrent();
                      _CFRunLoopAddTimer(uVar10,puVar4[7],uVar1);
                      _pthread_mutex_lock((pthread_mutex_t *)&DAT_1000212d8);
                      *puVar4 = DAT_1000212c8;
                      DAT_1000212c8 = puVar4;
                      _pthread_mutex_unlock((pthread_mutex_t *)&DAT_1000212d8);
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_10000fc6a;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_10000fc6a:
  FUN_10000f897(puVar4);
  return 0xe8000001;
}

