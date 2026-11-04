// rea decompile_all
// name: FUN_1000122fc
// address: 0x1000122fc
// body: available
// range: 0x1000122fc-0x1000125b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000122fc(undefined8 param_1,uint param_2,uint32_t param_3,int param_4,undefined8 param_5,
                  char *param_6,undefined2 param_7,undefined2 param_8,undefined8 param_9,
                  long *param_10)

{
  long lVar1;
  undefined8 uVar2;
  DNSServiceErrorType DVar3;
  long *context;
  long lVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  double dVar7;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  uint local_3c;
  DNSServiceRef local_38;
  
  local_38 = (DNSServiceRef)0x0;
  if (param_10 == (long *)0x0) {
    return;
  }
  lVar1 = *param_10;
  local_3c = param_2;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) == 0) {
      if (2 < DAT_100021030) {
        pcVar6 = &cf__sNobonjourdevicedescriptions_;
LAB_10001238b:
        context = (long *)0x0;
        FUN_1000008d2(3,0,pcVar6,"_ResolveReplyReceivedCallback");
        goto LAB_10001256c;
      }
    }
    else if (param_4 == 0) {
      context = _calloc(1,0x40);
      if (context == (long *)0x0) {
        if (2 < DAT_100021030) {
          pcVar6 = &cf__sCouldn_tallocatecontextforDNSServiceGetAddrInfo;
          goto LAB_10001238b;
        }
      }
      else {
        uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
        local_48 = param_6;
        lVar4 = _CFStringCreateWithBytes(uVar2,param_9,param_8,0x8000100,0);
        context[6] = lVar4;
        if (lVar4 == 0) goto LAB_10001256c;
        lVar4 = _CFStringCreateWithCString(uVar2,local_48,0x8000100);
        context[4] = lVar4;
        if (lVar4 == 0) goto LAB_10001256c;
        local_50 = uVar2;
        lVar4 = _CFStringCreateWithCString(uVar2,param_5,0x8000100);
        context[3] = lVar4;
        if (lVar4 == 0) goto LAB_10001256c;
        *context = lVar1;
        *(uint32_t *)(context + 2) = param_3;
        *(undefined2 *)(context + 5) = param_7;
        DVar3 = _DNSServiceGetAddrInfo(&local_38,0,param_3,3,local_48,FUN_1000125b9,context);
        if (DVar3 != 0) {
          if (2 < DAT_100021030) {
            FUN_1000008d2(3,0,&cf__sDNSServiceGetAddrInforeturned_d,"_ResolveReplyReceivedCallback",
                          DVar3);
          }
          goto LAB_10001256c;
        }
        lVar4 = FUN_10000f5f2(&local_38,FUN_100011b5a,lVar1);
        context[1] = lVar4;
        if ((lVar4 == 0) || (lVar4 = FUN_10000f772(lVar4), uVar2 = local_50, lVar4 == 0))
        goto LAB_10001256c;
        local_78 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_70 = context;
        dVar7 = (double)_CFAbsoluteTimeGetCurrent();
        lVar5 = _CFRunLoopTimerCreate(dVar7 + 30.0,0,uVar2,0,0,FUN_10000f58b,&local_78);
        context[7] = lVar5;
        if (lVar5 == 0) goto LAB_10001256c;
        _CFRunLoopAddSource(*(undefined8 *)(lVar1 + 0x60),lVar4,*(undefined8 *)(lVar1 + 0x68));
        _CFRunLoopAddTimer(*(undefined8 *)(lVar1 + 0x60),context[7],*(undefined8 *)(lVar1 + 0x68));
        _CFArrayAppendValue(*(undefined8 *)(lVar1 + 0x48),context);
      }
    }
    else if (2 < DAT_100021030) {
      context = (long *)0x0;
      FUN_1000008d2(3,0,&cf__sError_dwhileattemptingtoresolveinstance__s_,
                    "_ResolveReplyReceivedCallback",param_4,param_5);
      goto LAB_10001256c;
    }
  }
  context = (long *)0x0;
LAB_10001256c:
  if (local_38 != (DNSServiceRef)0x0) {
    _DNSServiceRefDeallocate(local_38);
  }
  if (context != (long *)0x0) {
    FUN_10000f4d8(context);
  }
  if ((local_3c & 1) == 0) {
    if (lVar1 != 0) {
      FUN_10000f3d6(*(undefined8 *)(lVar1 + 0x40),param_10);
    }
    FUN_10000f478(param_10);
  }
  return;
}

