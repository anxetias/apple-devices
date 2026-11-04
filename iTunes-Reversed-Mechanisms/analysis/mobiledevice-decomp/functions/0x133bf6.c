// rea decompile_all
// name: __AMDeviceIsBonjourDeviceOnLocalhost
// address: 0x133bf6
// body: available
// range: 0x133bf6-0x133d72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x133d6e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMDeviceIsBonjourDeviceOnLocalhost(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 local_a0;
  char local_9f;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((param_1 == 0) || (*(long *)(param_1 + 0xa8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = _CFDataGetLength();
    if (uVar1 < 0x81) {
      uVar3 = *(ulong *)(param_1 + 0xa8);
      uVar2 = _CFDataGetLength(uVar3);
      _CFDataGetBytes(uVar3,0,uVar2,&local_a0);
      if (local_9f == '\x1e') {
        uVar3 = 0;
        uVar1 = uVar3;
        if (((local_98 != 0) || (local_94 != 0)) || (uVar1 = 0, local_90 != 0)) goto LAB_00133c68;
        bVar4 = local_8c == 0x1000000;
      }
      else {
        if (local_9f != '\x02') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"ss_family is %d, not AF_INET(%d) or AF_INET6(%d).",
                            local_9f,2,0x1e);
          uVar1 = 0;
          goto LAB_00133c68;
        }
        bVar4 = local_9c == 0x100007f;
      }
      uVar1 = CONCAT71((int7)(uVar3 >> 8),bVar4);
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Device\'s network address doesn\'t fit in sockaddr.");
      uVar1 = 0;
    }
  }
LAB_00133c68:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

