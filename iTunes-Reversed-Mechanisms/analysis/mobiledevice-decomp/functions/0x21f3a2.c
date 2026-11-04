// rea decompile_all
// name: ACFUFile::fileVersionLog
// address: 0x21f3a2
// body: available
// range: 0x21f3a2-0x21f497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21f493 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFile::fileVersionLog() */

void __thiscall ACFUFile::fileVersionLog(ACFUFile *this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulong uStack_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  lVar1 = (**(code **)(*(long *)this + 0x60))();
  if (lVar1 == 0) {
    fileVersionLog();
  }
  else {
    lVar2 = _CFDataGetBytePtr(lVar1);
    uVar3 = _CFDataGetLength(lVar1);
    if (uVar3 < 0x80) {
      if (uVar3 != 0) {
        uVar5 = 0;
        do {
          *(undefined1 *)((long)&local_a8 + uVar5) = *(undefined1 *)(lVar2 + uVar5);
          uVar5 = uVar5 + 1;
        } while (uVar3 != uVar5);
      }
      uStack_30 = uStack_30 & 0xffffffffffffff;
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,0,"%s::%s: Firmware Version: %s\n","ACFUFile","fileVersionLog",&local_a8);
    }
    else {
      fileVersionLog();
    }
    _CFRelease(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

