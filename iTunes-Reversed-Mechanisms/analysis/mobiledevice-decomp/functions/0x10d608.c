// rea decompile_all
// name: _AMDeviceWakeupOperationSchedule
// address: 0x10d608
// body: available
// range: 0x10d608-0x10da7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMDeviceWakeupOperationSchedule(void *param_1,long param_2,long param_3)

{
  DNSServiceRef *sdRef;
  DNSServiceErrorType DVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  DNSServiceRef p_Var5;
  dispatch_queue_t pdVar6;
  DNSServiceRef p_Var7;
  ulong uVar8;
  DNSServiceRef p_Var9;
  undefined8 uVar10;
  char *pcVar11;
  ulong uVar12;
  uint32_t interfaceIndex;
  double dVar13;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  DNSServiceRef *local_a0;
  code *local_98;
  undefined *puStack_90;
  DNSServiceRef local_88;
  void *local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  uint32_t local_3c;
  pthread_mutex_t *local_38;
  
  if ((param_2 == 0 || param_1 == (void *)0x0) || param_3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Invalid input(s).";
  }
  else {
    if (*(int *)((long)param_1 + 0x10) == 0x656b6177) {
      local_38 = (pthread_mutex_t *)((long)param_1 + 0x18);
      _pthread_mutex_lock(local_38);
      p_Var5 = (DNSServiceRef)&local_d0;
      local_d0 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      local_c8 = param_1;
      dVar13 = (double)_CFAbsoluteTimeGetCurrent();
      local_58 = uVar4;
      lVar3 = _CFRunLoopTimerCreate
                        (dVar13 + 20.0,0,uVar4,0,0,__AMDeviceWakeupOperationTimerCallback,p_Var5);
      *(long *)((long)param_1 + 0x390) = lVar3;
      if (lVar3 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar12 = 0;
        __os_log_internal(0,_md_log_log,0x10,"Failed to create timer.");
      }
      else {
        local_50 = param_3;
        local_48 = param_2;
        if (*(long *)((long)param_1 + 0x130) == 0) {
          interfaceIndex = *(uint32_t *)((long)param_1 + 0x58);
          local_70 = (long)param_1 + 0x138;
          local_68 = (char *)((long)param_1 + 0x68);
          local_60 = (char *)((long)param_1 + 0xcc);
          uVar12 = 0;
          local_3c = interfaceIndex;
          do {
            sdRef = (DNSServiceRef *)(local_70 + uVar12 * 0x18);
            DVar1 = _DNSServiceResolve(sdRef,0x40000,interfaceIndex,local_68,
                                       *(char **)((long)param_1 + 0x60),local_60,
                                       __resolveReplyCallback,param_1);
            if (DVar1 == 0) {
              local_a8 = (undefined *)0x0;
              local_88 = (DNSServiceRef)0x0;
              local_98 = (code *)0x0;
              puStack_90 = (undefined *)0x0;
              local_a0 = sdRef;
              iVar2 = _DNSServiceRefSockFD(*sdRef);
              p_Var7 = (DNSServiceRef)
                       _CFSocketCreateWithNative(local_58,iVar2,1,__cfsocketReadCallback,&local_a8);
              if (p_Var7 != (DNSServiceRef)0x0) {
                uVar8 = _CFSocketGetSocketFlags(p_Var7);
                _CFSocketSetSocketFlags(p_Var7,uVar8 & 0xffffffffffffff7f);
                p_Var9 = (DNSServiceRef)_CFSocketCreateRunLoopSource(local_58,p_Var7,0);
                p_Var5 = p_Var7;
                if (p_Var9 == (DNSServiceRef)0x0) {
                  _CFSocketInvalidate(p_Var7);
                  _CFRelease(p_Var7);
                }
                else {
                  sdRef[1] = p_Var7;
                  sdRef[2] = p_Var9;
                  _CFRunLoopAddSource(local_48,p_Var9,local_50);
                  uVar12 = (ulong)((int)uVar12 + 1);
                }
              }
            }
            interfaceIndex = interfaceIndex + 1;
          } while (((interfaceIndex < 0x1a) && (local_3c == 0)) && ((uint)uVar12 < 0x19));
        }
        else {
          local_78 = 0;
          uVar4 = (*_getRPDeviceWakeupTokenClass)();
          p_Var5 = (DNSServiceRef)
                   (*(code *)PTR__objc_msgSend_00441098)
                             (uVar4,"createFromData:error:",*(undefined8 *)((long)param_1 + 0x130),
                              &local_78);
          if (p_Var5 == (DNSServiceRef)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to deserialize RemotePairing wakeup token: %@",local_78);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar4 = _md_log_log;
            uVar10 = _AMDErrorString(0xe8000123);
            uVar12 = 0;
            __os_log_internal(0,uVar4,0x10,"Failed to wake device via RemotePairing: 0x%08x (%s)",
                              0xe8000123,uVar10);
            goto LAB_0010d9e8;
          }
          pdVar6 = _dispatch_get_global_queue(0,0);
          _CFRetain(param_1);
          local_a8 = PTR___NSConcreteStackBlock_004412a8;
          local_a0 = (DNSServiceRef *)0xc2000000;
          local_98 = ____AMDRemotePairingCreateResolveOperation_block_invoke;
          puStack_90 = &___block_descriptor_48_e8_32o_e17_v16__0__NSError_8l;
          local_88 = p_Var5;
          local_80 = param_1;
          (*(code *)PTR__objc_msgSend_00441098)
                    (p_Var5,"wakeDeviceOnQueue:timeout:withCompletion:",pdVar6,0x3c);
        }
        *(long *)((long)param_1 + 0x398) = local_48;
        *(long *)((long)param_1 + 0x3a0) = local_50;
        _CFRunLoopAddTimer(local_48,*(undefined8 *)((long)param_1 + 0x390));
        _CFRetain(param_1);
        uVar12 = CONCAT71((int7)((ulong)p_Var5 >> 8),1);
      }
LAB_0010d9e8:
      _pthread_mutex_unlock(local_38);
      goto LAB_0010d9f1;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Invalid magic packet.";
  }
  uVar12 = 0;
  __os_log_internal(0,_md_log_log,0x10,pcVar11);
LAB_0010d9f1:
  return uVar12 & 0xffffffff;
}

