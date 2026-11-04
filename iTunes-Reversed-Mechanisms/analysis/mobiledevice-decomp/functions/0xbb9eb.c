// rea decompile_all
// name: _AFCSocketIsDisconnected
// address: 0xbb9eb
// body: available
// range: 0xbb9eb-0xbbaa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AFCSocketIsDisconnected(int param_1)

{
  int kq;
  int iVar1;
  undefined8 unaff_R14;
  ulong uVar2;
  timespec local_58;
  kevent local_40;
  
  if (param_1 == -1) {
    uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  }
  else {
    kq = _kqueue();
    if (-1 < kq) {
      local_40.ident = (uintptr_t)param_1;
      local_40.filter = -1;
      local_40.flags = 0x25;
      local_40._12_8_ = 0;
      local_40._20_8_ = 0;
      local_40.udata._4_4_ = 0;
      iVar1 = _kevent(kq,&local_40,1,(kevent *)0x0,0,(timespec *)0x0);
      if (iVar1 == 0) {
        local_58.tv_sec = 0;
        local_58.tv_nsec = 0;
        uVar2 = 0;
        iVar1 = _kevent(kq,(kevent *)0x0,0,&local_40,1,&local_58);
        _close(kq);
        if (-1 < iVar1) {
          uVar2 = (ulong)((int)local_40._8_4_ < 0 && iVar1 == 1);
        }
        goto LAB_000bba51;
      }
      _close(kq);
    }
    uVar2 = 0;
  }
LAB_000bba51:
  return uVar2 & 0xffffffff;
}

