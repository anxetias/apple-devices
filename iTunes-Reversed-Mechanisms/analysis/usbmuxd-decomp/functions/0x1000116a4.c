// rea decompile_all
// name: FUN_1000116a4
// address: 0x1000116a4
// body: available
// range: 0x1000116a4-0x100011b59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100011b55 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000116a4(undefined8 param_1,uint param_2,uint32_t param_3,undefined8 param_4,char *param_5
                  ,char *param_6,char *param_7,long param_8)

{
  char cVar1;
  DNSServiceErrorType DVar2;
  long lVar3;
  long *context;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 local_478;
  long *local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  DNSServiceRef local_448;
  long local_440;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  ___bzero(local_438,0x3f1);
  local_448 = (DNSServiceRef)0x0;
  DVar2 = _DNSServiceConstructFullName(local_438,param_5,param_6,param_7);
  if (DVar2 == 0) {
    local_450 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
    lVar3 = _CFStringCreateWithCString(local_450,local_438,0x8000100);
    if (lVar3 != 0) {
      if ((param_2 & 2) == 0) {
        if (6 < DAT_100021030) {
          FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sReceivedBrowseReplyremovalfor__,
                        "_BrowseReplyReceivedCallback",lVar3);
        }
        FUN_10001224b(param_8,lVar3,&cf__BrowseReplyReceivedCallbackgotbonjourremoval);
        if (param_8 != 0) {
          if ((*(long *)(param_8 + 0x40) != 0) && (lVar4 = _CFArrayGetCount(), 0 < lVar4)) {
            lVar4 = 0;
            do {
              lVar5 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_8 + 0x40),lVar4);
              if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) break;
              cVar1 = _CFEqual(*(long *)(lVar5 + 0x10),lVar3);
              if (cVar1 != '\0') {
                FUN_10000f3d6(*(undefined8 *)(param_8 + 0x40),lVar5);
                FUN_10000f478(lVar5);
                break;
              }
              lVar4 = lVar4 + 1;
              lVar5 = _CFArrayGetCount(*(undefined8 *)(param_8 + 0x40));
            } while (lVar4 < lVar5);
          }
          if ((*(long *)(param_8 + 0x48) != 0) && (lVar4 = _CFArrayGetCount(), 0 < lVar4)) {
            lVar4 = 0;
            do {
              lVar5 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_8 + 0x48),lVar4);
              if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) break;
              cVar1 = _CFEqual(*(long *)(lVar5 + 0x18),lVar3);
              if (cVar1 != '\0') {
                FUN_10000f3d6(*(undefined8 *)(param_8 + 0x48),lVar5);
                FUN_10000f4d8(lVar5);
                break;
              }
              lVar4 = lVar4 + 1;
              lVar5 = _CFArrayGetCount(*(undefined8 *)(param_8 + 0x48));
            } while (lVar4 < lVar5);
          }
          lVar4 = 0;
          context = (long *)0x0;
          goto LAB_100011a36;
        }
      }
      else {
        context = _calloc(1,0x20);
        if (context != (long *)0x0) {
          DVar2 = _DNSServiceResolve(&local_448,0,param_3,param_5,param_6,param_7,FUN_1000122fc,
                                     context);
          if (DVar2 == 0) {
            lVar4 = FUN_10000f5f2(&local_448,FUN_100011b5a,param_8);
            if (lVar4 != 0) {
              local_448 = (DNSServiceRef)0x0;
              local_440 = lVar3;
              lVar5 = FUN_10000f772(lVar4);
              if (lVar5 == 0) {
                lVar3 = local_440;
                if (2 < DAT_100021030) {
                  FUN_1000008d2(3,0,&cf__sCouldnotgetrls,"_BrowseReplyReceivedCallback");
                  lVar3 = local_440;
                }
                goto LAB_100011a36;
              }
              local_478 = 0;
              local_468 = 0;
              uStack_460 = 0;
              local_458 = 0;
              local_470 = context;
              dVar7 = (double)_CFAbsoluteTimeGetCurrent();
              lVar6 = _CFRunLoopTimerCreate(dVar7 + 30.0,0,local_450,0,0,FUN_10000f568,&local_478);
              context[3] = lVar6;
              lVar3 = local_440;
              if (lVar6 == 0) goto LAB_100011a36;
              if (6 < DAT_100021030) {
                FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sInstance__s_attached_,
                              "_BrowseReplyReceivedCallback",param_5);
              }
              _CFRunLoopAddSource(*(undefined8 *)(param_8 + 0x60),lVar5,
                                  *(undefined8 *)(param_8 + 0x68));
              _CFRunLoopAddTimer(*(undefined8 *)(param_8 + 0x60),context[3],
                                 *(undefined8 *)(param_8 + 0x68));
              lVar3 = local_440;
              context[1] = lVar4;
              *context = param_8;
              context[2] = local_440;
              _CFRetain(local_440);
              _CFArrayAppendValue(*(undefined8 *)(param_8 + 0x40),context);
              goto LAB_100011a33;
            }
            if (2 < DAT_100021030) {
              lVar4 = 0;
              FUN_1000008d2(3,0,&cf__sCouldnotcreatebonjoursourcefromservice,
                            "_BrowseReplyReceivedCallback");
              goto LAB_100011a36;
            }
          }
          else if (2 < DAT_100021030) {
            lVar4 = 0;
            FUN_1000008d2(3,0,&cf__sErrordoingDNSServiceResolve____d,"_BrowseReplyReceivedCallback",
                          DVar2);
            goto LAB_100011a36;
          }
          lVar4 = 0;
          goto LAB_100011a36;
        }
        if (2 < DAT_100021030) {
          FUN_1000008d2(3,0,&cf__sNomemforcontext,"_BrowseReplyReceivedCallback");
        }
      }
LAB_100011a33:
      lVar4 = 0;
      context = (long *)0x0;
      goto LAB_100011a36;
    }
  }
  else if (2 < DAT_100021030) {
    FUN_1000008d2(3,0,&cf__sCouldnotconstructfullnamefrom,"_BrowseReplyReceivedCallback");
  }
  lVar4 = 0;
  context = (long *)0x0;
  lVar3 = 0;
LAB_100011a36:
  if (local_448 != (DNSServiceRef)0x0) {
    _DNSServiceRefDeallocate(local_448);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (context != (long *)0x0) {
    FUN_10000f478(context);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

