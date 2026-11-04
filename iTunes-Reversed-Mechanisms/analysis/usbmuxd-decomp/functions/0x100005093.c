// rea decompile_all
// name: FUN_100005093
// address: 0x100005093
// body: available
// range: 0x100005093-0x10000510e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100005100 to 0x100013245 _CFRunLoopAddSource (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100005093(ulong param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 in_R9;
  undefined1 *puVar7;
  
  puVar7 = &stack0xfffffffffffffff8;
  param_1 = param_1 & 0xffffffff;
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
  pcVar6 = FUN_10000510f;
  uVar3 = _CFSocketCreateWithNative(uVar4,param_1,2,FUN_10000510f,0);
  _DAT_100022b68 = uVar3;
  if (uVar3 == 0) {
    FUN_100010c34();
  }
  else {
    DAT_100022b70 = _CFSocketCreateRunLoopSource(uVar4,uVar3,0);
    param_1 = uVar3;
    if (DAT_100022b70 != 0) {
      uVar4 = _CFRunLoopGetCurrent();
      _CFRunLoopAddSource(uVar4,DAT_100022b70,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10001c048);
      return;
    }
  }
  uVar5 = FUN_100010c18();
  if (param_1 == 2) {
    iVar1 = *(int *)pcVar6;
    cVar2 = FUN_10000df56(iVar1);
    if (cVar2 != '\0') {
      FUN_1000049e8(iVar1);
      return;
    }
    if (3 < DAT_100021030) {
      FUN_1000008d2(4,0,&cf__sclientalreadydisconnectedonfd_d,"HandleNewClientWrapper",iVar1,in_R9,
                    uVar5,uVar4,puVar7);
    }
    _close(iVar1);
    return;
  }
  return;
}

