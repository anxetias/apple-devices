// rea decompile_all
// name: FUN_10000907c
// address: 0x10000907c
// body: available
// range: 0x10000907c-0x10000927b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000090d6 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100009277 to 0x10001349d _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000907c(void *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(int *)((long)param_1 + 0x1b8) != 0) || (*(int *)((long)param_1 + 0x1bc) != 0)) {
    if (6 < DAT_100021030) {
      uVar1 = FUN_100008d22(param_1);
      FUN_1000008d2(7,0,&cf__sreleasedeferredduetopendingI_O__p__s,"MuxInterfaceRelease",param_1,
                    uVar1);
      return;
    }
    return;
  }
  if (6 < DAT_100021030) {
    uVar1 = FUN_100008d22(param_1);
    FUN_1000008d2(7,0,&cf__sreleasing__p__s,"MuxInterfaceRelease",param_1,uVar1);
  }
  FUN_10000f83d(param_1);
  FUN_100003548(param_1);
  *(undefined8 *)((long)param_1 + 8) = 0;
  if (*(long *)((long)param_1 + 0x20) != 0) {
    uVar1 = _CFRunLoopGetCurrent();
    _CFRunLoopRemoveSource
              (uVar1,*(undefined8 *)((long)param_1 + 0x20),
               *(undefined8 *)PTR__kCFRunLoopDefaultMode_10001c048);
    _CFRelease(*(undefined8 *)((long)param_1 + 0x20));
    *(undefined8 *)((long)param_1 + 0x20) = 0;
  }
  if (*(long *)((long)param_1 + 0x28) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x28) = 0;
  }
  if (*(long *)((long)param_1 + 0x198) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x198) = 0;
  }
  if (*(int *)((long)param_1 + 0x18) == 2) {
    if (*(long *)((long)param_1 + 0x138) != 0) {
      FUN_10001117e(*(long *)((long)param_1 + 0x138),&cf_sentfromMuxInterfaceRelease);
      _CFRelease(*(undefined8 *)((long)param_1 + 0x138));
      *(undefined8 *)((long)param_1 + 0x138) = 0;
    }
    if (*(long *)((long)param_1 + 0x140) == 0) goto LAB_10000920a;
    puVar3 = (undefined8 *)((long)param_1 + 0x140);
  }
  else {
    if ((*(int *)((long)param_1 + 0x18) != 1) || (*(long *)((long)param_1 + 0x138) == 0))
    goto LAB_10000920a;
    puVar3 = (undefined8 *)((long)param_1 + 0x138);
  }
  _CFRelease();
  *puVar3 = 0;
LAB_10000920a:
  if (*(long **)((long)param_1 + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)((long)param_1 + 0x158) + 0x18))();
    *(undefined8 *)((long)param_1 + 0x158) = 0;
  }
  iVar2 = *(int *)((long)param_1 + 0x150);
  if (iVar2 != 0) {
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,0,&cf__s__dIOObjectRelease_0x_x_,"MuxInterfaceRelease",0x2c5);
      iVar2 = *(int *)((long)param_1 + 0x150);
    }
    _IOObjectRelease(iVar2);
  }
  _free(param_1);
  return;
}

