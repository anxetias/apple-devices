// rea decompile_all
// name: _SocketCreateLocalServer
// address: 0x917e
// body: available
// range: 0x917e-0x927c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * _SocketCreateLocalServer(undefined8 param_1,int param_2)

{
  char *pcVar1;
  uid_t uVar2;
  int iVar3;
  int *piVar4;
  long extraout_RAX;
  size_t sVar5;
  
  piVar4 = _calloc(0x88,1);
  if (piVar4 != (int *)0x0) {
    if (_sSocketOldSignalHandler == 0) {
      _signal(0xd);
      _sSocketOldSignalHandler = extraout_RAX;
    }
    piVar4[2] = 1;
    *(undefined1 *)((long)piVar4 + 0x19) = 1;
    pcVar1 = (char *)((long)piVar4 + 0x1a);
    uVar2 = _getuid();
    ___sprintf_chk(pcVar1,0,0x6e,"/tmp/%s_%d",param_1,uVar2);
    sVar5 = _strlen(pcVar1);
    *(char *)(piVar4 + 6) = (char)sVar5 + '\x02';
    iVar3 = _socket(1,1,0);
    *piVar4 = iVar3;
    if (iVar3 < 0) {
      piVar4[1] = 1;
    }
    else {
      _unlink(pcVar1);
      iVar3 = _bind(*piVar4,(sockaddr *)(piVar4 + 6),(uint)*(byte *)(piVar4 + 6));
      if (iVar3 < 0) {
        piVar4[1] = 2;
      }
      else {
        iVar3 = _listen(*piVar4,param_2);
        if (iVar3 < 0) {
          piVar4[1] = 3;
        }
        else {
          piVar4[1] = 0;
        }
      }
    }
  }
  return piVar4;
}

