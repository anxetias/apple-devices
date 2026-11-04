// rea decompile_all
// name: _AFCLogPacketInfo
// address: 0xb727e
// body: available
// range: 0xb727e-0xb74a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb741e to 0xbb951 _AFCLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xb74a3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AFCLogPacketInfo(undefined4 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 local_2b8 [16];
  char local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar1 = *(long *)(param_3 + 0x20);
  if (lVar1 - 1U < 0x28) {
    pcVar2 = *(char **)(&_gAFCPacketTypeNames + lVar1 * 8);
  }
  else {
    pcVar2 = "Unknown";
  }
  _snprintf(local_238,0x200,
            "%s: PacketType=%d PacketName=%s HeaderLength=%d PacketLength=%d PacketID=%d",param_2,
            lVar1,pcVar2,(ulong)*(uint *)(param_3 + 0x10),(ulong)*(uint *)(param_3 + 8),
            (ulong)*(uint *)(param_3 + 0x18));
  switch(*(undefined8 *)(param_3 + 0x20)) {
  case 1:
    lVar1 = _AFCCopyErrorString(*(undefined4 *)(param_3 + 0x28));
    if (lVar1 == 0) {
      local_2b8[0] = 0x6e776f6e6b6e55;
      _AFCLog(param_1,"%s Status=0x%x StatusName=\"%s\"\n",local_238,*(undefined4 *)(param_3 + 0x28)
             );
    }
    else {
      _CFStringGetCString(lVar1,local_2b8,0x80,0x8000100);
      _AFCLog(param_1,"%s Status=0x%x StatusName=\"%s\"\n",local_238,*(undefined4 *)(param_3 + 0x28)
              ,local_2b8);
      _CFRelease(lVar1);
    }
    break;
  default:
    _AFCLog(param_1,"%s\n",local_238);
    break;
  case 3:
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0x18:
  case 0x1d:
    param_3 = param_3 + 0x28;
    goto LAB_000b7328;
  case 4:
    param_3 = param_3 + 0x38;
    goto LAB_000b7328;
  case 6:
  case 0xd:
  case 0x1c:
  case 0x1e:
    param_3 = param_3 + 0x30;
LAB_000b7328:
    _AFCLog(param_1,"%s Path=\"%s\"\n",local_238,param_3);
    break;
  case 7:
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
      _AFCLog(param_1,"PacketID=%d Path=\"%s\"\n",*(undefined4 *)(param_3 + 0x18),param_3 + 0x28);
      return;
    }
    goto LAB_000b74a3;
  case 0xe:
    _AFCLog(param_1,"%s FileRef=%d\n",local_238,*(undefined4 *)(param_3 + 0x28));
    break;
  case 0x1f:
    _AFCLog(param_1,"%s RangeStart=%lli RangeLength=%lli Path=\"%s\"\n",local_238,
            *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),param_3 + 0x38);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return;
  }
LAB_000b74a3:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

