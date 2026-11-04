// rea decompile_all
// name: entry
// address: 0x10000119a
// body: available
// range: 0x10000119a-0x10000158c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100001445 to 0x10001348b _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10000155e to 0x10001348b _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100001565 to 0x10001348b _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 entry(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 unaff_retaddr;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined8 local_38;
  
  DAT_100021298 = _asl_open("com.apple.usbmuxd","usbmuxd",0);
  iVar3 = FUN_100010d99();
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    _exit(iVar3);
  }
  DAT_1000212d0 = _IORegisterForSystemPower(0,&local_40,FUN_100001149,local_44);
  if (DAT_1000212d0 == 0) {
    _puts("IORegisterForSystemPower failed");
    return 1;
  }
  uVar5 = _CFRunLoopGetCurrent();
  uVar6 = _IONotificationPortGetRunLoopSource(local_40);
  _CFRunLoopAddSource(uVar5,uVar6,*(undefined8 *)PTR__kCFRunLoopCommonModes_10001c040);
  _signal(0xd);
  local_68 = 0xf;
  local_60 = 0x11fffa;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = 0;
  cVar2 = FUN_10000b7c2(&local_68,FUN_10000158d);
  if (cVar2 == '\0') {
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf__s_failedtoregisterSIGTERMstuff_terminationwillnotbegraceful,"main");
    }
  }
  else {
    _signal(0xf);
  }
  local_68 = 2;
  local_60 = 0x11fffa;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = 0;
  cVar2 = FUN_10000b7c2(&local_68,FUN_10000158d);
  if (cVar2 == '\0') {
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf__s_failedtoregisterSIGINTstuff_terminationwillnotbegraceful,"main");
    }
  }
  else {
    _signal(2);
  }
  FUN_1000015ca(param_1,param_2);
  if (DAT_100021288 == 0) {
    _asl_add_log_file(DAT_100021298,2);
  }
  FUN_100001667();
  cVar2 = FUN_100001c3c(&local_68,&local_38,0);
  if (((cVar2 != '\0') && (cVar2 = FUN_10000b7c2(&local_68,local_38), cVar2 == '\0')) &&
     (3 < DAT_100021030)) {
    FUN_1000008d2(4,0,&cf__s_Failedtoregisterprefsfilewatcherkevent,"main");
  }
  iVar3 = __InitializeMobileDevice();
  if (iVar3 != 0) {
    if (1 < DAT_100021030) {
      FUN_1000008d2(2,0,&cf_CouldnotinitalizeMobileDevice_framework_);
    }
LAB_100001440:
                    /* WARNING: Subroutine does not return */
    _exit(1);
  }
  if (4 < DAT_100021030) {
    uVar5 = FUN_100000dea(PTR_cf_usbmuxd_543_0_0_700_1_100021270);
    FUN_1000008d2(5,0,&cf__son_sat_s_running_sbit,uVar5,"Oct 12 2026","02:57:57","64");
  }
  DAT_1000212a9 = FUN_10001046c();
  if (DAT_100021288 == 0) {
    FUN_100001e99();
  }
  else {
    iVar3 = FUN_100001d13();
    if (iVar3 == -1) {
      if (1 < DAT_100021030) {
        FUN_1000008d2(2,0,&cf__sfailedtocreatelisteningsocket,"main");
      }
      goto LAB_100001440;
    }
  }
  while (DAT_100022b50 < 8) {
    uVar5 = FUN_100000b14();
    FUN_100000b8b("main",0x4f1,uVar5);
  }
  FUN_100005093();
  FUN_10000c7be();
  FUN_10000953a();
  _CFRunLoopRun();
  if (4 < DAT_100021030) {
    FUN_1000008d2(5,0,&cf_Idle_stopping_);
  }
  if (DAT_100022b54 == '\x01') {
    if (5 < DAT_100021030) {
      FUN_1000008d2(6,0,&cf_Exitingwithoutcleaningup_);
    }
  }
  else {
    __FinalizeMobileDevice();
    FUN_10000949f();
    if (DAT_100021330 != (undefined8 *)0x0) {
      uVar4 = 0x503;
      puVar7 = DAT_100021330;
      do {
        puVar1 = (undefined8 *)*puVar7;
        DAT_100021330 = puVar1;
        puVar7[6] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[4] = (void *)puVar7[5];
        puVar7[8] = 0;
        *(undefined4 *)(puVar7 + 9) = 0;
        puVar7[3] = unaff_retaddr;
        *(undefined4 *)(puVar7 + 0xf) = 0;
        puVar7[0x10] = "main";
        *(undefined4 *)(puVar7 + 0x11) = uVar4;
        _free((void *)puVar7[5]);
        _free(puVar7);
        uVar4 = 0x507;
        puVar7 = puVar1;
      } while (puVar1 != (undefined8 *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  _exit(0);
}

