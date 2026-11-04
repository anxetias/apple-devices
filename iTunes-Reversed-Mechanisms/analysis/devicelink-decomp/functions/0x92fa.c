// rea decompile_all
// name: _SocketConnect
// address: 0x92fa
// body: available
// range: 0x92fa-0x95a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * _SocketConnect(char *param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long extraout_RAX;
  hostent *phVar4;
  int *piVar5;
  char *pcVar6;
  uint local_b8 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar3 = _calloc(0x28,1);
  if (puVar3 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (_sSocketOldSignalHandler == 0) {
    _signal(0xd);
    _sSocketOldSignalHandler = extraout_RAX;
  }
  puVar3[1] = 0;
  phVar4 = _gethostbyname(param_1);
  if (phVar4 == (hostent *)0x0) {
    iVar2 = _inet_pton(2,param_1,local_b8);
    if (iVar2 != 1) {
      puVar3[1] = 5;
      return puVar3;
    }
    puVar3[7] = local_b8[0];
  }
  else {
    ___memcpy_chk(puVar3 + 7,*phVar4->h_addr_list,(long)phVar4->h_length,0xc);
  }
  *(undefined1 *)((long)puVar3 + 0x19) = 2;
  *(ushort *)((long)puVar3 + 0x1a) = param_2 << 8 | param_2 >> 8;
  uVar1 = _socket(2,1,0);
  *puVar3 = uVar1;
  if ((int)uVar1 < 0) {
    puVar3[1] = 1;
    return puVar3;
  }
  iVar2 = _fcntl(uVar1,4,4);
  if (iVar2 != 0) {
    __SocketErrorCheckAndLogIfError("SocketConnect (fcntl to set non blocking for connect)",iVar2);
  }
  iVar2 = _connect(*puVar3,(sockaddr *)(puVar3 + 6),0x10);
  if (-1 < iVar2) {
    return puVar3;
  }
  piVar5 = ___error();
  if (*piVar5 != 0x24) {
    __SocketErrorCheckAndLogIfError("SocketConnect (connect)",iVar2);
    puVar3[0] = 0xffffffff;
    puVar3[1] = 6;
    return puVar3;
  }
  local_38 = 10;
  uStack_30 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[0xe] = 0;
  local_b8[0xf] = 0;
  local_b8[0x10] = 0;
  local_b8[0x11] = 0;
  local_b8[0x12] = 0;
  local_b8[0x13] = 0;
  local_b8[0x14] = 0;
  local_b8[0x15] = 0;
  local_b8[0x16] = 0;
  local_b8[0x17] = 0;
  local_b8[0x18] = 0;
  local_b8[0x19] = 0;
  local_b8[0x1a] = 0;
  local_b8[0x1b] = 0;
  local_b8[0x1c] = 0;
  local_b8[0x1d] = 0;
  local_b8[0x1e] = 0;
  local_b8[0x1f] = 0;
  uVar1 = *puVar3;
  if ((PTR____bzero_5_00015068 == (undefined *)0x0) ||
     (iVar2 = ___darwin_check_fd_set_overflow(uVar1,local_b8,0), iVar2 != 0)) {
    local_b8[(ulong)(long)(int)uVar1 >> 5] =
         local_b8[(ulong)(long)(int)uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
  }
  iVar2 = _select_1050(*puVar3 + 1,local_b8,0,0,&local_38);
  if (iVar2 == 0) {
    pcVar6 = "SocketConnect timeout on select";
LAB_0000956e:
    _SocketLog(pcVar6);
  }
  else {
    if (iVar2 != -1) {
      uVar1 = *puVar3;
      if (((PTR____bzero_5_00015068 == (undefined *)0x0) ||
          (iVar2 = ___darwin_check_fd_set_overflow(uVar1,local_b8,0), iVar2 != 0)) &&
         ((local_b8[(ulong)(long)(int)uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0)) {
        if (puVar3[1] != 6) {
          iVar2 = _fcntl(*puVar3,4,0);
          if (iVar2 == 0) {
            return puVar3;
          }
          __SocketErrorCheckAndLogIfError
                    ("SocketConnect (fcntl to set blocking for reads/writes)",iVar2);
          return puVar3;
        }
        goto LAB_0000957a;
      }
      pcVar6 = "SocketConnect: error connecting: read_fd not set";
      goto LAB_0000956e;
    }
    __SocketErrorCheckAndLogIfError("SocketConnect (select)",0xffffffff);
  }
  puVar3[1] = 6;
LAB_0000957a:
  if (0 < (int)*puVar3) {
    _shutdown(*puVar3,2);
    _close(*puVar3);
    *puVar3 = 0;
  }
  return puVar3;
}

