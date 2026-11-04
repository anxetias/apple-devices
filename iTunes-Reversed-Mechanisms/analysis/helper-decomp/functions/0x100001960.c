// rea decompile_all
// name: entry
// address: 0x100001960
// body: available
// range: 0x100001960-0x100001a74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  pid_t pVar4;
  ID self;
  ID IVar5;
  
  iVar3 = -1;
  if (param_1 < 4) {
    iVar2 = -1;
  }
  else {
    iVar1 = _strcmp(*(char **)(param_2 + 8),"--pipe");
    iVar2 = -1;
    if (iVar1 == 0) {
      iVar2 = _atoi(*(char **)(param_2 + 0x10));
      iVar3 = _atoi(*(char **)(param_2 + 0x18));
      FUN_100009c14(iVar2,iVar3);
    }
  }
  self = NSAutoreleasePool::new((ID)&_OBJC_CLASS___NSAutoreleasePool,"new");
  IVar5 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar5 = NSUserDefaults::boolForKey_(IVar5,"boolForKey:",&cf_WaitForDebugger);
  if ((char)IVar5 != '\0') {
    pVar4 = _getpid();
    _NSLog(&
           cf_______________________________________________Waitingfordebugger_Startgdbandrunthesecommandstoattach_attach_dup3setWaitForDebugger_0______________________________________________
           ,pVar4);
    do {
      _sleep(1);
    } while( true );
  }
  if (3 < param_1) {
    iVar1 = _strcmp(*(char **)(param_2 + 8),"--pipe");
    if (iVar1 == 0) {
      FUN_100009c1a(iVar2,iVar3,FUN_100001a75,0);
    }
  }
  NSAutoreleasePool::drain(self,"drain");
  return 0;
}

