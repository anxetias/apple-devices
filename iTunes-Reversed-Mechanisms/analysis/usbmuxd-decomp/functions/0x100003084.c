// rea decompile_all
// name: FUN_100003084
// address: 0x100003084
// body: available
// range: 0x100003084-0x10000335d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100003359 to 0x100000ffa FUN_100000ffa (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100003084(void *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    FUN_10000362a(param_1,*(long *)((long)param_1 + 8) + 8);
    *(undefined8 *)(*(long *)((long)param_1 + 8) + 0x10) = 0;
    *(undefined8 *)((long)param_1 + 8) = 0;
  }
  if ((*(int *)((long)param_1 + 0x80) == 0) &&
     (((*(byte *)((long)param_1 + 0x7c) & 8) != 0 || (*(long *)((long)param_1 + 0x90) == 0)))) {
    lVar2 = *(long *)((long)param_1 + 0xd0);
    *(undefined8 *)((long)param_1 + 0xd0) = 0;
    *(long *)((long)param_1 + 0xd8) = (long)param_1 + 0xd0;
    while (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      *(undefined1 *)(lVar2 + 0x78) = 0;
      pcVar1 = (char *)(lVar2 + 0x7a);
      lVar2 = lVar3;
      if (*pcVar1 == '\0') {
        FUN_100000b8b("DatabufQueueFree",0x124);
      }
    }
    if (*(long *)((long)param_1 + 0x20) != 0) {
      _CFSocketInvalidate();
      _CFRelease(*(undefined8 *)((long)param_1 + 0x20));
      _CFRelease(*(undefined8 *)((long)param_1 + 0x28));
      *(undefined8 *)((long)param_1 + 0x20) = 0;
      *(undefined8 *)((long)param_1 + 0x28) = 0;
      if (*(int *)((long)param_1 + 0x4c) != -1) {
        _close(*(int *)((long)param_1 + 0x4c));
        *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
      }
    }
    if (*(long *)((long)param_1 + 0xb0) != 0) {
      _CFRunLoopSourceInvalidate();
      _CFRelease(*(undefined8 *)((long)param_1 + 0xb0));
      *(undefined8 *)((long)param_1 + 0xb0) = 0;
    }
    if (*(long *)((long)param_1 + 0xa8) != 0) {
      _CFSocketInvalidate();
      _CFRelease(*(undefined8 *)((long)param_1 + 0xa8));
      *(undefined8 *)((long)param_1 + 0xa8) = 0;
    }
    if (*(long *)((long)param_1 + 0x38) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x38) = 0;
    }
    if (*(long *)((long)param_1 + 0x40) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x40) = 0;
    }
    if (*(long *)((long)param_1 + 0x30) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x30) = 0;
    }
    if (*(long *)((long)param_1 + 0x88) != 0) {
      FUN_100000b8b("CleanupClient",0x8ae);
      *(undefined8 *)((long)param_1 + 0x88) = 0;
    }
    if (*(long *)((long)param_1 + 0x90) != 0) {
      FUN_100000b8b("CleanupClient",0x8b4);
      *(undefined8 *)((long)param_1 + 0x90) = 0;
      *(long *)((long)param_1 + 0x98) = (long)param_1 + 0x90;
      *(undefined4 *)((long)param_1 + 0xa0) = 0;
    }
    if (*(long *)((long)param_1 + 0xb8) != 0) {
      FUN_100000b8b("CleanupClient",0x8bc);
      *(undefined8 *)((long)param_1 + 0xb8) = 0;
      *(long *)((long)param_1 + 0xc0) = (long)param_1 + 0xb8;
      *(undefined4 *)((long)param_1 + 200) = 0;
    }
    if (*(int *)((long)param_1 + 0x54) == 4) {
      if (((*(uint *)((long)param_1 + 0x18) & 0xfffffffd) == 0) &&
         (DAT_1000212b8 = DAT_1000212b8 + -1, DAT_1000212b8 == 0)) {
        if (6 < DAT_100021030) {
          FUN_1000008d2(7,0,&cf_lastnetworkclientgone);
        }
        FUN_10000f0f1();
      }
      if (6 < DAT_100021030) {
        FUN_1000008d2(7,0,&cf_removingclient_dfromlisteners,*(undefined4 *)((long)param_1 + 0x14));
      }
      FUN_10000362a(param_1,&DAT_1000212b0);
    }
    _free(param_1);
    FUN_100000ffa();
    return;
  }
  if (6 < DAT_100021030) {
    uVar4 = FUN_10000302f(param_1);
    FUN_1000008d2(7,0,&cf__sRemovalofclient_sdeferredforpendingI_O,"CleanupClient",uVar4);
  }
  *(byte *)((long)param_1 + 0x7c) = *(byte *)((long)param_1 + 0x7c) | 4;
  return;
}

