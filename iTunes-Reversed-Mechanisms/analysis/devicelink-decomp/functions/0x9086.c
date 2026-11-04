// rea decompile_all
// name: _SocketCreateServer
// address: 0x9086
// body: available
// range: 0x9086-0x917d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * _SocketCreateServer(ushort param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long extraout_RAX;
  undefined1 local_24 [4];
  
  piVar2 = _calloc(0x28,1);
  if (piVar2 != (int *)0x0) {
    if (_sSocketOldSignalHandler == 0) {
      _signal(0xd);
      _sSocketOldSignalHandler = extraout_RAX;
    }
    piVar2[2] = 0;
    *(undefined1 *)((long)piVar2 + 0x19) = 2;
    *(ushort *)((long)piVar2 + 0x1a) = param_1 << 8 | param_1 >> 8;
    piVar2[7] = 0;
    iVar1 = _socket(2,1,0);
    *piVar2 = iVar1;
    if (iVar1 < 0) {
      piVar2[1] = 1;
    }
    else {
      iVar1 = _setsockopt(iVar1,0xffff,4,local_24,4);
      if (iVar1 == 0) {
        iVar1 = _bind(*piVar2,(sockaddr *)(piVar2 + 6),0x10);
        if (iVar1 < 0) {
          piVar2[1] = 2;
        }
        else {
          iVar1 = _listen(*piVar2,param_2);
          if (iVar1 < 0) {
            piVar2[1] = 3;
          }
          else {
            piVar2[1] = 0;
          }
        }
      }
      else {
        piVar2[1] = 7;
      }
    }
  }
  return piVar2;
}

